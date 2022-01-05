//
// Created by jv on 03/11/21.
//
#include <cassie_controllers/TSCQPsolver_SLIP.hpp>
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

void TSCQPsolver_SLIP::Cache::init(Config* config) {
    // Size all QP matrices for speeeeeed
    this->b_y.resize(config->outputsize);
    this->Proj.resize(config->qsize,config->qsize);
    this->d2y.resize(config->outputsize);

    this->Js.resize(config->holsize, config->qsize);
    this->dJs.resize(config->holsize, config->qsize);

    this->qpsol.resize(config->nV);
    this->Fdes.resize(config->holsize);
    this->u.resize(config->usize);
    this->ddqtar.resize(config->qsize);

    this->G.resize(config->nV, config->nV);
    this->g.resize(config->nV);

    this->Aconstr.resize(config->nC, config->nV);
    this->lbA.resize(config->nC);
    this->ubA.resize(config->nC);

    this->GRF.resize(2);

    this->reset();
}

void TSCQPsolver_SLIP::Cache::reset() {
    this->Jc.setZero();
    this->dJc.setZero();
    this->Js.setZero();
    this->dJs.setZero();
    this->Jcs.setZero();
    this->dJcs.setZero();

    this->Proj.setZero();
    this->b_y.setZero();
    this->d2y.setZero();

    this->qpsol.setZero();
    this->ddqtar.setZero();
    this->u.setZero();
    this->Fdes.setZero();

    this->G.setZero();
    this->g.setZero();
    this->Aconstr.setZero();
    this->lbA.setZero();
    this->ubA.setZero();
    this->GRF.setZero();
}

void TSCQPsolver_SLIP::Memory::init() {
    this->u_prev.resize(10);
    this->reset();
}

void TSCQPsolver_SLIP::Memory::reset() {
    this->qp_initialized = false;
    this->u_prev.setZero();
}

void TSCQPsolver_SLIP::Config::init() {
    this->W_outputs.resize(this->outputsize,this->outputsize);
    this->W_outputs.setZero();

    this->Reg_Matrix.resize(this->nV,this->nV);
}

void TSCQPsolver_SLIP::Config::reconfigure() {
    this->isSim = false;
    ros::param::get("/cassie/is_simulation", this->isSim);
    VectorXd weights;
    VectorXd reg(this->nV);
    reg.setZero();
    if (this->control_mode == 1) {
        //walking
        this->paramChecker.checkAndUpdateYaml("walking_qp/kp", this->Kpy);
        this->paramChecker.checkAndUpdateYaml("walking_qp/kd", this->Kdy);
        this->paramChecker.checkAndUpdateYaml("walking_qp/output_selec", this->output_selec);
        this->paramChecker.checkAndUpdateYaml("walking_qp/weights", weights);
        this->paramChecker.checkAndUpdate("walking_qp/w_outputs", this->w_outputs);
        this->paramChecker.checkAndUpdate("walking_qp/nQPIter", this->nQPIter);
        reg.segment(this->qsize,this->nV-this->qsize).setConstant(0.000001);
    }else if (this->control_mode ==0) {
        //standing
        this->paramChecker.checkAndUpdateYaml("standing_qp/kp", this->Kpy);
        this->paramChecker.checkAndUpdateYaml("standing_qp/kd", this->Kdy);
        this->paramChecker.checkAndUpdateYaml("standing_qp/output_selec", this->output_selec);
        this->paramChecker.checkAndUpdateYaml("standing_qp/weights", weights);
        this->paramChecker.checkAndUpdate("standing_qp/w_outputs", this->w_outputs);
        this->paramChecker.checkAndUpdate("standing_qp/nQPIter", this->nQPIter);
        VectorXd reg_u, reg_Fcontact,reg_Finteral;
        this->paramChecker.checkAndUpdateYaml("standing_qp/reg_u", reg_u);
        this->paramChecker.checkAndUpdateYaml("standing_qp/reg_Fcontact", reg_Fcontact);
        this->paramChecker.checkAndUpdateYaml("standing_qp/reg_Finteral", reg_Finteral);
        reg.segment(this->qsize,5) = reg_u;
        reg.segment(this->qsize+5,5) = reg_u;
        reg.segment(this->qsize+this->usize,5) = reg_Fcontact;
        reg.segment(this->qsize+this->usize+5,5) = reg_Fcontact;
        reg.segment(this->qsize+this->usize+10,6) = reg_Finteral;
    }
    this->W_outputs.diagonal() << weights;
    this->Reg_Matrix.diagonal() << reg;

    // Robot torque
    this->Be.resize(22,10);
    this->Be.setZero();
    this->Be(LeftHipRoll,    0) = 25.;
    this->Be(LeftHipYaw,     1) = 25.;
    this->Be(LeftHipPitch,   2) = 16.;
    this->Be(LeftKneePitch,  3) = 16.;
    this->Be(LeftFootPitch,  4) = 50.;
    this->Be(RightHipRoll,   5) = 25.;
    this->Be(RightHipYaw,    6) = 25.;
    this->Be(RightHipPitch,  7) = 16.;
    this->Be(RightKneePitch, 8) = 16.;
    this->Be(RightFootPitch, 9) = 50.;

    // Contact conditions
    double mu = .4;
    double half_foot_length = 0.0873;
    this->half_foot_length = half_foot_length;

    this->contact_pyramid.resize(9, 5);
    this->contact_pyramid << 0., 0., -1., 0., 0.,
    1., 0., -mu/sqrt(2.), 0., 0.,
    -1., 0., -mu/sqrt(2.), 0., 0.,
    0., 1., -mu/sqrt(2.), 0., 0.,
    0., -1., -mu/sqrt(2.), 0., 0.,
    0., 0., -half_foot_length, 0., 1.,
    0., 0., -half_foot_length, 0, -1.,
    0., 0., -half_foot_length*mu, 1., 0.,
    0., 0., -half_foot_length*mu, -1., 0.;

    // Safe torque bounds
    this->torque_bounds.resize(10);
    this->torque_bounds << 112.5/25, 112.5/25, 195.2/16, 195.2/16, 0.9,
    112.5/25, 112.5/25, 195.2/16, 195.2/16, 0.9;

    // Bounds on in the air
    this->lb.resize(this->nV);
    this->lb << -INFTY * VectorXd::Ones(this->qsize),      // ddq
            -this->torque_bounds,    // torque
            -INFTY * VectorXd::Ones(this->holsize); //holonomic
    this->ub.resize(this->nV);
    this->ub << INFTY * VectorXd::Ones(this->qsize),       // ddq
            this->torque_bounds,     // torque
            INFTY * VectorXd::Ones(this->holsize); //holonomic
}

