#ifndef IDCLFQPSOLVER_HPP
#define IDCLFQPSOLVER_HPP

#include <cassie_description/cassie_model.hpp>
#include <ros_utilities/ros_utilities.hpp>
#include <cassie_common_toolbox/PhaseVariable.hpp>
#include <cassie_common_toolbox/smoothing.hpp>
#include <std_srvs/Empty.h>
#include <ros_utilities/timing.hpp>
#include <cassie_controllers/feedforward_controller.hpp>
#include <qpOASES.hpp>
#include <control_utilities/filters.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_estimation/rigidtarsus_solver.hpp>
#include <Eigen/Sparse>

#include <cassie_controllers/OUTPUT_SLIP.hpp>

USING_NAMESPACE_QPOASES

class IDCLFQPsolver {
public:
    IDCLFQPsolver(ros::NodeHandle &nh, cassie_model::Cassie &robot);
    void update( VectorXd &u, OUTPUT_SLIP &output); //update control input
    void reset();
    bool reconfigure();
    void getDebug(VectorXf &dbg);


private:
    struct Cache {
        // QP cache allocation
        MatrixXd Jc;
        MatrixXd dJc;
        MatrixXd Js;
        MatrixXd dJs;
        MatrixXd Jcs;
        MatrixXd dJcs;
        MatrixXd A_holonomics;
        VectorXd b_holonomics;
        MatrixXd Aeq_dynamics;
        VectorXd beq_dynamics;
        MatrixXd A_friction;
        VectorXd b_lb_friction, b_ub_friction;
        MatrixXd A_y;
        VectorXd b_y;
        MatrixXd A_clf;
        MatrixXd A_reg;
        VectorXd b_reg;
        MatrixXd Proj;

        double V;

        //qp solution
        VectorXd qpsol;
        VectorXd ddqtar;
        VectorXd u;
        VectorXd Fdes;
        double delta;



        //QP: min 1/2*X'*G*X + X'*g
        //    s.t. lbA <= AX <= ubA
        //    s.t. lb <= X <= ub
        Eigen::Matrix<double,Dynamic,Dynamic,RowMajor> G;
        VectorXd g;
        Eigen::Matrix<double,Dynamic,Dynamic,RowMajor> Aconstr;
        VectorXd lbA;
        VectorXd ubA;



        void init();
        void reset();

    } cache;
    struct Memory{
        int iDomain;
        VectorXd u_prev;

//        bool readyToStop;
//        bool queueStop;
//        VectorXd yd_last;
//        VectorXd dyd_last;
//
//
//        VectorXd raibert_offset_last;
//        double   leg_angle_offset;
//        double   leg_roll_offset;
//
//
//
//        VectorXd vd_integral_error;
//
//        Vector2d raibert_deltaX;
//        Vector2d raibert_deltaY;
//        Vector2d lastStepVelocity;
//        Vector2d velocityAllocator;
//        int nVelocitySamplesThisStep;
//


        bool qp_initialized;

        void init();
        void reset();

    }memory;
    struct Config{
        bool isSim;
        bool use_qp;


        VectorXd Kp;
        VectorXd Kd;
        VectorXd Kpy;
        VectorXd Kdy;


        double vx_offset;
        double vy_offset;
        double leg_angle_offset_center;


        double u_stancetoe_offset;


        double stoppable_velocity_threshold;
        bool use_contact_switching;


        VectorXd torque_bounds;
        //used in compute dynamics
        double left_stance_gravity_scale;
        double right_stance_gravity_scale;

        //RESCLF
        VectorXd Pdiag;
        VectorXd Poffdiag;
        double res_clf_ep;
        double clf_gam;

        //?
        double velocity_integrator_bleed_constant;


        //used in update
        double force_sp_scale;

        bool clf_use_task_pd;
        bool clf_use_inequality;
        bool clf_use_Vdot_cost;

        // QP Terms
        int nQPIter;
        int ny;
        double ep;
        double gam;
        MatrixXd P;
        MatrixXd F;
        MatrixXd G;
        MatrixXd LFV_mat;
        MatrixXd Be;
        MatrixXd contact_pyramid;
        VectorXd lb;
        VectorXd ub;

        // Large matrix static configurations
        MatrixXd Su;
        MatrixXd Sc;

        // QP Tuning
        double reg_ddq;
        VectorXd reg_base_ddq;
        VectorXd reg_stance_ddq;
        VectorXd reg_swing_ddq;
        VectorXd reg_stance_u;
        VectorXd reg_swing_u;
        double reg_rigid;
        double reg_fx;
        double reg_fy;
        double reg_fz;
        double reg_muy;
        double reg_muz;
        double reg_clf_delta;

        double w_outputs;
        double w_hol_fixed;
        double w_hol_fx;
        double w_hol_fy;
        double w_hol_fz;
        double w_hol_my;
        double w_hol_mz;
        double w_Vdot;


        // Parameter checker
        ros_utilities::ParamChecker paramChecker;

        // Methods
        void init();
        void reconfigure();

    } config;
    ros::NodeHandle *nh;
    SQProblem *qpsolver;

    // Pointer to robot model
    cassie_model::Cassie *robot;
//    // Feedforward controller
//    feedforward_underactuated ff;

    // Gait phasing variable
    PhaseVariable phase;




    VectorXd getTorqueQP(OUTPUT_HZD &output);
    VectorXd getTorqueID(OUTPUT_HZD &output);

};
#endif //IDCLFQPSOLVER_HPP
