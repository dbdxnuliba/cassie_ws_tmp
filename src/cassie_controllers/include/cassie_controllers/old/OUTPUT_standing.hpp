#ifndef OUTPUT_STANDING_HPP
#define OUTPUT_STANDING_HPP

#include <cassie_description/cassie_model.hpp>
#include <ros_utilities/ros_utilities.hpp>
#include <cassie_common_toolbox/PhaseVariable.hpp>
#include <cassie_common_toolbox/smoothing.hpp>
#include <std_srvs/Empty.h>
#include <ros_utilities/timing.hpp>
#include <control_utilities/filters.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_estimation/rigidtarsus_solver.hpp>
#include <Eigen/Sparse>
#include <unsupported/Eigen/MatrixFunctions>

class OUTPUT_standing {
public:
    OUTPUT_standing(ros::NodeHandle &nh, cassie_model::Cassie &robot, int control_mode);
    void update(VectorXd &radio); //update output
    void reset();
    bool reconfigure();
    int getDomain() {return this->memory.iDomain;}
    void getDebug(VectorXf &dbg);
    
public:
    struct Config {
        //standing
        double nom_stand_height;
        double stand_radio_ratio;

        int outputsize;

        double g = 9.80665;
        bool isSim;

        double yaw_ref;

        // Parameter checker
        ros_utilities::ParamChecker paramChecker;

        // Methods
        void init();
        void reconfigure();
    } config;

    struct Cache {
        // from SymFunction
        VectorXd ya;
        VectorXd dya;
        MatrixXd Dya;
        MatrixXd DLfya;

        // RD2 desired output
        VectorXd yd;
        VectorXd dyd;
        VectorXd d2yd;

        // Transition related
        double time;

        // General
        void init(Config *config);
        void reset();
    } cache;

    struct Memory {
        // Timer to compute phase variable
        ros_utilities::Timer timer = ros_utilities::Timer(true);
        bool isInitialized;

        int iDomain;

        void init();
        void reset();
    } memory;

private:
    typedef enum {
        // two foot in contact with the ground so we define 6 outputs
        deltaRoll = 0,
        deltaPitch = 1,
        LeftHipYaw = 2,
        xCOM = 3,
        yCOM = 4,
        zCOM = 5
    } standingOutputEnum;

    // Pointer to the controlling nodehandle and related ROS things
    ros::NodeHandle *nh;

    // Pointer to robot model
    cassie_model::Cassie *robot;

    // General
    void computeActual_standing(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya);
    void computeDesired_standing(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd, VectorXd &radio);
};
#endif // OUTPUT_HLIP_HPP
