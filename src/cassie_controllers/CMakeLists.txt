cmake_minimum_required(VERSION 2.8 FATAL_ERROR)
project(cassie_controllers)

add_compile_options(-std=c++11)

## Find catkin macros and libraries
## if COMPONENTS list like find_package(catkin REQUIRED COMPONENTS xyz)
## is used, also find other catkin packages
# Custom commands for specifying relative link_directories
set(OsqpEigen_DIR /usr/local/lib/cmake/OsqpEigen/)

find_package(catkin REQUIRED COMPONENTS
  roscpp
  rospy
  std_srvs
  std_msgs
  cassie_description
  control_utilities
  eigen_utilities
  ros_utilities
  cassie_common_toolbox
  cassie_estimation
  realtime_utilities
  roslib_utilities
  qpoases_ros
  # osqp
  # OsqpEigen
)

###################################
## catkin specific configuration ##
###################################
## The catkin_package macro generates cmake config files for your package
## Declare things to be passed to dependent projects
## INCLUDE_DIRS: uncomment this if you package contains header files
## LIBRARIES: libraries you create in this project that dependent projects also need
## CATKIN_DEPENDS: catkin_packages dependent projects also need
## DEPENDS: system dependencies of this project that dependent projects also need
catkin_package(
   INCLUDE_DIRS include
   LIBRARIES ${PROJECT_NAME}
   CATKIN_DEPENDS roscpp rospy std_srvs std_msgs ros_utilities eigen_utilities control_utilities cassie_common_toolbox realtime_utilities roslib_utilities qpoases_ros
   DEPENDS
)

###########
## Build ##
###########
add_definitions(-Wno-deprecated-declarations)

include(common_flags)
option(USE_VECTORIZATION "Use vectorization" OFF)
if(USE_VECTORIZATION)
  common_add_vectorization_flags()
endif()

# Specify custom includes and libs
include_directories(include ${catkin_INCLUDE_DIRS})

# Create controller libraries
# add_library(${PROJECT_NAME}
#     src/standing_control_qp.cpp
#     src/inverse_kinematics.cpp
#     src/walking_onedomain.cpp
#     src/TSCQPsolver.cpp
#     src/OUTPUT_HZD.cpp
#     src/OUTPUT_HLIP.cpp
#     src/OUTPUT_SLIP.cpp 
#     src/OUTPUT_DEBUG.cpp
#     src/TSCQPsolver_SLIP.cpp 
#     src/TSCQPsolver_DEBUG.cpp
#     ) 

add_library(${PROJECT_NAME}
    # src/standing_control_qp.cpp
    # src/inverse_kinematics.cpp
    src/OUTPUT_HLIP.cpp
    src/OUTPUT_SLIP.cpp 
    # src/OUTPUT_standing.cpp
    src/TSCQPsolver_SLIP.cpp 
    src/TSCQPsolver.cpp 
    src/TSCQPsolver_SLIP_FE.cpp 
    # src/TSCQPsolver_osqp.cpp
    ) 

add_dependencies(${PROJECT_NAME} ${catkin_EXPORTED_TARGETS})
target_link_libraries(${PROJECT_NAME} ${catkin_LIBRARIES})

add_executable(locomotion_node_SLIP src/locomotion_node_SLIP.cpp)
target_link_libraries(locomotion_node_SLIP ${catkin_LIBRARIES} ${PROJECT_NAME})

add_executable(hardware_testing_node src/hardware_testing_node.cpp)
target_link_libraries(hardware_testing_node ${catkin_LIBRARIES} ${PROJECT_NAME})

