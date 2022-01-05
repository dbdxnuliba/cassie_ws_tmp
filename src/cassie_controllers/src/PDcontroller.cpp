//
// Created by jv on 03/11/21.
//
#include <cassie_controllers/PDcontroller.hpp>
#include <cassie_common_toolbox/motion_transition.hpp>
#include <cassie_common_toolbox/RadioButtonMap.hpp>
#include <cassie_common_toolbox/bezier_tools.hpp>
#include <roslib_utilities/ros_package_utilities.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_common_toolbox/linear_interpolation.hpp>

using namespace Eigen;
using namespace cassie_model;
using namespace control_utilities;
USING_NAMESPACE_QPOASES



PDcontroller::PDcontroller(ros::NodeHandle &nh, cassie_model::Cassie &robot) : nh(&nh), tarsusSolver(robot) {
    this->robot = &robot;
}

void PDcontroller::update(VectorXd &u, OUTPUT_HLIP &output){
    MatrixXd Kp = 100*MatrixXd::Identity(10,10);
    MatrixXd Kd = 10*MatrixXd::Identity(10,10);

    this->robot->kinematics.update(this->robot->model, this->robot->q, this->robot->dq);

    // VectorXd q_actual(10), dq_actual(10);
    for (int i=0; i<this->robot->iRotorMap.size(); i++){
        int ind = this->robot->iRotorMap(i);
        this->q_actual(i) = this->robot->q(ind);
        this->dq_actual(i) = this->robot->dq(ind);
    }

    // VectorXd q_desired(10), dq_desired(10);
    this->q_desired.setZero(); this->dq_desired.setZero();
    this->runInverseKinematics(output.cache.ya);

    // Compute errors 
    VectorXd q_error  = this->q_actual - this->q_desired;
    VectorXd dq_error = this->dq_actual - this->dq_desired;
    u = - Kp.cwiseProduct(q_error) - Kd.cwiseProduct(dq_error);
}

void PDcontroller::runInverseKinematics(VectorXd &ya){
    VectorXd plf = ya.segment(0,5);
    VectorXd prf = ya.segment(5,5);

    VectorXd x(10); x.setZero();
    this->InverseKinematics(x);

    this->q_desired  = x;
    this->dq_desired = Jik.inverse() * this->output.dyd;
}

void PDcontroller::InverseKinematics(VectorXd& x){
    int nMax = 100;
    double tol = 0.01;

    VectorXd q(22);
    q << this->robot->q;
    q.segment(0,6).setConstant(0.0);
    q(LeftShinPitch)   = 0.0;
    q(RightShinPitch)  = 0.0;

    VectorXd F(10);
    MatrixXd J(10,10);
    double f_d = 0.0;

    for (int i=0; i<iteration_limit; ++i){
        // Reinitialize the state at the current guess
        this->IKfunction(x, F);

        // Check for completion
        f_d = 0.5 * F.transpose() * F;
        if (f_d < tol) {
            return;
        }

        // Compute the Jacobian
        this->IKfunction.IKjacobian(x, q, Jik);

        // Perform the update
        x = x - (Jik.transpose() * (Jik * Jik.transpose()).inverse()) * F;
    }
    ROS_WARN("IK DID NOT CONVERGE");
}

void PDcontroller::IKfunction(VectorXd &x, VectorXd &q, VectorXd &F){
    this->cache.q(LeftHeelSpring)  = x(0);
    this->cache.q(RightHeelSpring) = x(1);
    {
        VectorWrap F_(F);
        SymFunction::p_achilles_constraint(F_, q);
    }
}

void PDcontroller::IKjacobian(const VectorXd &x, MatrixXd& Jik) const {
    // 'x' has dimensions n x 1
    // It contains the current estimates for the parameters.
    VectorXd q(22);
    q << this->robot->q;
    for (int i=0; i<6; ++i){
        q(i) = 0.0;
    }
    for (int i=0; i<this->robot->iRotorMap.size(); ++i) {
        q(this->robot->iRotorMap(i)) = x(i);
    }
    q(LeftShinPitch)  = 0.0;
    q(RightShinPitch) = 0.0;
    q(LeftTarsusPitch)  = 0.226893 - q(LeftKneePitch);
    q(RightTarsusPitch) = 0.226893 - q(RightKneePitch);

    // 'Jik' has dimensions m x n
    // It will contain the jacobian of the errors.
    MatrixXd J_leftSole(5,22), J_rightSole(5,22);

    SymFunction::J_leftSole_constraint(J_leftSole, q);
    SymFunction::J_rightSole_constraint(J_rightSole, q);

    Jik.row(0) << J_leftSole(0,LeftHipRoll), 0.0, J_leftSole(0,LeftHipPitch), J_leftSole(0,LeftKneePitch) - J_leftSole(0,LeftTarsusPitch), 0.0,     0.0, 0.0, 0.0, 0.0, 0.0;
    Jik.row(1) << J_leftSole(1,LeftHipRoll), 0.0, J_leftSole(1,LeftHipPitch), J_leftSole(1,LeftKneePitch) - J_leftSole(1,LeftTarsusPitch), 0.0,     0.0, 0.0, 0.0, 0.0, 0.0;
    Jik.row(2) << J_leftSole(2,LeftHipRoll), 0.0, J_leftSole(2,LeftHipPitch), J_leftSole(2,LeftKneePitch) - J_leftSole(2,LeftTarsusPitch), 0.0,     0.0, 0.0, 0.0, 0.0, 0.0;
    Jik.row(3) << 0.0, 0.0, 0.0, 0.0, -1.0,    0.0, 0.0, 0.0, 0.0, 0.0;
    Jik.row(4) << 0.0, 1.0, 0.0, 0.0,  0.0,    0.0, 0.0, 0.0, 0.0, 0.0;

    Jik.row(5) << 0.0, 0.0, 0.0, 0.0, 0.0,     J_rightSole(0,RightHipRoll), 0.0, J_rightSole(0,RightHipPitch), J_rightSole(0,RightKneePitch) - J_rightSole(0,RightTarsusPitch), 0.0;
    Jik.row(6) << 0.0, 0.0, 0.0, 0.0, 0.0,     J_rightSole(1,RightHipRoll), 0.0, J_rightSole(1,RightHipPitch), J_rightSole(1,RightKneePitch) - J_rightSole(1,RightTarsusPitch), 0.0;
    Jik.row(7) << 0.0, 0.0, 0.0, 0.0, 0.0,     J_rightSole(2,RightHipRoll), 0.0, J_rightSole(2,RightHipPitch), J_rightSole(2,RightKneePitch) - J_rightSole(2,RightTarsusPitch), 0.0;
    Jik.row(8) << 0.0, 0.0, 0.0, 0.0, 0.0,     0.0, 0.0, 0.0, 0.0, -1.0;
    Jik.row(9) << 0.0, 0.0, 0.0, 0.0, 0.0,     0.0, 1.0, 0.0, 0.0,  0.0;
}
