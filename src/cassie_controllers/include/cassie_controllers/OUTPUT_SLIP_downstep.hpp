#ifndef OUTPUT_SLIP_HPP
#define OUTPUT_SLIP_HPP

#include <cassie_description/cassie_model.hpp>
#include <ros_utilities/ros_utilities.hpp>
#include <cassie_common_toolbox/PhaseVariable.hpp>
#include <cassie_common_toolbox/smoothing.hpp>
#include <cassie_common_toolbox/BasicSpline.hpp>
#include <std_srvs/Empty.h>
#include <ros_utilities/timing.hpp>
// #include <cassie_controllers/feedforward_controller.hpp>
#include <qpOASES.hpp>
#include <control_utilities/filters.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_estimation/rigidtarsus_solver.hpp>
#include <Eigen/Sparse>
#include <unsupported/Eigen/MatrixFunctions>

USING_NAMESPACE_QPOASES

class OUTPUT_SLIP {
public:

    OUTPUT_SLIP(ros::NodeHandle &nh, cassie_model::Cassie &robot, int control_mode);
    void update(VectorXd &radio); //update output
    void reset();
    bool reconfigure();
    bool isReadyToTransition() {return this->memory.readyToStop;}
    int getDomain() {return this->memory.iDomain;}
    void getSize(int &outputsize, int &holsize, int &qsize, int &usize){
        outputsize = this->config.outputsize;
        holsize = this->config.holsize;
        qsize = this->config.qsize;
        usize = this->config.usize;
    };
    void getDebug(VectorXf &dbg);
public:
    /**
    * @brief Persistent controller configurations
    */
    struct Config {
        //standing
        double nom_stand_height;
        double stand_radio_ratio;
        double yaw_ref;

        int outputsize;
        int holsize;
        int qsize;
        int usize;

        double g = 9.80665;
        bool isSim;
        bool useHLIP;
        bool useSLIP;
        int control_mode;

        double wdes; //global, to pull launch param
        double HLIP_Ts;
        double HLIP_vxd;
        double HLIP_vyd;
        double HLIP_udes;
        double Edes; //global, to pull launch param
        double z0des;
        double xratio;
        double zsw_max;
        double zsw_neg;
        VectorXd bh;
        //stone of x and z in world frame
        VectorXd stonex;
        VectorXd stonez;

        //used for nextDomain
        int nDomain;
        //used get Phase variable
        double time_scale;

        double vx_offset;
        double vy_offset;
        double stoppable_velocity_threshold;

        // Parameter checker
        ros_utilities::ParamChecker paramChecker;

        //qp
        VectorXd lb;
        VectorXd ub;

        //Raibert xcom stepping controller gains
        int switchToSLIPStep;
        bool zeroStepping;
        bool useXcomRaibert;

        bool useHumanOutputs;
        int useHumanOutputsXcomStep;
        int useHumanOutputsZcomStep;
        int useHumanOutputsXswStep;

        int useXcomStep;
        int useXswStep;
        double Kstep;
        double Dstep;

        //discrete CBF
        double Edes_eps;
        double Edes_gamma_in;
        double Edes_gamma_out;

        // Methods
        void reconfigure();

    } config;


public:
    // Globally allow to read the useSLIP variable
    bool getUseSLIP(){return this->config.useSLIP;};
    void setUseSLIP(bool flag){this->config.useSLIP = flag;};
    bool getIsDSP(){return this->cache.isDSP;};

    bool getUseHLIP(){return this->config.useHLIP;};
    void setUseHLIP(bool flag){this->config.useHLIP = flag;};

    struct Cache {
        double stepW_log;
        double dstepW_log;

        // from SymFunction
        VectorXd ya;
        VectorXd dya;
        MatrixXd Dya;
        MatrixXd DLfya;

        // RD2 desired output
        VectorXd yd;
        VectorXd dyd;
        VectorXd d2yd;

        // // RD1 desired output
        // VectorXd ya1;
        // VectorXd dya1;
        // MatrixXd Dya1;
        // MatrixXd DLfya1;

        VectorXd grfd;
        // VectorXd yd1;
        // VectorXd dyd1;

        // compute from library
        VectorXd ddqd;
        VectorXd pd;
        VectorXd vd;
        VectorXd Fd;
        VectorXd uff;

