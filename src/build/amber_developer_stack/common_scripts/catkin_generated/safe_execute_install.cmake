execute_process(COMMAND "/home/none/cassie_ws_2/src/build/amber_developer_stack/common_scripts/catkin_generated/python_distutils_install.sh" RESULT_VARIABLE res)

if(NOT res EQUAL 0)
  message(FATAL_ERROR "execute_process(/home/none/cassie_ws_2/src/build/amber_developer_stack/common_scripts/catkin_generated/python_distutils_install.sh) returned error code ")
endif()
