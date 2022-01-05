/**
 given radio input (user command) and output_option (either Xiaobin's (0) or Jenna's (1) option)
 filter radio input as needed
 compute output
*/

// #include <cassie_controllers/walking_onedomain.hpp>
#include <cassie_controllers/OUTPUT_standing.hpp>
#include <cassie_common_toolbox/motion_transition.hpp>
#include <cassie_common_toolbox/RadioButtonMap.hpp>
#include <cassie_common_toolbox/bezier_tools.hpp>
#include <roslib_utilities/ros_package_utilities.hpp>
#include <control_utilities/limits.hpp>
#include <cassie_common_toolbox/linear_interpolation.hpp>

using namespace control_utilities;

void OUTPUT_standing::Cache::init(Config *config) {

    this->ya.resize(config->outputsize);
    this->dya.resize(config->outputsize);
    this->Dya.resize(config->outputsize, 44);
    this->DLfya.resize(config->outputsize, 44);

    this->yd.resize(config->outputsize);
    this->dyd.resize(config->outputsize);
    this->d2yd.resize(config->outputsize);

    // Initialize matrices
    this->reset();
}

void OUTPUT_standing::Cache::reset() {
    this->ya.setZero();
    this->dya.setZero();
    this->Dya.setZero();
    this->DLfya.setZero();

    this->yd.setZero();
    this->dyd.setZero();
    this->d2yd.setZero();

    this->time = 0.0;
}

void OUTPUT_standing::Config::init(){
    this->nom_stand_height = 0.75;
    this->stand_radio_ratio = 0.0;

    this->outputsize = 6;

    this->yaw_ref = 0.0;
}

void OUTPUT_standing::Memory::init() {
    this->iDomain = 0;
    this->reset();
}

void OUTPUT_standing::Memory::reset() {
    this->timer.restart();
    this->isInitialized = false;
}

void OUTPUT_standing::Config::reconfigure() {
    this->isSim = false;
    ros::param::get("/cassie/is_simulation", this->isSim);

    this->paramChecker.checkAndUpdate("nom_stand_height", this->nom_stand_height);
    this->paramChecker.checkAndUpdate("stand_radio_ratio", this->stand_radio_ratio);
}


OUTPUT_standing::OUTPUT_standing(ros::NodeHandle &nh, cassie_model::Cassie &robot, int control_mode) : nh(&nh) {
    this->robot = &robot;

    if (control_mode != 0){
        ROS_ERROR("OUTPUT_standing can only be used as a standing output");
    }
    this->config.outputsize = 6;

    // Parameter checker
    this->config.paramChecker.init(nh.getNamespace() + "/HLIP");

    // All the storage
    this->reconfigure();
    this->cache.init(&this->config);
    this->memory.init();
    this->config.init();
}

void OUTPUT_standing::reset() {
    this->cache.reset();
    this->memory.reset();
}

bool OUTPUT_standing::reconfigure() {
    std::cout << "Polling rosparams under: " << this->config.paramChecker.node.getNamespace() << std::endl;
    this->config.reconfigure();

    return true;
}

void OUTPUT_standing::update(VectorXd &radio) {
    if (!this->memory.isInitialized) {
        this->memory.timer.restart();
        // this->memory.timer2.restart();
        this->memory.isInitialized = true;
        this->computeActual_standing(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
        this->config.yaw_ref = this->cache.ya(5);
    }
    this->computeActual_standing(this->cache.ya, this->cache.dya, this->cache.Dya, this->cache.DLfya);
    this->computeDesired_standing(this->cache.yd, this->cache.dyd, this->cache.d2yd, radio);
}

void OUTPUT_standing::computeActual_standing(VectorXd &ya, VectorXd &dya, MatrixXd &Dya, MatrixXd &DLfya) {
    //output:
    //size = 6
    //COM x,y,z position relative to mid-point of two stance pivot & pelvis roll, pitch, yaw
    VectorWrap ya_(ya), dya_(dya);
    SymFunction::yaStandCOM_new(ya_, this->robot->q);
    SymFunction::dyaStandCOM_new(dya_, this->robot->q, this->robot->dq);
    SymFunction::Dya_standCOM_new(Dya, this->robot->q);
    SymFunction::DLfya_standCOM_new(DLfya, this->robot->q, this->robot->dq);
}

void OUTPUT_standing::computeDesired_standing(VectorXd &yd, VectorXd &dyd, VectorXd &d2yd, VectorXd &radio) {
    yd.setZero();
    dyd.setZero();
    d2yd.setZero();
    double time = ros::Time::now().toSec();

//    //left: x y z pitch yaw right: x y z pitch yaw
//    yd(2) = .73;

    yd(2) = this->config.nom_stand_height + this->config.stand_radio_ratio*radio(RadioButtonMap::LS) ;
    yd(5) = this->config.yaw_ref;
}


void OUTPUT_standing::getDebug(VectorXf &dbg) {
    double tsec = static_cast<double>(ros::Time::now().sec);
    double tnsec = 1e-9 * static_cast<double>(ros::Time::now().nsec);
    // Move zero to closer time rather than 1970 so it fits in a float
    // Still bad practice to put time in floats, but this is just for logging
    if (!this->config.isSim)
        tsec -= 1631496319;//1.6074545e9;

    // Use floats for logging size and speed
    dbg << static_cast<float>(tsec), 
            static_cast<float>(tnsec), // 2
            this->cache.ya.cast<float>(),        // 10
            this->cache.dya.cast<float>(),       // 10
            this->cache.yd.cast<float>(),        // 10
            this->cache.dyd.cast<float>(),       // 10
            this->cache.d2yd.cast<float>(),       //10
            
            static_cast<float>(this->memory.timer.elapsed()), // 1
            
            this->robot->q.cast<float>(), // 22
            this->robot->dq.cast<float>(), // 22
            this->robot->ddq.cast<float>(), // 22
            this->robot->gyroscope.cast<float>(), // 3
            this->robot->accelerometer.cast<float>(), // 3
            this->robot->GRF.cast<float>(); // 6
}
