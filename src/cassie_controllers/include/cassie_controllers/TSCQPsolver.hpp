#ifndef IDTSCQPSOLVER_HPP
#define IDTSCQPSOLVER_HPP

#include <cassie_description/cassie_model.hpp>
#include <ros_utilities/ros_utilities.hpp>
#include <cassie_common_toolbox/PhaseVariable.hpp>
#include <cassie_common_toolbox/smoothing.hpp>
#include <std_srvs/Empty.h>
#include <ros_utilities/timing.hpp>
#include <qpOASES.hpp>
#include <control_utilities/filters.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_estimation/rigidtarsus_solver.hpp>
#include <Eigen/Sparse>
#include <string>

#include <cassie_controllers/OUTPUT_HLIP.hpp>
#include <cassie_controllers/OUTPUT_SLIP.hpp>
// #include <cassie_controllers/OUTPUT_standing.hpp>
USING_NAMESPACE_QPOASES

class TSCQPsolver {
public:
    TSCQPsolver(ros::NodeHandle &nh, 
                cassie_model::Cassie &robot, 
                int control_mode);
    void update( VectorXd &u, OUTPUT_HLIP &output);
    void update( VectorXd &u, OUTPUT_SLIP &output);
    // void update( VectorXd &u, OUTPUT_standing &output); 
    void reset();
    bool reconfigure();
    void getDebug(VectorXf &dbg);

    bool shownError;
    int qpCompleted;
private:
    struct Output{
        VectorXd ya;
        VectorXd dya;
        MatrixXd Dya;
        MatrixXd DLfya;

        VectorXd yd;
        VectorXd dyd;
        VectorXd d2yd;

        int domain;
    } output;

    struct Config{
        int outputsize;
        int holsize;
        int qsize;
        int usize;
        int othercons_size;
        int nV;
        int nC;

        int control_mode;

        bool isSim;

        VectorXd output_selec;
        VectorXd Kpy;
        VectorXd Kdy;

        // QP Terms
        int nQPIter;
        double w_outputs;
        MatrixXd W_outputs;
        MatrixXd Reg_Matrix;

        double half_foot_length;
        MatrixXd Be;
        MatrixXd contact_pyramid;
        VectorXd lb;
        VectorXd ub;
        VectorXd torque_bounds;

        // Parameter checker
        ros_utilities::ParamChecker paramChecker;

        // Methods
        void init();
        void reconfigure();
    } config;
    struct Cache {
        // QP cache allocation
        MatrixXd Jc;
        MatrixXd dJc;
        MatrixXd Js;
        MatrixXd dJs;
        MatrixXd Jcs;
        MatrixXd dJcs;

        MatrixXd Proj;

        VectorXd b_y;
        VectorXd d2y;

        //qp solution
        VectorXd qpsol;
        VectorXd ddqtar;
        VectorXd u;
        VectorXd Fdes;

        //QP: min 1/2*X'*G*X + X'*g
        //    s.t. lbA <= AX <= ubA
        //    s.t. lb <= X <= ub
        Eigen::Matrix<double,Dynamic,Dynamic,RowMajor> G;
        VectorXd g;
        Eigen::Matrix<double,Dynamic,Dynamic,RowMajor> Aconstr;
        VectorXd lbA;
        VectorXd ubA;
        VectorXd GRF;

        void init(Config *config);
        void reset();
    } cache;

    struct Memory{
        VectorXd u_prev;
        bool qp_initialized;
        void init();
        void reset();
    }memory;

    ros::NodeHandle *nh;
    SQProblem *qpsolver;

    // Pointer to robot model
    cassie_model::Cassie *robot;

    // Gait phasing variable
    PhaseVariable phase;

    // Swing leg tarsus ik solver
    RigidTarsusSolver tarsusSolver;

    VectorXd getTorqueQP();
    void getFvectot_cassie_v4(VectorXd &Fvectot);
};

#endif //IDTSCQPSOLVER_HPP
