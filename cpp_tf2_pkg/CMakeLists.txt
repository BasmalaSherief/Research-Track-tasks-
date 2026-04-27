cmake_minimum_required(VERSION 3.8)
project(cpp_tf2_pkg)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(tf2 REQUIRED)
find_package(tf2_ros REQUIRED)
find_package(tf2_geometry_msgs REQUIRED)
find_package(geometry_msgs REQUIRED)
find_package(turtlesim REQUIRED)

add_executable(simple_quat src/simple_quat.cpp)
add_executable(static_broad src/static_broad.cpp)
add_executable(broadcaster src/broadcaster.cpp)
add_executable(listener src/listener.cpp)
add_executable(carrot src/carrot.cpp)

ament_target_dependencies(simple_quat rclcpp tf2 tf2_ros tf2_geometry_msgs geometry_msgs turtlesim)
ament_target_dependencies(static_broad rclcpp tf2 tf2_ros tf2_geometry_msgs geometry_msgs turtlesim)
ament_target_dependencies(broadcaster rclcpp tf2 tf2_ros tf2_geometry_msgs geometry_msgs turtlesim)
ament_target_dependencies(listener rclcpp tf2 tf2_ros tf2_geometry_msgs geometry_msgs turtlesim)
ament_target_dependencies(carrot rclcpp tf2 tf2_ros tf2_geometry_msgs geometry_msgs turtlesim)

install(TARGETS
  simple_quat
  static_broad
  broadcaster
  listener
  carrot
  DESTINATION lib/${PROJECT_NAME})

install (DIRECTORY launch
  DESTINATION share/${PROJECT_NAME}/
)
  

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)

  set(ament_cmake_copyright_FOUND TRUE)

  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
