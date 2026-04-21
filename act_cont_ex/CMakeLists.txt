cmake_minimum_required(VERSION 3.8)
project(act_cont_ex)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

find_package(ament_cmake REQUIRED)

if(BUILD_TESTING)

  # find dependencies
  find_package(ament_cmake REQUIRED)
  find_package(rclcpp REQUIRED)
  find_package(rclcpp_components REQUIRED)
  find_package(rclcpp_action REQUIRED)
  find_package(action_interfaces REQUIRED)
  find_package(geometry_msgs REQUIRED)
  find_package(nav_msgs REQUIRED)

  add_library(action_server SHARED src/action_server.cpp)
  add_library(action_client SHARED src/action_client.cpp)

  ament_target_dependencies(action_server rclcpp rclcpp_action action_interfaces geometry_msgs nav_msgs rclcpp_components)
  ament_target_dependencies(action_client rclcpp rclcpp_action action_interfaces geometry_msgs nav_msgs rclcpp_components)

  rclcpp_components_register_node(action_server PLUGIN "act_cont_ex::RobotControllerActionServer" EXECUTABLE action_server_exe)
  rclcpp_components_register_node(action_client PLUGIN "act_cont_ex::RobotControllerActionClient" EXECUTABLE action_client_exe)

  ament_export_targets(export_${PROJECT_NAME}_action_server)
  ament_export_targets(export_${PROJECT_NAME}_action_client)

  install(TARGETS
    action_server_exe
    action_client_exe
    DESTINATION lib/${PROJECT_NAME}
  )

  install(TARGETS action_server
    EXPORT export_${PROJECT_NAME}_action_server
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
  )

  install(TARGETS action_client
    EXPORT export_${PROJECT_NAME}_action_client
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
  )

  install (DIRECTORY launch
    DESTINATION share/${PROJECT_NAME}/
  ) 

  find_package(ament_lint_auto REQUIRED)

  set(ament_cmake_copyright_FOUND TRUE)

  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
