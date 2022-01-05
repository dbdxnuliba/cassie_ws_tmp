# generated from catkin/cmake/template/pkg.context.pc.in
CATKIN_PACKAGE_PREFIX = ""
PROJECT_PKG_CONFIG_INCLUDE_DIRS = "${prefix}/include".split(';') if "${prefix}/include" != "" else []
PROJECT_CATKIN_DEPENDS = "roscpp;rospy;std_srvs;std_msgs;ros_utilities;eigen_utilities;control_utilities;cassie_common_toolbox;realtime_utilities;roslib_utilities;qpoases_ros".replace(';', ' ')
PKG_CONFIG_LIBRARIES_WITH_PREFIX = "-lcassie_controllers".split(';') if "-lcassie_controllers" != "" else []
PROJECT_NAME = "cassie_controllers"
PROJECT_SPACE_DIR = "/usr/local"
PROJECT_VERSION = "0.0.0"