        // stepping stone related
        double udes;
        double Ly;
        double Lx;
        double xcLIP;
        double ycLIP;
        double z0LIP;
        double zcLIP;
        double dxcLIP;
        double dycLIP;
        double dzcLIP;
        double dz0LIP;
        double dxcLIP_f;
        double dycLIP_f;
        double dzcLIP_f;
        double dz0LIP_f;

        double xcLIP_minus;
        double Ly_minus;
        double z0_minus;
        double dzc_minus;

        double Enow;

        bool justimpacted;
        bool isDSP;

        // human SLIP related
        double xcom;
        double vcom;

        int support_phase;

        // Downstep related
        int downstepLeg;
        bool isDownstep;
        int downstepStep;

        // Transition related
        double time;
        double time_norm;
        double dtime_norm;

        // Yaw angle additional for stepping in place
        double beta;

        // General
        void init(Config *config);
        void reset();
    } cache;

    // Create a struct for the splines 
    struct Splines{
        // Data from human nominal experiments
        VectorXd xcom_human;
        VectorXd dxcom_human;
        VectorXd ddxcom_human;

        VectorXd zcom_human;
        VectorXd dzcom_human;
        VectorXd ddzcom_human;

        VectorXd grf_st_human;
        VectorXd grf_sw_human;

        VectorXd grf_human_SSP;

        VectorXd time_norm_human;
        VectorXd time_norm_human_SSP;
        double timeMax_human;

        // Data from human downstep experiments
        std::vector<double> downsteps;

        std::vector<VectorXd> xcom_human_1;
        std::vector<VectorXd> dxcom_human_1;
        std::vector<VectorXd> ddxcom_human_1;
        std::vector<VectorXd> zcom_human_1;
        std::vector<VectorXd> dzcom_human_1;
        std::vector<VectorXd> ddzcom_human_1;
        std::vector<VectorXd> grf_st_human_1;
        std::vector<VectorXd> grf_sw_human_1;
        std::vector<VectorXd> grf_human_SSP_1;
        std::vector<VectorXd> time_norm_human_1;
        std::vector<VectorXd> time_norm_human_SSP_1;

        std::vector<VectorXd> xcom_human_2;
        std::vector<VectorXd> dxcom_human_2;
        std::vector<VectorXd> ddxcom_human_2;
        std::vector<VectorXd> zcom_human_2;
        std::vector<VectorXd> dzcom_human_2;
        std::vector<VectorXd> ddzcom_human_2;
        std::vector<VectorXd> grf_st_human_2;
        std::vector<VectorXd> grf_sw_human_2;
        std::vector<VectorXd> grf_human_SSP_2;
        std::vector<VectorXd> time_norm_human_2;
        std::vector<VectorXd> time_norm_human_SSP_2;

        std::vector<VectorXd> xcom_human_3;
        std::vector<VectorXd> dxcom_human_3;
        std::vector<VectorXd> ddxcom_human_3;
        std::vector<VectorXd> zcom_human_3;
        std::vector<VectorXd> dzcom_human_3;
        std::vector<VectorXd> ddzcom_human_3;
        std::vector<VectorXd> grf_st_human_3;
        std::vector<VectorXd> grf_sw_human_3;
        std::vector<VectorXd> grf_human_SSP_3;
        std::vector<VectorXd> time_norm_human_3;
        std::vector<VectorXd> time_norm_human_SSP_3;

        struct DebugSplines{
            std::vector<BasicSpline> zcom;
            std::vector<BasicSpline> dzcom;
            std::vector<BasicSpline> ddzcom;

            std::vector<BasicSpline> xcom;
            std::vector<BasicSpline> dxcom;
            std::vector<BasicSpline> ddxcom;

            std::vector<BasicSpline> xsw;
            std::vector<BasicSpline> dxsw;
            std::vector<BasicSpline> ddxsw;

            std::vector<double> timeMin;
            std::vector<double> timeMax;
            int idx;
        } debugSplines;

        struct NominalSplines{
            BasicSpline zcom;
            BasicSpline dzcom;
            BasicSpline ddzcom;

            BasicSpline xsw;
            BasicSpline dxsw;
            BasicSpline ddxsw;

            BasicSpline xcom;
            BasicSpline dxcom;
            BasicSpline ddxcom;

            BasicSpline GRFst;
            BasicSpline GRFsw;

            BasicSpline GRF_SSP;

