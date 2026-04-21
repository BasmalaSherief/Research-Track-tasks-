cmake_minimum_required(VERSION 3.8)
project(first_package_cpp)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)
find_package(ament_cmake REQUIRED)

if(BUILD_TESTING)

  find_package(rclcpp REQUIRED)
  find_package(std_msgs REQUIRED)
  find_package(rclcpp_components REQUIRED)

  # Add the executable (your node)
  add_executable(pub src/pub.cpp)
  add_executable(sub src/sub.cpp)
  add_executable(manual_composition src/manual_composition.cpp)
  add_library(pub_component SHARED src/pub_component.cpp)
  add_library(sub_component SHARED src/sub_component.cpp)

  # Link the node with its dependencies
  ament_target_dependencies(pub rclcpp std_msgs)
  ament_target_dependencies(sub rclcpp std_msgs)
  ament_target_dependencies(pub_component rclcpp std_msgs rclcpp_components)
  ament_target_dependencies(sub_component rclcpp std_msgs rclcpp_components)
  ament_target_dependencies(manual_composition rclcpp std_msgs)

  rclcpp_components_register_node(pub_component PLUGIN "first_package_cpp::MinimalPublisher" EXECUTABLE pub_exe)
  rclcpp_components_register_node(sub_component PLUGIN "first_package_cpp::MinimalSubscriber" EXECUTABLE sub_exe)

  ament_export_targets(export_${PROJECT_NAME}_pub_component)
  ament_export_targets(export_${PROJECT_NAME}_sub_component)

  install(TARGETS
    pub
    sub
    pub_exe
    sub_exe
    manual_composition
    DESTINATION lib/${PROJECT_NAME}
  )

  install(TARGETS pub_component
    EXPORT export_${PROJECT_NAME}_pub_component
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
  )

  install(TARGETS sub_component
    EXPORT export_${PROJECT_NAME}_sub_component
    ARCHIVE DESTINATION lib
    LIBRARY DESTINATION lib
    RUNTIME DESTINATION bin
  )

  install(TARGETS
  manual_composition
  DESTINATION lib/${PROJECT_NAME}
 )

 
 install(
   DIRECTORY launch
   DESTINATION share/${PROJECT_NAME}
   )
   # the following line skips the linter which checks for copyrights
   # comment the line when a copyright and license is added to all source files
  find_package(ament_lint_auto REQUIRED)
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
