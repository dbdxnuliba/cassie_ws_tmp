//
// Created by dm on 8/12/21.
//

// ROS
#include <ros/ros.h>
#include "std_msgs/Int16.h"

// Robot descriptions
#include <cassie_description/cassie_model.hpp>
#include <cassie_common_toolbox/RadioButtonMap.hpp>

// Controllers
// #include <cassie_controllers/standing_control_qp.hpp>

// #include <cassie_controllers/walking_onedomain.hpp>

#include <cassie_controllers/TSCQPsolver.hpp>
// #include <cassie_controllers/TSCQPsolver_SLIP.hpp>
// #include <cassie_controllers/TSCQPsolver_SLIP_FE.hpp>
// #include <cassie_controllers/OUTPUT_HZD.hpp>
#include <cassie_controllers/OUTPUT_SLIP.hpp>
#include <cassie_controllers/OUTPUT_HLIP.hpp>
// #include <cassie_controllers/OUTPUT_standing.hpp>
// #include <cassie_controllers/OUTPUT_DEBUG.hpp>

// Load in message types
#include <cassie_common_toolbox/callback_helpers.hpp>
#include <cassie_common_toolbox/cassie_control_msg.h>
#include <cassie_common_toolbox/cassie_proprioception_msg.h>
#include <cassie_common_toolbox/cassie_velocity_estimation_msg.h>

#include <realtime_utilities/timing.hpp>

// Logging
#include <fstream>
#include <cmath>
#include <cstdio>
#include <iostream>

// Noise
#include <random>
#include <iterator>

using namespace Eigen;
using namespace cassie_model;

// Robotic states
static bool is_initialized = false;
static Cassie robot;
static VectorXd radio(16);
static int mode_command = -1; // Coming from the radio
std_msgs::Int16 controller_type;


// Callback for proprioception subscriber
void proprioception_callback(const cassie_common_toolbox::cassie_proprioception_msg::ConstPtr &propmsg) {
    unpack_proprioception(propmsg, robot.q, robot.dq, radio, robot.gyroscope, robot.accelerometer, robot.torque,
                          robot.leftContact, robot.rightContact);
    get_proprioception_orientation(*propmsg, robot.q, robot.dq, robot.quat_pelvis);
    mode_command = (int) radio(RadioButtonMap::SB);
    // std::cout << "proprioception_callback!" << std::endl;
    // std::cout << "leftContact: " << robot.leftContact << std::endl;
    // std::cout << "rightContact: " << robot.rightContact << std::endl;
    is_initialized = true;

}

void velocity_estimation_callback(const cassie_common_toolbox::cassie_velocity_estimation_msg::ConstPtr &velmsg) {
    robot.dq(BasePosX) = velmsg->linear_velocity.x;
    robot.dq(BasePosY) = velmsg->linear_velocity.y;
    robot.dq(BasePosZ) = velmsg->linear_velocity.z;

    bool addNoise = false;
    if (addNoise){
        float minmax = 0.1;
        auto dist = std::bind(std::uniform_real_distribution<float>{-1*minmax,1*minmax},
                              std::mt19937(std::random_device{}()));
        robot.dq(BasePosX) += dist();
        robot.dq(BasePosY) += dist();
        robot.dq(BasePosZ) += dist();
    }
}

// void controller_type_callback(const std_msgs::Int16::ConstPtr& msg){
//     controller_type = msg->data;
// }

// Main node
int main(int argc, char *argv[]) {
    // Establish the current ROS node and associated timing
    ros::init(argc, argv, "locomotion_control_SLIP");
    ros::NodeHandle nh("/cassie/locomotion_control");

    // Setup ROS publisher/subscriber networks
    double dt_des;
    ros::param::get("/cassie/locomotion_control/dt", dt_des);


    ros::Rate looprate(1 / dt_des); // Run at 2 kHz
    ros::Publisher controller_pub = nh.advertise<cassie_common_toolbox::cassie_control_msg>("/cassie_control", 1);
    ros::Subscriber vel_est_sub = nh.subscribe("/cassie_velocity_estimation", 1, velocity_estimation_callback,
                                               ros::TransportHints().tcpNoDelay(true));
    ros::Subscriber proprioception_sub = nh.subscribe("/cassie_proprioception", 1, proprioception_callback,
                                                      ros::TransportHints().tcpNoDelay(true));

    cassie_common_toolbox::cassie_control_msg control_message;

    // Create the associated controllers
    bool is_one_domain = true;
    ros::param::get("/cassie/locomotion_control/use_one_domain", is_one_domain);

    
    OUTPUT_SLIP output(nh, robot, 1);
    TSCQPsolver tscqpsolver(nh, robot, 1);
    OUTPUT_SLIP output_inair(nh,robot, -1);
    TSCQPsolver tscqpsolver_inair(nh, robot, -1);
    OUTPUT_SLIP output_standing(nh, robot, 0);
    TSCQPsolver tscqpsolver_standing(nh, robot, 0);

    // Logging things
    VectorXf qploginair(150-0);
    qploginair.setZero();

    VectorXf qpulog(10);
    qpulog.setZero();


    std::ofstream logfileWalku, logfileInair;
    bool log_controller = false;
    ros::param::get("/cassie/log_controller", log_controller);
    if (log_controller) {
        std::string home = getenv("HOME");
        std::cout << "home: " << home << std::endl;
        {
            std::string path = home + "/cassie_joris/log/qp_u_walk_log_SLIP.txt";
            logfileWalku.open(path);
        }
        {
            std::string path = home + "/cassie_joris/log/qp_y_inair_log_SLIP.txt";
            logfileInair.open(path);
        }
    }

    // Listen/respond loop
    int mode = -1;
    VectorXd u(10);
    u.setZero();
    VectorXd u_old(10);
    u_old.setZero();

    while (ros::ok()) {
        // Do things
        ros::spinOnce();

        // Zero the torque and set the message timestamp
        control_message.motor_torque.fill(0.0);

        double secs = ros::Time::now().toSec();

        // Main state machine
        if (is_initialized) {
            // only enable controller if SB is set to the zero position
            if (radio(RadioButtonMap::SB) == 0) {
                output_inair.update(radio);
                tscqpsolver_inair.update(u, output_inair);
                if (log_controller){
                    output_inair.getDebug(qploginair);
                    tscqpsolver_inair.getDebug(qpulog);
                    logfileInair << qploginair << "\n\n";
                    logfileWalku << qpulog << "\n\n";
                }
            } else {
                u.setZero();
            }
            
            bool applyComputedTorque = false;
            if (applyComputedTorque){
                for (unsigned int i = 0; i < 10; ++i) {
                    control_message.motor_torque[i] = u(i);
                } 
            } else {
                for (unsigned int i = 0; i < 10; ++i) {
                    control_message.motor_torque[i] = 0.0;
                }   
            }

            if (mode_command < 0) {
                ROS_INFO("Transitioning to null control!");
                mode = -1;
            }
        }

        for (unsigned int i = 0; i < 10; ++i) {
            bool val = std::isnan(control_message.motor_torque[i]);
            if (val) {
                control_message.motor_torque.fill(0.0);
                control_message.header.stamp = ros::Time::now();
                controller_pub.publish(control_message);

                ROS_ERROR("The controller generated a nan torque!!!!!!!");
                return 1;
            }
        }

        // Publish the control message
        control_message.header.stamp = ros::Time::now();
        controller_pub.publish(control_message);

        looprate.sleep();
    }

    if (log_controller) {
        logfileWalku.close();
        logfileInair.close();
    }

    return 0;
}