            double timeMin;
            double timeMax;
        } nominalSplines;

        struct DownstepSplines{
            std::vector<BasicSpline> zcom;
            std::vector<BasicSpline> dzcom;
            std::vector<BasicSpline> ddzcom;

            std::vector<BasicSpline> xsw;
            std::vector<BasicSpline> dxsw;
            std::vector<BasicSpline> ddxsw;

            std::vector<BasicSpline> xcom;
            std::vector<BasicSpline> dxcom;
            std::vector<BasicSpline> ddxcom;

            std::vector<BasicSpline> GRFst;
            std::vector<BasicSpline> GRFsw;

            std::vector<BasicSpline> GRF_SSP;

            std::vector<double> timeMin;
            std::vector<double> timeMax;
        } downstepSplines;

        void init();
        void reset();

        void updateNominalSplines(double desiredStepLength=0.0);
        void updateDownstepSplines(double desiredStepLength=0.0);
        void createDebugSplines();
        void getHumanData();
        void getHumanData025();
        void getHumanData050();
        void getHumanData075();
        void getHumanData100();

        ros_utilities::ParamChecker paramChecker;
        double x_scaling;
        double dx_scaling;
        double ddx_scaling;
        double z_scaling;
        double dz_scaling;
        double ddz_scaling;
        double grf_scaling;
        double h_cassie;

        double HLIP_vxd;
        double HLIP_Ts;
        int useXcomStep;
    } splines;

private:
    typedef enum {
        deltaRoll = 0,
        deltaPitch = 1,
        StanceHipYaw = 2,
        zCOM = 3,
        SwingStepz = 4,
        SwingStepx = 5,
        SwingStepy = 6,
        SwingHipYaw = 7,
        deltaSwingFoot = 8,
        xCOM = 9
    } SLIPOutputEnum;

    // data persist within each step
    struct Param{
        double Ts;
        double ldes;
        double hdes;
        double wdes; //local
        double Edes; //local
        double xratio;
        double HLIP_vxd;

        double E0;

        double x_pivot;
        double y_pivot;
        double z_pivot;

        double ldesnext;
        double hdesnext;
        double hdesprev;

        VectorXd alpha0;
        VectorXd dalpha0;
        VectorXd alphaf;

        void init();
        void reset();
    }param;

public:
    /**
    * @brief Data meant to persist across data frames
    */
    struct Memory {
        // Timer to compute phase variable
        ros_utilities::Timer timer = ros_utilities::Timer(true);
        //contact domain
        int iDomain;        // 0: RightStance, 1: LeftStance
        int iDomainlast;    // What was the previous domain
        int phaseCnt;       // Through how many domains we went? (could be 20 after 10 steps)
        bool isInitialized;
        int ithstep;

        //??????
        bool readyToStop;
        bool queueStop;

        bool qp_initialized;

        void init();
        void reset();
    } memory;

private:
    // Pointer to the controlling nodehandle and related ROS things
    ros::NodeHandle *nh;
    //    ros::ServiceServer reconfigureService;

    control_utilities::LowPassFilter lpVdX    = control_utilities::LowPassFilter(0.001, 0.75);
    control_utilities::LowPassFilter lpVdY    = control_utilities::LowPassFilter(0.001, 0.25);
    control_utilities::LowPassFilter lpVdTurn = control_utilities::LowPassFilter(0.001, 0.25);

    control_utilities::LowPassFilter lpVaX = control_utilities::LowPassFilter(0.0005, 0.01);
    control_utilities::LowPassFilter lpVaY = control_utilities::LowPassFilter(0.0005, 0.01);
    control_utilities::LowPassFilter lpVaZ = control_utilities::LowPassFilter(0.0005, 0.01);

    control_utilities::LowPassFilter lpVaXlastStep = control_utilities::LowPassFilter(0.001, 0.0001);
    control_utilities::LowPassFilter lpVaYlastStep = control_utilities::LowPassFilter(0.001, 0.0001);

    control_utilities::RateLimiter rateRaibertX    = control_utilities::RateLimiter(-75, 75); // (-0.2, 0.2);
    control_utilities::RateLimiter rateRaibertY    = control_utilities::RateLimiter(-75, 75); // (-0.2, 0.2);

