# Install script for directory: /home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/usr/local")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "Debug")
  endif()
  message(STATUS "Install configuration: \"${CMAKE_INSTALL_CONFIG_NAME}\"")
endif()

# Set the component getting installed.
if(NOT CMAKE_INSTALL_COMPONENT)
  if(COMPONENT)
    message(STATUS "Install component: \"${COMPONENT}\"")
    set(CMAKE_INSTALL_COMPONENT "${COMPONENT}")
  else()
    set(CMAKE_INSTALL_COMPONENT)
  endif()
endif()

# Install shared libraries without execute permission?
if(NOT DEFINED CMAKE_INSTALL_SO_NO_EXE)
  set(CMAKE_INSTALL_SO_NO_EXE "1")
endif()

# Is this installation the result of a crosscompile?
if(NOT DEFINED CMAKE_CROSSCOMPILING)
  set(CMAKE_CROSSCOMPILING "FALSE")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so.0.2.7"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so.0.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      file(RPATH_CHECK
           FILE "${file}"
           RPATH "")
    endif()
  endforeach()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES
    "/home/none/cassie_ws_2/src/build/devel/lib/libyaml-cpp-0.2.7.so.0.2.7"
    "/home/none/cassie_ws_2/src/build/devel/lib/libyaml-cpp-0.2.7.so.0.2"
    "/home/none/cassie_ws_2/src/build/devel/lib/libyaml-cpp-0.2.7.so"
    )
  foreach(file
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so.0.2.7"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so.0.2"
      "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libyaml-cpp-0.2.7.so"
      )
    if(EXISTS "${file}" AND
       NOT IS_SYMLINK "${file}")
      if(CMAKE_INSTALL_DO_STRIP)
        execute_process(COMMAND "/usr/bin/strip" "${file}")
      endif()
    endif()
  endforeach()
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/include/yaml-cpp-0.2.7" TYPE FILE FILES
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/aliasmanager.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/anchor.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/conversion.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/dll.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/emitfromevents.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/emitter.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/emittermanip.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/eventhandler.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/exceptions.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/iterator.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/ltnode.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/mark.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/node.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/nodeimpl.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/nodereadimpl.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/nodeutil.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/noncopyable.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/null.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/ostream.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/parser.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/stlemitter.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/stlnode.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/traits.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/yaml.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/contrib/anchordict.h"
    "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/include/yaml-cpp-0.2.7/contrib/graphbuilder.h"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/none/cassie_ws_2/src/build/yaml-cpp-0.2.7.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/pkgconfig" TYPE FILE FILES "/home/none/cassie_ws_2/src/build/amber_developer_stack/yaml_cpp_0_2_7/catkin_generated/installspace/yaml_cpp_0_2_7.pc")
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/yaml_cpp_0_2_7/cmake" TYPE FILE FILES
    "/home/none/cassie_ws_2/src/build/amber_developer_stack/yaml_cpp_0_2_7/catkin_generated/installspace/yaml_cpp_0_2_7Config.cmake"
    "/home/none/cassie_ws_2/src/build/amber_developer_stack/yaml_cpp_0_2_7/catkin_generated/installspace/yaml_cpp_0_2_7Config-version.cmake"
    )
endif()

if("x${CMAKE_INSTALL_COMPONENT}x" STREQUAL "xUnspecifiedx" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/yaml_cpp_0_2_7" TYPE FILE FILES "/home/none/cassie_ws_2/src/amber_developer_stack/yaml_cpp_0_2_7/package.xml")
endif()

if(NOT CMAKE_INSTALL_LOCAL_ONLY)
  # Include the install script for each subdirectory.
  include("/home/none/cassie_ws_2/src/build/amber_developer_stack/yaml_cpp_0_2_7/test/cmake_install.cmake")
  include("/home/none/cassie_ws_2/src/build/amber_developer_stack/yaml_cpp_0_2_7/util/cmake_install.cmake")

endif()