TSCQPsolver_SLIP::TSCQPsolver_SLIP(ros::NodeHandle &nh, cassie_model::Cassie &robot, int control_mode) : nh(&nh), tarsusSolver(robot) {
    this->robot = &robot;
    this->config.control_mode = control_mode;

    if (this->config.control_mode == 1) {
        //walking with line contact
        this->config.outputsize = 10;
        this->config.holsize = 11;
        this->config.qsize = 22;
        this->config.usize = 10;
        this->config.othercons_size = 9;
    } else if (this->config.control_mode == 0){
        //standing
        this->config.outputsize = 6;
        this->config.holsize = 16;
        this->config.qsize = 22;
        this->config.usize = 10;
        this->config.othercons_size = 18;
    } else if (this->config.control_mode == -1){
        //in air
        this->config.outputsize = 9;
        this->config.holsize = 12;
        this->config.qsize = 22;
        this->config.usize = 10;
        this->config.othercons_size = 0;
    }else {
        ROS_ERROR("INVALID CONTROL MODE");
    }

    // Number of optimization variables
    this->config.nV = this->config.qsize + this->config.usize + this->config.holsize;
    // Number of optimization constraints
    this->config.nC = this->config.qsize + this->config.othercons_size + this->config.holsize;

    // Create the QP solver
    qpsolver = new SQProblem(this->config.nV, this->config.nC); // (num vars, num constr)

    // Set QP Options
    Options options;
    options.setToMPC(); //options.setToDefault();
    options.enableRegularisation = BT_FALSE;
    options.printLevel = PL_LOW;//PL_MEDIUM;
    qpsolver->setOptions( options );

    // Parameter checker
    this->config.paramChecker.init(nh.getNamespace() + "/stepping");

    // All the storage
    this->cache.init(&this->config);
    this->memory.init();
    this->config.init();

    this->reconfigure();
}

void TSCQPsolver_SLIP::reset() {
    this->cache.reset();
    this->memory.reset();
}

bool TSCQPsolver_SLIP::reconfigure() {
    std::cout << "Polling QP rosparams under: " << this->config.paramChecker.node.getNamespace() << std::endl;
    this->config.reconfigure();
    return true;
}

