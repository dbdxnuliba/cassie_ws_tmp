/*
 * MIT License
 *
 * Copyright (c) 2020 Jenna Reher (jreher@caltech.edu)
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
*/

#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <string>
#include <fstream>
#include <iterator>
#include <random>

// Agility includes
#include <cassie_interface/udp.h>
#include <cassie_interface/cassie_out_t.h>
#include <cassie_interface/cassie_user_in_t.h>

// ROS includes
#include <ros/ros.h>
#include <ros_utilities/timing.hpp>
#include <control_eigen_utilities/limits.hpp>
#include <cassie_description/cassie_model.hpp>
#include <cassie_estimation/heelspring_solver.hpp>
#include <cassie_estimation/contact_classifier.hpp>
#include <cassie_estimation/contact_ekf.hpp>
#include <yaml_eigen_utilities/yaml_eigen_utilities.hpp>
#include <cassie_estimation/kinematics_hip_velocity_estimator.hpp>
#include <cassie_common_toolbox/RadioButtonMap.hpp>

// Load in message types
#include <cassie_common_toolbox/callback_helpers.hpp>
#include <cassie_common_toolbox/cassie_control_msg.h>
#include <cassie_common_toolbox/cassie_proprioception_msg.h>


using namespace cassie_model;

// Variable for control
static VectorXd u(10);
static ros_utilities::Timer timeout_timer(true);


// Callback for controller subscriber
void controller_callback(const cassie_common_toolbox::cassie_control_msg::ConstPtr& controlmsg) {
    timeout_timer.restart();
    for (unsigned long i=0; i<10; i++)
    {
        u[i] = controlmsg->motor_torque[i];
    }

}