    control_utilities::RateLimiter rateStepX    = control_utilities::RateLimiter(-0.15, 0.15);
    control_utilities::RateLimiter rateStepY    = control_utilities::RateLimiter(-0.10, 0.10);

    control_utilities::RateLimiter rateJoyX    = control_utilities::RateLimiter(-0.30, 0.30);
    control_utilities::RateLimiter rateJoyY    = control_utilities::RateLimiter(-0.30, 0.30);
    control_utilities::RateLimiter rateJoyTurn = control_utilities::RateLimiter(-0.15, 0.15);

    cassie_common_toolbox::MovingAverage stepPeriodAverager = cassie_common_toolbox::MovingAverage(400, 2); // Moving average for one step period (T=0.4s)

    // Pointer to robot model
    cassie_model::Cassie *robot;
    SQProblem *mpcsolver;

    // Feedforward controller
    //    feedforward_underactuated ff;
public:
    // Gait phasing variable
    PhaseVariable phase;
private:
    // Swing leg tarsus ik solver
    RigidTarsusSolver tarsusSolver;

    // Private methods
    void nextDomain();
    void computeGuard();

    /////////////
    // OUTPUTS //
    /////////////

    // General
    void computeActual_inair(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya);
    void computeDesired_inair(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd);

    void computeActual_standing(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya);
    void computeDesired_standing(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd, VectorXd &radio);

    // LIP
    void computeActual_HLIP(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya);
    void computeDesired_HLIP(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd);

    // SLIP
    void computeActual_SLIP(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya);
    void computeDesired_SLIP(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd);


    void updateTurning(double yawUpdate);
    void updateRaibert(double xVd, double yVd);
    void updateAccelerations(double xVd, double yVd);
    void updateForces(double xVd, double yVd);
    void computeLibrary();


    // HLIP STEPPINGSTONE
    void get_z_traj(VectorXd &d2yd);
    void get_steppingstone_swx_traj(double &ydswx, double &dydswx, double &d2ydswx);
    void get_steppingstone_swy_traj(double &ydswy, double &dydswy, double &d2ydswy);
    void get_steppingstone_swz_traj(double &ydswz, double &dydswz, double &d2ydswz);

    void get_steppingstone_swx_traj_steppinginplace(double &ydswx, double &dydswx, double &d2ydswx);

    void get_steppingstone_comz_traj(double &ydswz, double &dydswz, double &d2ydswz) ;

    // SLIP HUMAN WALKING
    void get_SLIP_comx_traj(double &ydcomx, double &dydcomx, double &d2ydcomx);
    void get_SLIP_comz_traj(double &ydcomz, double &dydcomz, double &d2ydcomz);
    void get_SLIP_swx_traj(double &ydswx, double &dydswx, double &d2ydswx);
    void get_SLIP_swx_traj_feedback(double &ydswx, double &dydswx, double &d2ydswx);
    void get_SLIP_swx_traj_reconstruction_feedback(double &ydswx, double &dydswx, double &d2ydswx);
    void get_SLIP_swy_traj(double &ydswy, double &dydswy, double &d2ydswy);
    void get_SLIP_swz_traj(double &ydswz, double &dydswz, double &d2ydswz);
    void get_SLIP_grf_traj();

    void get_SLIP_dxcom_traj(double &yddxcom, double &dyddxcom);

    // YAW
    void update_turning_yaw(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd);

    //post-impact recalculate parameters (Ts, lhwdes)
    void update_param();

    //LIP related functions
    void update_foot_pin_pos(VectorXd q, int iDomain, double &xst, double &yst, double &zst);
    void update_LIP_xz0(double &xc, double &yc, double &z0, double &zc, double &dxc, double &dyc, double &dzc, double &dz0);
    void update_Ly(double &Ly);
    void update_preimpact_xL(double t, double Ts, double &xcminus, double &Lyminus);

    void update_Lx(double &Lx,double &Ly);
    void update_preimpact_yL(double t, double Ts, double &ycminus, double &Lxminus);


    void get_orbitalenergy(double &E);
    void solve_Ts(double &Ts);

    void get_LIPsol(double t, double z0,double x0, double L0, VectorXd &sol);
    void get_LIPsol_lateral(double t, double z0,double y0, double L0, VectorXd &sol);


    void update_dzcomf(double t, double &udes);

    void update_preimpact_estimation(double t, double Ts);
};
#endif // OUTPUT_HLIP_HPP