void TSCQPsolver_SLIP::update(VectorXd &u, OUTPUT_SLIP &output) {
    this->cache.u = this->getTorqueQP(output);
    u = this->cache.u;
}



VectorXd TSCQPsolver_SLIP::getTorqueQP(OUTPUT_SLIP &output) {
    // Formulate the QP
    // States are X = [ddq; u; F] \in \mathbb{R}^{43} (22,10,11)

    // Output error
    VectorXd eta(this->config.outputsize*2);
    eta << output.cache.ya - output.cache.yd,
    output.cache.dya - output.cache.dyd;

    // std::cout << "eta: " << eta << std::endl;
    // std::cout << "deta: " << output.cache.d2yd << std::endl;

    //use rigid simulation instead
    this->robot->q(LeftHeelSpring) = 0;
    this->robot->q(RightHeelSpring) = 0;
    this->robot->dq(LeftHeelSpring) = 0;
    this->robot->dq(RightHeelSpring) = 0;
    this->robot->q(LeftShinPitch) = 0;
    this->robot->q(RightShinPitch) = 0;
    this->robot->dq(LeftShinPitch) = 0;
    this->robot->dq(RightShinPitch) = 0;

    this->tarsusSolver.update();
    this->robot->q(LeftTarsusPitch)   = this->tarsusSolver.getLeftRigidTarsusPosition();
    this->robot->q(RightTarsusPitch)  = this->tarsusSolver.getRightRigidTarsusPosition();
    this->robot->dq(LeftTarsusPitch)  = this->tarsusSolver.getLeftRigidTarsusVelocity();
    this->robot->dq(RightTarsusPitch) = this->tarsusSolver.getRightRigidTarsusVelocity();


    // Compute model dynamics
    this->robot->dynamics.calcHandC(this->robot->model, this->robot->q, this->robot->dq);

    // Compute the robot constraints
    this->robot->kinematics.update(this->robot->model, this->robot->q, this->robot->dq);

    int inx;
    if (this->config.control_mode == 1) {
        //walking with line contact
        // hol for walking
        inx = 5;
        if (output.getDomain() == 0) {
            //right stance
            this->cache.Js.block(0, 0, inx, this->config.qsize)  << this->robot->kinematics.cache.J_poseRightConstraint;
            this->cache.dJs.block(0, 0, inx, this->config.qsize) << this->robot->kinematics.cache.Jdot_poseRightConstraint;
        } else {
            this->cache.Js.block(0, 0, inx, this->config.qsize)  << this->robot->kinematics.cache.J_poseLeftConstraint;
            this->cache.dJs.block(0, 0, inx, this->config.qsize)  << this->robot->kinematics.cache.Jdot_poseLeftConstraint;
        }
    } else if (this->config.control_mode == 0){
        //standing
        inx = 10;
        this->cache.Js.block(0, 0, inx, this->config.qsize) << this->robot->kinematics.cache.J_poseLeftConstraint,
                                                                            this->robot->kinematics.cache.J_poseRightConstraint;
        this->cache.dJs.block(0, 0, inx, this->config.qsize) << this->robot->kinematics.cache.Jdot_poseLeftConstraint,
                                                                                this->robot->kinematics.cache.Jdot_poseRightConstraint;

    } else if (this->config.control_mode == -1){
        //in air
        //pelvis fixed in the air
        inx = 6;
        this->cache.Js.block(0,0,inx,inx) << MatrixXd::Identity(inx,inx);
    }

    this->cache.Js.block(inx, 0, 6, this->config.qsize) << this->robot->kinematics.cache.J_achilles,
                                                                           this->robot->kinematics.cache.J_rigid;
    this->cache.dJs.block(inx, 0, 6, this->config.qsize) << this->robot->kinematics.cache.Jdot_achilles,
                                                                             this->robot->kinematics.cache.Jdot_rigid;

    this->cache.Aconstr.setZero();
    //projected inertia matrix (H=D)
    this->cache.Aconstr.block(0,0,this->config.qsize,this->config.qsize)   << this->robot->dynamics.H;
    //projected input matrix
    this->cache.Aconstr.block(0,this->config.qsize, this->config.qsize,this->config.usize) << - this->config.Be;
    //projected jacobian
    this->cache.Aconstr.block(0,this->config.qsize+this->config.usize, this->config.qsize,this->config.holsize)  << - this->cache.Js.transpose();
    //constrained dynamics equality constriant
    this->cache.lbA.segment(0,this->config.qsize) = - this->robot->dynamics.C ;
    this->cache.ubA.segment(0,this->config.qsize) = this->cache.lbA.segment(0,this->config.qsize);


    //add friction cone if walking/standing ->other_constraints
    if (this->config.control_mode == 1) {
        // Friction cone for walking
        this->cache.Aconstr.block(this->config.qsize, this->config.qsize+this->config.usize, 9,5) = this->config.contact_pyramid;
        //    this->cache.Aconstr.block(this->config.qsize+9, this->config.qsize+this->config.usize+5, 9,5) = this->config.contact_pyramid;
        this->cache.lbA.segment(this->config.qsize,this->config.othercons_size).setConstant(-INFTY); // -inf
        this->cache.ubA.segment(this->config.qsize,this->config.othercons_size).setZero();

        // for walking : zero stance foot torque
        // Zero stance foot torque
        // if (output.getDomain() == 0) {
        //     // Right Stance
        //     this->config.lb(22+10 - 1) = -0.0;
        //     this->config.ub(22+10 - 1) = 0.0;

        //     this->config.lb(22+5 - 1) = -this->config.torque_bounds(4);
        //     this->config.ub(22+5 - 1) =  this->config.torque_bounds(4);
        // } else {
        //     // Left Stance
        //     this->config.lb(22+5 - 1) = -0.0;
        //     this->config.ub(22+5 - 1) = 0.0;

        //     this->config.lb(22+10 - 1) = -this->config.torque_bounds(9);
        //     this->config.ub(22+10 - 1) =  this->config.torque_bounds(9);
        // }
    } else if (this->config.control_mode == 0) {
        // Friction cone for standing
        this->cache.Aconstr.block(this->config.qsize, this->config.qsize+this->config.usize, 9,5) = this->config.contact_pyramid;
            this->cache.Aconstr.block(this->config.qsize+9, this->config.qsize+this->config.usize+5, 9,5) = this->config.contact_pyramid;
        this->cache.lbA.segment(this->config.qsize,this->config.othercons_size).setConstant(-INFTY); // -inf
        this->cache.ubA.segment(this->config.qsize,this->config.othercons_size).setZero();
    }



    // holonomic constriant term
    this->cache.Aconstr.block(this->config.qsize+this->config.othercons_size,0,this->config.holsize,this->config.qsize) = this->cache.Js;
    this->cache.lbA.segment(this->config.qsize+this->config.othercons_size,this->config.holsize) = -this->cache.dJs*this->robot->dq;
    this->cache.ubA.segment(this->config.qsize+this->config.othercons_size,this->config.holsize) = -this->cache.dJs*this->robot->dq;

    // Construct the cost
    // 0.5*x'*H*x + f'*x
    // Task space terms
    MatrixXd JY  = output.cache.Dya.block(0,0,this->config.outputsize,22) ;
    MatrixXd dJY = output.cache.DLfya.block(0,0,this->config.outputsize,22) ;
    // this->cache.b_y = output.cache.d2yd - dJY * this->robot->dq - this->config.Kpy.cwiseProduct(eta.segment(0,this->config.outputsize)) - this->config.Kdy.cwiseProduct(eta.segment(this->config.outputsize,this->config.outputsize));
    this->cache.b_y = output.cache.d2yd - this->config.Kpy.cwiseProduct(eta.segment(0,this->config.outputsize)) - this->config.Kdy.cwiseProduct(eta.segment(this->config.outputsize,this->config.outputsize));

    // different weights for output
    this->cache.G.block(0,0,this->config.qsize,this->config.qsize) = (JY.transpose() * this->config.W_outputs * JY) ;
    this->cache.g.segment(0,this->config.qsize) << - JY.transpose() * this->config.W_outputs * this->cache.b_y;
    // std::cout << "W_outputs: " << this->config.W_outputs << std::endl;


    this->cache.G += this->config.Reg_Matrix;

    // Flatten matrices in row-major format.
    Map<VectorXd> Gflat(this->cache.G.data(), this->cache.G.size());
    //Map<VectorXd> Gflat(G.data(), G.size());
    Map<VectorXd> AConstrFlat(this->cache.Aconstr.data(), this->cache.Aconstr.size());

    /////////////
    // QPOASES //
    /////////////
    // Run the QP
    qpOASES::returnValue success = RET_QP_NOT_SOLVED;
    int_t nWSR = this->config.nQPIter;
    if (this->memory.qp_initialized) {
        success = this->qpsolver->hotstart(static_cast<real_t*>(Gflat.data()), static_cast<real_t*>(this->cache.g.data()),
                                           static_cast<real_t*>(AConstrFlat.data()),
                                           static_cast<real_t*>(this->config.lb.data()), static_cast<real_t*>(this->config.ub.data()),
                                           static_cast<real_t*>(this->cache.lbA.data()),static_cast<real_t*>(this->cache.ubA.data()),
                                           nWSR );
    } else {
        success = this->qpsolver->init(static_cast<real_t*>(Gflat.data()), static_cast<real_t*>(this->cache.g.data()),
                                       static_cast<real_t*>(AConstrFlat.data()),
                                       static_cast<real_t*>(this->config.lb.data()), static_cast<real_t*>(this->config.ub.data()),
                                       static_cast<real_t*>(this->cache.lbA.data()),static_cast<real_t*>(this->cache.ubA.data()),
                                       nWSR );
        this->memory.qp_initialized = true;
    }

    VectorXd torqueScale(10);
    torqueScale << 25., 25., 16., 16., 50., 25., 25., 16., 16., 50.;
    // Get solution
    this->cache.qpsol.setZero();
    this->qpsolver->getPrimalSolution(static_cast<real_t*>(this->cache.qpsol.data()));

    if (success != SUCCESSFUL_RETURN) {
        ROS_WARN("THE QP DID NOT CONVERGE!");
        this->qpsolver->reset();
        this->memory.qp_initialized = false;
        this->memory.u_prev.setZero();
    } else {
//        this->memory.u_prev << this->cache.qpsol.segment(this->config.qsize,this->config.usize);
        this->cache.u << torqueScale.cwiseProduct(this->cache.qpsol.segment(this->config.qsize,this->config.usize));
    }

    double obj = this->qpsolver->getObjVal();
//    std::cout << "obj: " << obj << std::endl;

    this->cache.ddqtar << this->cache.qpsol.segment(0,this->config.qsize);
    this->cache.Fdes << this->cache.qpsol.segment(this->config.qsize+this->config.usize,this->config.holsize);
    this->cache.d2y =JY*this->cache.ddqtar + dJY * this->robot->dq; // JY*this->cache.ddqtar - this->cache.b_y; //

//    std::cout << "error squared:  " << 0.5* pow(this->config.w_outputs,2)*(JY*this->cache.ddqtar-this->cache.b_y).transpose()*(JY*this->cache.ddqtar-this->cache.b_y) << std::endl;
//    std::cout << "reg in objective: " << 0.5* this->cache.qpsol.segment(this->config.qsize,this->config.nV-this->config.qsize).transpose()*this->cache.qpsol.segment(this->config.qsize,this->config.nV-this->config.qsize)*0.000001 <<std::endl;

    // Return
    return this->cache.u;
}


