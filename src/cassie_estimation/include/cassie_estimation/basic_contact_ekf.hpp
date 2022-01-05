#ifndef BASIC_CONTACT_EKF_HPP
#define BASIC_CONTACT_EKF_HPP

#include <cassie_description/cassie_model.hpp>
#include <control_utilities/filters.hpp>
#include <ros_utilities/ros_utilities.hpp>
#include <ros_utilities/timing.hpp>
#include <std_srvs/Empty.h>

// typedef enum {
//     LeftHipRoll = 6,
//     LeftHipYaw = 7,
//     LeftHipPitch = 8,
//     LeftKneePitch = 9,
//     LeftShinPitch = 10,
//     LeftTarsusPitch = 11,
//     LeftFootPitch = 13,
//     RightHipRoll = 14,
//     RightHipYaw = 15,
//     RightHipPitch = 16,
//     RightKneePitch = 17,
//     RightShinPitch = 18,
//     RightTarsusPitch = 19,
//     RightFootPitch = 21
// } iEncoderMap;


class basic_contact_ekf{

public: 
    basic_contact_ekf();
    void init();

    void update(bool enabled, double t, VectorXd& a, VectorXd& q, Matrix3d& R, VectorXd& contact);
    void initialize(double t, VectorXd& q, VectorXd& contact, VectorXd& leftPos, VectorXd& rightPos);

    void resetImpl();

    void unpackState(MatrixXd& x, VectorXd& p, VectorXd& v, VectorXd& plf, VectorXd& prf, VectorXd& ba);
    void packState(MatrixXd& x, VectorXd& p, VectorXd& v, VectorXd& plf, VectorXd& prf, VectorXd& ba);

    void getValues(VectorXd& p, VectorXd& v, VectorXd& pLfoot, VectorXd& pRfoot, VectorXd& ba);
    void getRotationMatrixXYZ(Matrix3d& R, double alpha, double beta, double gamma);
    void getRotationMatrixZYX(Matrix3d& R, double alpha, double beta, double gamma);


private:
    void ekf_predict(VectorXd& accMeasured, double dt, double lC, double rC);
    void ekf_update(double dt, VectorXd& q, VectorXd& plf_enc, VectorXd& prf_enc);
    

    double Base_process_std;
    double foothold_std;        
    // Measurement noise
    double encoder_std;  //(rad)  %%% trust the encoder reading
    // sensor model
    double acceleration_bias_std;
    
    double contact_Slide_std;
    double contact_Slide_vel_std;
    VectorXd LIPacc_std;
    // Initialized std estimate for covariance
    double init_position_std;
    double init_velocity_std;
    double init_acc_bias_std;
    double init_foothold_std;
        
    Vector3d g;

private:
    bool enabled;
    ros_utilities::Timer timer = ros_utilities::Timer(true);

    MatrixXd x_hat; // A Posteriori state
    MatrixXd P;     // A Posteriori covariance
    MatrixXd Qc;    // Continuous covariance
    double Qba;
    double Qpf;
    MatrixXd Renc;
    MatrixXd Rdenc;
    bool isInitialized;
    bool initializedContact; // Flag storing whether the robot has touched the ground for the first time
    VectorXd ContactPrev;

    double tprev;

    MatrixXd R;

    VectorXd pOut;
    VectorXd vOut;
    VectorXd pLfootOut;
    VectorXd pRfootOut;
    VectorXd baOut;
};

#endif
