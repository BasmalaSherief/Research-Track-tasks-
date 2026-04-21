# Install script for directory: /home/basmala/ros2_ws/act_cont_ex

# Set the install prefix
if(NOT DEFINED CMAKE_INSTALL_PREFIX)
  set(CMAKE_INSTALL_PREFIX "/home/basmala/ros2_ws/install/act_cont_ex")
endif()
string(REGEX REPLACE "/$" "" CMAKE_INSTALL_PREFIX "${CMAKE_INSTALL_PREFIX}")

# Set the install configuration name.
if(NOT DEFINED CMAKE_INSTALL_CONFIG_NAME)
  if(BUILD_TYPE)
    string(REGEX REPLACE "^[^A-Za-z0-9_]+" ""
           CMAKE_INSTALL_CONFIG_NAME "${BUILD_TYPE}")
  else()
    set(CMAKE_INSTALL_CONFIG_NAME "")
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

# Set default install directory permissions.
if(NOT DEFINED CMAKE_OBJDUMP)
  set(CMAKE_OBJDUMP "/usr/bin/objdump")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex" TYPE EXECUTABLE FILES "/home/basmala/ros2_ws/build/act_cont_ex/action_server_exe")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe"
         OLD_RPATH "/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/basmala/ros2_ws/build/act_cont_ex/CMakeFiles/action_server_exe.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex" TYPE EXECUTABLE FILES "/home/basmala/ros2_ws/build/act_cont_ex/action_client_exe")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe"
         OLD_RPATH "/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/basmala/ros2_ws/build/act_cont_ex/CMakeFiles/action_client_exe.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex" TYPE EXECUTABLE FILES "/home/basmala/ros2_ws/build/act_cont_ex/action_server_exe")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe"
         OLD_RPATH "/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_server_exe")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/basmala/ros2_ws/build/act_cont_ex/CMakeFiles/action_server_exe.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex" TYPE EXECUTABLE FILES "/home/basmala/ros2_ws/build/act_cont_ex/action_client_exe")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe"
         OLD_RPATH "/opt/ros/jazzy/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/act_cont_ex/action_client_exe")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  include("/home/basmala/ros2_ws/build/act_cont_ex/CMakeFiles/action_client_exe.dir/install-cxx-module-bmi-noconfig.cmake" OPTIONAL)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_server.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_server.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_server.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/basmala/ros2_ws/build/act_cont_ex/libaction_server.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_server.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_server.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_server.so"
         OLD_RPATH "/opt/ros/jazzy/lib:/home/basmala/ros2_ws/install/action_interfaces/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_server.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_client.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_client.so")
    file(RPATH_CHECK
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_client.so"
         RPATH "")
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/lib" TYPE SHARED_LIBRARY FILES "/home/basmala/ros2_ws/build/act_cont_ex/libaction_client.so")
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_client.so" AND
     NOT IS_SYMLINK "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_client.so")
    file(RPATH_CHANGE
         FILE "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_client.so"
         OLD_RPATH "/opt/ros/jazzy/lib:/home/basmala/ros2_ws/install/action_interfaces/lib:"
         NEW_RPATH "")
    if(CMAKE_INSTALL_DO_STRIP)
      execute_process(COMMAND "/usr/bin/strip" "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/lib/libaction_client.so")
    endif()
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/" TYPE DIRECTORY FILES "/home/basmala/ros2_ws/act_cont_ex/launch")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/package_run_dependencies" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_index/share/ament_index/resource_index/package_run_dependencies/act_cont_ex")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/parent_prefix_path" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_index/share/ament_index/resource_index/parent_prefix_path/act_cont_ex")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/ament_prefix_path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/environment" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_environment_hooks/ament_prefix_path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/environment" TYPE FILE FILES "/opt/ros/jazzy/share/ament_cmake_core/cmake/environment_hooks/environment/path.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/environment" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_environment_hooks/path.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_environment_hooks/local_setup.bash")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_environment_hooks/local_setup.sh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_environment_hooks/local_setup.zsh")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_environment_hooks/local_setup.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_environment_hooks/package.dsv")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/packages" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_index/share/ament_index/resource_index/packages/act_cont_ex")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/ament_index/resource_index/rclcpp_components" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_index/share/ament_index/resource_index/rclcpp_components/act_cont_ex")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake/export_act_cont_ex_action_serverExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake/export_act_cont_ex_action_serverExport.cmake"
         "/home/basmala/ros2_ws/build/act_cont_ex/CMakeFiles/Export/7f1729f9beb3ebbf1e1377ce2cfe19fe/export_act_cont_ex_action_serverExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake/export_act_cont_ex_action_serverExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake/export_act_cont_ex_action_serverExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/CMakeFiles/Export/7f1729f9beb3ebbf1e1377ce2cfe19fe/export_act_cont_ex_action_serverExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/CMakeFiles/Export/7f1729f9beb3ebbf1e1377ce2cfe19fe/export_act_cont_ex_action_serverExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  if(EXISTS "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake/export_act_cont_ex_action_clientExport.cmake")
    file(DIFFERENT _cmake_export_file_changed FILES
         "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake/export_act_cont_ex_action_clientExport.cmake"
         "/home/basmala/ros2_ws/build/act_cont_ex/CMakeFiles/Export/7f1729f9beb3ebbf1e1377ce2cfe19fe/export_act_cont_ex_action_clientExport.cmake")
    if(_cmake_export_file_changed)
      file(GLOB _cmake_old_config_files "$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake/export_act_cont_ex_action_clientExport-*.cmake")
      if(_cmake_old_config_files)
        string(REPLACE ";" ", " _cmake_old_config_files_text "${_cmake_old_config_files}")
        message(STATUS "Old export file \"$ENV{DESTDIR}${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake/export_act_cont_ex_action_clientExport.cmake\" will be replaced.  Removing files [${_cmake_old_config_files_text}].")
        unset(_cmake_old_config_files_text)
        file(REMOVE ${_cmake_old_config_files})
      endif()
      unset(_cmake_old_config_files)
    endif()
    unset(_cmake_export_file_changed)
  endif()
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/CMakeFiles/Export/7f1729f9beb3ebbf1e1377ce2cfe19fe/export_act_cont_ex_action_clientExport.cmake")
  if(CMAKE_INSTALL_CONFIG_NAME MATCHES "^()$")
    file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/CMakeFiles/Export/7f1729f9beb3ebbf1e1377ce2cfe19fe/export_act_cont_ex_action_clientExport-noconfig.cmake")
  endif()
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake" TYPE FILE FILES "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_export_targets/ament_cmake_export_targets-extras.cmake")
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex/cmake" TYPE FILE FILES
    "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_core/act_cont_exConfig.cmake"
    "/home/basmala/ros2_ws/build/act_cont_ex/ament_cmake_core/act_cont_exConfig-version.cmake"
    )
endif()

if(CMAKE_INSTALL_COMPONENT STREQUAL "Unspecified" OR NOT CMAKE_INSTALL_COMPONENT)
  file(INSTALL DESTINATION "${CMAKE_INSTALL_PREFIX}/share/act_cont_ex" TYPE FILE FILES "/home/basmala/ros2_ws/act_cont_ex/package.xml")
endif()

if(CMAKE_INSTALL_COMPONENT)
  set(CMAKE_INSTALL_MANIFEST "install_manifest_${CMAKE_INSTALL_COMPONENT}.txt")
else()
  set(CMAKE_INSTALL_MANIFEST "install_manifest.txt")
endif()

string(REPLACE ";" "\n" CMAKE_INSTALL_MANIFEST_CONTENT
       "${CMAKE_INSTALL_MANIFEST_FILES}")
file(WRITE "/home/basmala/ros2_ws/build/act_cont_ex/${CMAKE_INSTALL_MANIFEST}"
     "${CMAKE_INSTALL_MANIFEST_CONTENT}")