void TSCQPsolver_SLIP::getDebug(VectorXf &dbg) {
    // Use floats for logging size and speed
    //76 if QP
    //74 if hardconstriant
    VectorXd Aconstr_eval = this->cache.Aconstr*this->cache.qpsol;
    // std::cout << "u size: " << this->cache.u.size() << std::endl;
    // std::cout << "Fdes size: " << this->cache.Fdes.size() << std::endl;
    // std::cout << "d2y size: " << this->cache.d2y.size() << std::endl;
    // std::cout << "ddqtar size: " << this->cache.ddqtar.size() << std::endl;
    // std::cout << "q size: " << this->robot->q.size() << std::endl;

    // std::cout << "GRF size: " << this->cache.GRF.size() << std::endl;
    // std::cout << "Aconstr_eval size: " << Aconstr_eval.size() << std::endl;
    // std::cout << "lbA size: " << this->cache.lbA.size() << std::endl;
    // std::cout << "ubA size: " << this->cache.ubA.size() << std::endl;
    
    dbg <<
    this->cache.u.cast <float> (),           // 10
    this->cache.Fdes.cast <float> (),        // 11/9/12 if hardconstriant/in air
    this->cache.d2y.cast <float> (),         // 9/10
    this->cache.ddqtar.cast<float>(),        // 22
    this->robot->q.cast<float>(),            // 22
    this->cache.GRF.cast<float>(),           // 2
    Aconstr_eval.cast<float>(),              // 42
    this->cache.lbA.cast<float>(),           // 42
    this->cache.ubA.cast<float>();           // 42
}