// Main node
int main(int argc, char *argv[])
{
    // Establish the current ROS node and associated timing
    ros::init(argc, argv, "cassie_interface");
    ros::NodeHandle nh("/cassie/interface");

    // Check if the simulated joystick command is enabled!
    bool isSim = false;
    ros::param::get("/cassie/is_simulation", isSim);
    timeout_timer.start();


    // Get the safe torque limit from the parameter server
    std::string stl;
    VectorXd safe_torque_limit(10);
    ros::param::get("/cassie/interface/safe_torque_limit", stl);
    yaml_utilities::yaml_read_string(stl, safe_torque_limit);
    std::cout << "Using safe torque limit: " << safe_torque_limit.transpose() << std::endl;

    // Option variables and flags
    std::string remote_addr_str, remote_port_str, iface_addr_str, iface_port_str;
    if (isSim) {
        ROS_INFO("Using a simulated environment... Connecting to Gazebo Cassie network");
        remote_addr_str = "127.0.0.1";
        remote_port_str = "25000";
        iface_addr_str = "0.0.0.0";
        iface_port_str = "25001";
    } else {
        ROS_INFO("Using a hardware environment... Connecting to Cassie network");
        remote_addr_str = "10.10.10.3";
        remote_port_str = "25000";
        iface_addr_str = "10.10.10.105";
        iface_port_str = "25001";
    }


    // Setup ROS publisher/subscriber networks
    ros::Publisher proprioception_pub = nh.advertise<cassie_common_toolbox::cassie_proprioception_msg>("/cassie_proprioception", 1);
    ros::Subscriber controller_sub = nh.subscribe("/cassie_control", 1, controller_callback, ros::TransportHints().tcpNoDelay(true));
    cassie_common_toolbox::cassie_proprioception_msg proprioception_msg;

    // Bind to network interface
    std::cout << "Bind to network at: " << (const char *)remote_addr_str.c_str() <<std::endl;
    int sock = udp_init_client(remote_addr_str.c_str(),
                               remote_port_str.c_str(),
                               iface_addr_str.c_str(),
                               iface_port_str.c_str());
    if (-1 == sock)
        exit(EXIT_FAILURE);

    // Create packet input/output buffers
    const int dinlen = CASSIE_OUT_T_PACKED_LEN;
    const int doutlen = CASSIE_USER_IN_T_PACKED_LEN;
    const int recvlen = PACKET_HEADER_LEN + dinlen;
    const int sendlen = PACKET_HEADER_LEN + doutlen;
    unsigned char *recvbuf = new unsigned char[recvlen];
    unsigned char *sendbuf = new unsigned char[sendlen];

    // Separate input/output buffers into header and payload
    const unsigned char *header_in = recvbuf;
    const unsigned char *data_in = &recvbuf[PACKET_HEADER_LEN];
    unsigned char *header_out = sendbuf;
    unsigned char *data_out = &sendbuf[PACKET_HEADER_LEN];

    // Create standard input/output structs
    cassie_user_in_t cassie_user_in = {0};
    cassie_out_t cassie_out;

    // Create header information struct
    packet_header_info_t header_info = {0};

    // Prepare initial null command packet to start communication
    printf("Running the interface node...\n");
    memset(sendbuf, 0, sendlen);
    bool received_data = false;

    // Run our own characterization of the shin and heel spring offsets
    cassie_model::Cassie robot;
    ContactClassifier contact(nh, robot, 0.0005);
    HeelspringSolver achillesSolver(nh, robot);

    // // Add EKF to see difference between gazebo and ekf pelvis velocity
    // contact_ekf c_ekf(nh, robot, true);

    // Whether to log data
    VectorXf log = VectorXf::Zero(50+6);
    std::fstream logfile;
    bool log_interface = false;
    ros::param::get("/cassie/log_interface", log_interface);
    if ( log_interface ) {
        std::string home=getenv("HOME");
        std::string path= home+"/datalog/interface_log.bin";
        logfile.open(path, std::ios::out | std::ios::binary);
    }

    // // Whether to log noise data
    // bool log_noise = false;
    // std::ofstream logfileNoise, logfileNoise_linear_velocity;
    // if ( log_noise ) {
    //     std::string home = getenv("HOME");
    //     std::string path = home + "/cassie_ws_2/log/q_noise.txt";
    //     logfileNoise.open(path);

    //     path = home + "/cassie_ws_2/log/v_noise.txt";
    //     logfileNoise_linear_velocity.open(path);
    // }
    // Eigen::VectorXf pre_noise, post_noise, pre_noise_linear_velocity, post_noise_linear_velocity;
    // pre_noise.resize(14); post_noise.resize(14);
    // pre_noise_linear_velocity.resize(3); post_noise_linear_velocity.resize(3);
    // bool add_noise_encoder_velocity = false;
    // bool add_noise_linear_velocity = false;

    // // Whether to log and compare ekf and gazebo
    // bool log_ekf = true;
    // std::ofstream logfileEKF;
    // if (log_ekf) {
    //     std::string home = getenv("HOME");
    //     std::string path = home + "/cassie_ws_2/log/q_ekf_int.txt";
    //     logfileEKF.open(path);
    // }

    // Listen/respond loop
    while (ros::ok()) {
        // Spin ROS once to get updated control values
        ros::spinOnce();

        // Check the timeout and see if the torque must be zeroed
        double timeout_duration = 0.01; // seconds
        if (timeout_timer.elapsed() > timeout_duration) {
            for (unsigned long i=0; i<10; i++)
                u[i] = 0.0;
        } else {
            // Apply saturation on the actuation as an extra safety check
            control_eigen_utilities::clamp(u, -safe_torque_limit, safe_torque_limit);
        }

        if (isSim) {
            // Check for data
            if (!received_data) {
                // Send null commands until the simulator responds
                ssize_t nbytes;
                do {
                    send_packet(sock, sendbuf, sendlen, nullptr, 0);
                    usleep(1000);
                    nbytes = get_newest_packet(sock, recvbuf, recvlen, nullptr, nullptr);
                } while (recvlen != nbytes);
                received_data = true;
                printf("Connected!\n\n");
            } else {
                // Wait for a new packet
                wait_for_packet(sock, recvbuf, recvlen, nullptr, nullptr);
            }
        } else {
            // listen to the udp with;
            //  sock:       specific socket addresses
            //  recvbuf:    receive buffer
            //  recvlen:    length of receive buffer
            wait_for_packet(sock, recvbuf, recvlen, nullptr, nullptr);
        }

        // Process incoming header and write outgoing header
        //  header_info:    packet header info
        //  header_in:      input header
        //  header_out:     output header
        process_packet_header(&header_info, header_in, header_out);

        // Unpack received data into cassie user input struct
        unpack_cassie_out_t(data_in, &cassie_out);

        // Pack subscribed actuator torques and udp towards cassie
        for (unsigned int i=0; i<10; i++) {
            cassie_user_in.torque[i] = u[i];
        }
        pack_cassie_user_in_t(&cassie_user_in, data_out);

        // Send response over the udp socket
        send_packet(sock, sendbuf, sendlen, nullptr, 0);

        // Pack and publish the proprioception data
        // Question: why is cassie_out having a torque signal? Torque sensing?
        proprioception_msg.orientation.w = cassie_out.pelvis.vectorNav.orientation[0];
        proprioception_msg.orientation.x = cassie_out.pelvis.vectorNav.orientation[1];
        proprioception_msg.orientation.y = cassie_out.pelvis.vectorNav.orientation[2];
        proprioception_msg.orientation.z = cassie_out.pelvis.vectorNav.orientation[3];
        proprioception_msg.angular_velocity.x = cassie_out.pelvis.vectorNav.angularVelocity[0];
        proprioception_msg.angular_velocity.y = cassie_out.pelvis.vectorNav.angularVelocity[1];
        proprioception_msg.angular_velocity.z = cassie_out.pelvis.vectorNav.angularVelocity[2];
        proprioception_msg.linear_acceleration.x = cassie_out.pelvis.vectorNav.linearAcceleration[0];
        proprioception_msg.linear_acceleration.y = cassie_out.pelvis.vectorNav.linearAcceleration[1];
        proprioception_msg.linear_acceleration.z = cassie_out.pelvis.vectorNav.linearAcceleration[2];
        proprioception_msg.motor_torque[0] = cassie_out.leftLeg.hipRollDrive.torque;
        proprioception_msg.motor_torque[1] = cassie_out.leftLeg.hipYawDrive.torque;
        proprioception_msg.motor_torque[2] = cassie_out.leftLeg.hipPitchDrive.torque;
        proprioception_msg.motor_torque[3] = cassie_out.leftLeg.kneeDrive.torque;
        proprioception_msg.motor_torque[4] = cassie_out.leftLeg.footDrive.torque;
        proprioception_msg.motor_torque[5] = cassie_out.rightLeg.hipRollDrive.torque;
        proprioception_msg.motor_torque[6] = cassie_out.rightLeg.hipYawDrive.torque;
        proprioception_msg.motor_torque[7] = cassie_out.rightLeg.hipPitchDrive.torque;
        proprioception_msg.motor_torque[8] = cassie_out.rightLeg.kneeDrive.torque;
        proprioception_msg.motor_torque[9] = cassie_out.rightLeg.footDrive.torque;
        proprioception_msg.encoder_position[0] = cassie_out.leftLeg.hipRollDrive.position;
        proprioception_msg.encoder_position[1] = cassie_out.leftLeg.hipYawDrive.position;
        proprioception_msg.encoder_position[2] = cassie_out.leftLeg.hipPitchDrive.position;
        proprioception_msg.encoder_position[3] = cassie_out.leftLeg.kneeDrive.position;
        proprioception_msg.encoder_position[4] = cassie_out.leftLeg.shinJoint.position;
        proprioception_msg.encoder_position[5] = cassie_out.leftLeg.tarsusJoint.position;
        proprioception_msg.encoder_position[6] = cassie_out.leftLeg.footJoint.position;
        proprioception_msg.encoder_position[7] = cassie_out.rightLeg.hipRollDrive.position;
        proprioception_msg.encoder_position[8] = cassie_out.rightLeg.hipYawDrive.position;
        proprioception_msg.encoder_position[9] = cassie_out.rightLeg.hipPitchDrive.position;
        proprioception_msg.encoder_position[10] = cassie_out.rightLeg.kneeDrive.position;// + 0.03;
        proprioception_msg.encoder_position[11] = cassie_out.rightLeg.shinJoint.position;// + 0.02;
        proprioception_msg.encoder_position[12] = cassie_out.rightLeg.tarsusJoint.position;
        proprioception_msg.encoder_position[13] = cassie_out.rightLeg.footJoint.position;
        proprioception_msg.encoder_velocity[0] = cassie_out.leftLeg.hipRollDrive.velocity;
        proprioception_msg.encoder_velocity[1] = cassie_out.leftLeg.hipYawDrive.velocity;
        proprioception_msg.encoder_velocity[2] = cassie_out.leftLeg.hipPitchDrive.velocity;
        proprioception_msg.encoder_velocity[3] = cassie_out.leftLeg.kneeDrive.velocity;
        proprioception_msg.encoder_velocity[4] = cassie_out.leftLeg.shinJoint.velocity;
        proprioception_msg.encoder_velocity[5] = cassie_out.leftLeg.tarsusJoint.velocity;
        proprioception_msg.encoder_velocity[6] = cassie_out.leftLeg.footJoint.velocity;
        proprioception_msg.encoder_velocity[7] = cassie_out.rightLeg.hipRollDrive.velocity;
        proprioception_msg.encoder_velocity[8] = cassie_out.rightLeg.hipYawDrive.velocity;
        proprioception_msg.encoder_velocity[9] = cassie_out.rightLeg.hipPitchDrive.velocity;
        proprioception_msg.encoder_velocity[10] = cassie_out.rightLeg.kneeDrive.velocity;
        proprioception_msg.encoder_velocity[11] = cassie_out.rightLeg.shinJoint.velocity;
        proprioception_msg.encoder_velocity[12] = cassie_out.rightLeg.tarsusJoint.velocity;
        proprioception_msg.encoder_velocity[13] = cassie_out.rightLeg.footJoint.velocity;

        proprioception_msg.isCalibrated = cassie_out.isCalibrated;

        // ///////////////
        // // ADD NOISE //
        // ///////////////
        // if (log_noise){
        //     for (int i=0; i<14; i++){
        //         pre_noise(i) = proprioception_msg.encoder_velocity[i];
        //     }
        //     logfileNoise << pre_noise << "\n";
        // }
        // if (add_noise_encoder_velocity){
        //     float minmax = 0.1;
        //     auto dist = std::bind(std::uniform_real_distribution<float>{-1*minmax,1*minmax},
        //                         std::mt19937(std::random_device{}()));
        //     // auto dist = std::bind(std::normal_distribution<float>{0.0,0.1},
        //     //                       std::mt19937(std::random_device{}()));
        //     for (int i=0; i<14; i++){
        //         proprioception_msg.encoder_velocity[i] += dist();
        //     }
        // }
        // if (log_noise){
        //     for (int i=0; i<14; i++){
        //         post_noise(i) = proprioception_msg.encoder_velocity[i];
        //     }
        //     logfileNoise << post_noise << "\n";
        //     logfileNoise << ros::Time::now().toSec() << "\n\n";
        // }

        // Get encoder positions, this is just two indexing methods
        // relating 'proprioception_msg' to robot.q and robot.dq
        robot.q.setZero();
        robot.dq.setZero();
        get_proprioception_encoders(proprioception_msg, robot.q, robot.dq);
        // This indexes q(1:6), dq(1:6), and the orientation quaternion
        get_proprioception_orientation(proprioception_msg, robot.q, robot.dq, robot.quat_pelvis);

        if (cassie_out.isCalibrated) {
            // Update contact / achilles and export
            achillesSolver.update();
//            robot.q(LeftHeelSpring) = 0;
//            robot.q(RightHeelSpring) = 0;
//            robot.dq(LeftHeelSpring) = 0;
//            robot.dq(RightHeelSpring) = 0;

            for (int i=0; i<10; i++){
                robot.torque(i) = proprioception_msg.motor_torque[i];
            }

            // Update contact and GRF estimation
            contact.update();

            // Populate kinematics terms
            // Question: why do we do this again? achillessolver only updates
            //           the spring joint estimations
            proprioception_msg.encoder_position[4]   = robot.q(LeftShinPitch);
            proprioception_msg.encoder_position[5]   = robot.q(LeftTarsusPitch);
            proprioception_msg.encoder_position[11]  = robot.q(RightShinPitch);
            proprioception_msg.encoder_position[12]  = robot.q(RightTarsusPitch);
            proprioception_msg.encoder_velocity[4]   = robot.dq(LeftShinPitch);
            proprioception_msg.encoder_velocity[5]   = robot.dq(LeftTarsusPitch);
            proprioception_msg.encoder_velocity[11]  = robot.dq(RightShinPitch);
            proprioception_msg.encoder_velocity[12]  = robot.dq(RightTarsusPitch);

            proprioception_msg.q_achilles[0]  = robot.q(LeftHeelSpring);
            proprioception_msg.q_achilles[1]  = robot.q(RightHeelSpring);
            proprioception_msg.dq_achilles[0] = robot.dq(LeftHeelSpring); // The velocities are quite violent while swinging, set to zero in swing.
            proprioception_msg.dq_achilles[1] = robot.dq(RightHeelSpring);
            proprioception_msg.contact[0]     = robot.leftContact;
            proprioception_msg.contact[1]     = robot.rightContact;

            // VectorXd encoder(14), dencoder(14), con(2);
            // for (int i = 0; i<14; i++) {
            //     encoder(i) = proprioception_msg.encoder_position[i];
            //     dencoder(i) = proprioception_msg.encoder_velocity[i];
            // }

            if (isSim) {
                cassie_out.pelvis.radio.channel[SA] = 1.0;
                cassie_out.pelvis.radio.channel[SB] = 0.0;
                cassie_out.pelvis.radio.channel[LS] = 1.0;

                if (ros::Time::now().toSec() < 0.9){
                    // Robot is in simulation
                    cassie_out.pelvis.radio.channel[SB] = -1;
                }
                // if (control_mode = 1){
                //     if (ros::Time::now().toSec() < 0.9){
                //         // Robot is in simulation
                //         cassie_out.pelvis.radio.channel[SB] = -1;
                //     }
                // }


                // Update the velocities based on the orientation of the pelvis
                // which is received as a quaternion from cassie
                Eigen::Quaterniond quat;
                quat.w() = proprioception_msg.orientation.w;
                quat.x() = proprioception_msg.orientation.x;
                quat.y() = proprioception_msg.orientation.y;
                quat.z() = proprioception_msg.orientation.z;
                Eigen::EulerAnglesXYZd euler;
                eulerXYZ(quat, euler);
                Eigen::Matrix3d Rz;
                Rz << cos(euler.gamma()), -sin(euler.gamma()), 0,
                sin(euler.gamma()),  cos(euler.gamma()), 0,
                0, 0, 1;
                Vector3d vel;
                vel << cassie_out.pelvis.vectorNav.magneticField[0],
                cassie_out.pelvis.vectorNav.magneticField[1],
                cassie_out.pelvis.vectorNav.magneticField[2];
                vel = Rz.transpose() * vel;
                proprioception_msg.linear_velocity.x = vel[0];
                proprioception_msg.linear_velocity.y = vel[1];
                proprioception_msg.linear_velocity.z = vel[2];

                // ///////////////
                // // ADD NOISE //
                // ///////////////
                // if (log_noise){
                //     pre_noise_linear_velocity(0) = proprioception_msg.linear_velocity.x;
                //     pre_noise_linear_velocity(1) = proprioception_msg.linear_velocity.y;
                //     pre_noise_linear_velocity(2) = proprioception_msg.linear_velocity.z;
                //     logfileNoise_linear_velocity << pre_noise_linear_velocity << "\n";
                // }
                // if (add_noise_linear_velocity){
                //     float minmax = 0.25;
                //     auto dist = std::bind(std::uniform_real_distribution<float>{-1*minmax,1*minmax},
                //                           std::mt19937(std::random_device{}()));
                //     // auto dist = std::bind(std::normal_distribution<float>{0.0,0.1},
                //     //                       std::mt19937(std::random_device{}()));
                //     proprioception_msg.linear_velocity.x += dist();
                //     proprioception_msg.linear_velocity.y += dist();
                //     proprioception_msg.linear_velocity.z += dist();
                // }
                // if (log_noise){
                //     post_noise_linear_velocity(0) = proprioception_msg.linear_velocity.x;
                //     post_noise_linear_velocity(1) = proprioception_msg.linear_velocity.y;
                //     post_noise_linear_velocity(2) = proprioception_msg.linear_velocity.z;
                //     logfileNoise_linear_velocity << post_noise_linear_velocity << "\n";
                //     logfileNoise_linear_velocity << ros::Time::now().toSec() << "\n\n";
                // }

                // ////////////////
                // // update EKF //
                // ////////////////
                // Eigen::VectorXd w, a, encoders, dencoders, contact_vec;
                // w.resize(3); a.resize(3); encoders.resize(14); dencoders.resize(14); contact_vec.resize(2);
                // for (int i=0; i<w.size(); i++){
                //     w(i) = cassie_out.pelvis.vectorNav.angularVelocity[i];
                //     a(i) = cassie_out.pelvis.vectorNav.linearAcceleration[i];
                // }
                // contact_vec(0) = proprioception_msg.contact[0];
                // contact_vec(1) = proprioception_msg.contact[1];
                // for (int i=0; i<encoders.size(); i++){
                //     encoders(i) = proprioception_msg.encoder_position[i];
                //     dencoders(i) = proprioception_msg.encoder_velocity[i];
                // }
                // c_ekf.update(0.0005,w,a,encoders,dencoders,contact_vec);
                // // get EKF values
                // Matrix3d R_ekf;
                // Vector3d p_ekf, v_ekf, ba_ekf, bg_ekf, plf_ekf, prf_ekf;
                // Vector2d footYaws_ekf;
                // c_ekf.getValues(R_ekf,p_ekf,v_ekf,ba_ekf,bg_ekf,plf_ekf,prf_ekf,footYaws_ekf);
                // // Log if required
                // Vector3d p_gaz, v_gaz;
                // p_gaz(0) = robot.q(BasePosX);
                // p_gaz(1) = robot.q(BasePosY);
                // p_gaz(2) = robot.q(BasePosZ);
                // v_gaz(0) = proprioception_msg.linear_velocity.x;
                // v_gaz(1) = proprioception_msg.linear_velocity.y;
                // v_gaz(2) = proprioception_msg.linear_velocity.z;
                
                // if (log_ekf){
                //     VectorXd grfOut;
                //     contact.getGRF(grfOut);
                //     logfileEKF << p_gaz << "\n";
                //     logfileEKF << v_gaz << "\n";
                //     logfileEKF << p_ekf << "\n";
                //     logfileEKF << v_ekf << "\n";
                //     logfileEKF << contact_vec << "\n";
                //     logfileEKF << grfOut << "\n\n";
                // }
                
                // Don't use springs right away
                if (ros::Time::now().toSec() < 1.0) {
                    proprioception_msg.contact[0] = 0.;
                    proprioception_msg.contact[1] = 0.;
                }

                // Do simulation
                //use 6 for nominal
                //try 2.5 for walking in the air
                if (ros::Time::now().toSec() > 6.0) {
                    // Crouch simulation
                    // cassie_out.pelvis.radio.channel[SH] = -1.0;

                    // Walk simulation
                    cassie_out.pelvis.radio.channel[SB] = 1.0;

                    if (ros::Time::now().toSec() > 25.0)
                        cassie_out.pelvis.radio.channel[LV] = 1.;
                    if (ros::Time::now().toSec() > 45.0)
                        cassie_out.pelvis.radio.channel[LV] = 0.;
                    if (ros::Time::now().toSec() > 55.0)
                        cassie_out.pelvis.radio.channel[LV] = -1.;
                    if (ros::Time::now().toSec() > 65.0)
                        cassie_out.pelvis.radio.channel[LV] = 0.;
                    if (ros::Time::now().toSec() > 75.0)
                        cassie_out.pelvis.radio.channel[LH] = 1.;
                    if (ros::Time::now().toSec() > 85.0)
                        cassie_out.pelvis.radio.channel[LH] = 0.;
                    if (ros::Time::now().toSec() > 95.0) {
                        cassie_out.pelvis.radio.channel[LH] = -0.50;
                        cassie_out.pelvis.radio.channel[LV] =  0.50;
                    }
                }
            } // if (isSim)

            // Set to zero for testing walking in air in sim
            if (isSim){
                cassie_out.pelvis.radio.channel[LH] = 0.0;
                cassie_out.pelvis.radio.channel[LV] = 0.0;
                cassie_out.pelvis.radio.channel[LS] = 0.0;

                cassie_out.pelvis.radio.channel[RH] = 0.0;
                cassie_out.pelvis.radio.channel[RV] = 0.0;
                cassie_out.pelvis.radio.channel[RS] = 0.0;

                if (ros::Time::now().toSec() > 1.0){
                    cassie_out.pelvis.radio.channel[LH] = 1.0;
                }
                if (ros::Time::now().toSec() > 1.5){
                    cassie_out.pelvis.radio.channel[RS] = -1.0;
                }
                if (ros::Time::now().toSec() > 2.0){
                    cassie_out.pelvis.radio.channel[RV] = 1.0;
                    cassie_out.pelvis.radio.channel[LH] = -1.0;
                }
                if (ros::Time::now().toSec() > 2.5){
                    cassie_out.pelvis.radio.channel[LV] = 1.0;
                }
                if (ros::Time::now().toSec() > 3.0){
                    cassie_out.pelvis.radio.channel[RV] = -0.5;
                }
            } // if (isSim)

            // Radio is all zero until the robot is calibrated. Extra safety precaution.
            for (unsigned int i=0; i<16; i++){
                proprioception_msg.radio[i] = cassie_out.pelvis.radio.channel[i];
            }


            // Add header
            proprioception_msg.header.stamp = ros::Time::now();
            proprioception_pub.publish(proprioception_msg);

            // Write log
            if ( log_interface ) {

                double tsec = static_cast<double>(ros::Time::now().sec);
                double tnsec = static_cast<double>(ros::Time::now().nsec)*1e-9;
                // Move zero to closer time rather than 1970 so it fits in a float
                // Still bad practice to put time in floats, but this is just for logging
                if ( !isSim )
                    tsec -= 1631496319;//1.6074545e9;

                // Get the mean voltage measured on the DC bus input to the motors
                double voltage = 0.;
                voltage = (cassie_out.leftLeg.hipRollDrive.dcLinkVoltage
                        + cassie_out.leftLeg.hipYawDrive.dcLinkVoltage
                        + cassie_out.leftLeg.hipPitchDrive.dcLinkVoltage
                        + cassie_out.leftLeg.kneeDrive.dcLinkVoltage
                        + cassie_out.leftLeg.hipRollDrive.dcLinkVoltage
                        + cassie_out.rightLeg.footDrive.dcLinkVoltage
                        + cassie_out.rightLeg.hipYawDrive.dcLinkVoltage
                        + cassie_out.rightLeg.hipPitchDrive.dcLinkVoltage
                        + cassie_out.rightLeg.kneeDrive.dcLinkVoltage
                        + cassie_out.rightLeg.footDrive.dcLinkVoltage) / 10.;

                // Convert torques to current
                // current = torque / (gearRatio * motorConstant)
                // gear ratio and motorConstant obtained from Agility Robotics
                double motorCurrent = 0.;
                motorCurrent = fabs(cassie_out.leftLeg.hipRollDrive.torque * 0.30769230769)
                        + fabs(cassie_out.leftLeg.hipYawDrive.torque * 0.30769230769)
                        + fabs(cassie_out.leftLeg.hipPitchDrive.torque * 0.23148148148)
                        + fabs(cassie_out.leftLeg.kneeDrive.torque * 0.23148148148)
                        + fabs(cassie_out.leftLeg.footDrive.torque * 0.35087719298)
                        + fabs(cassie_out.rightLeg.hipRollDrive.torque * 0.30769230769)
                        + fabs(cassie_out.rightLeg.hipYawDrive.torque * 0.30769230769)
                        + fabs(cassie_out.rightLeg.hipPitchDrive.torque * 0.23148148148)
                        + fabs(cassie_out.rightLeg.kneeDrive.torque * 0.23148148148)
                        + fabs(cassie_out.rightLeg.footDrive.torque * 0.35087719298);

                // Use floats for logging size and speed
                log << static_cast<float>(tsec), static_cast<float>(tnsec), // 2                                                                                                             // 1
//                static_cast<float>(proprioception_msg.orientation.w),
//                static_cast<float>(proprioception_msg.orientation.x),
//                static_cast<float>(proprioception_msg.orientation.y),
//                static_cast<float>(proprioception_msg.orientation.z), // 4
//                static_cast<float>(proprioception_msg.angular_velocity.x),
//                static_cast<float>(proprioception_msg.angular_velocity.y),
//                static_cast<float>(proprioception_msg.angular_velocity.z),// 3
//                static_cast<float>(proprioception_msg.linear_acceleration.x),
//                static_cast<float>(proprioception_msg.linear_acceleration.y),
//                static_cast<float>(proprioception_msg.linear_acceleration.z), // 3
//                static_cast<float>(proprioception_msg.linear_velocity.x),
//                static_cast<float>(proprioception_msg.linear_velocity.y),
//                static_cast<float>(proprioception_msg.linear_velocity.z), // 3
//                encoder.cast <float> (),                                  // 14
//                dencoder.cast <float> (),                                 // 14
//                static_cast<float>(proprioception_msg.q_achilles[0]),
//                static_cast<float>(proprioception_msg.q_achilles[1]),     // 2
//                static_cast<float>(proprioception_msg.dq_achilles[0]),
//                static_cast<float>(proprioception_msg.dq_achilles[1]),   // 2
                static_cast<float>(proprioception_msg.contact[0]),
                static_cast<float>(proprioception_msg.contact[1]),
                static_cast<float>(motorCurrent),//cassie_out.pelvis.battery.current),
                static_cast<float>(voltage),
                robot.q.cast<float>(),
                robot.dq.cast<float>(),
                robot.GRF.cast<float>();
                robot.torque.cast<float>();
                logfile.write(reinterpret_cast<char *>(log.data()), (log.size())*sizeof(float));
            }
        }
    }

    if ( log_interface ) {
        logfile.close();
    }

    // if ( log_noise ) {
    //     logfileNoise.close();
    // }
    // if ( log_ekf ) {
    //     logfileEKF.close();
    // }
}
