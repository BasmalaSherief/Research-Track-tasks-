cmake_minimum_required(VERSION 3.8)
project(turtlesim_controller)

if(CMAKE_COMPILER_IS_GNUCXX OR CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

# find dependencies
find_package(ament_cmake REQUIRED)
find_package(rclcpp REQUIRED)
find_package(turtlesim REQUIRED)
find_package(geometry_msgs REQUIRED)

# uncomment the following section in order to fill in
# further dependencies manually.
# find_package(<dependency> REQUIRED)

# Add the executable (your node)
add_executable(turtlesim_sub src/turtlesim_sub.cpp)
add_executable(turtlesim_pub src/turtlesim_pub.cpp)
add_executable(turtle_ex1 src/turtle_ex1.cpp)
add_executable(turtle_ex2 src/turtle_ex2.cpp)
install(TARGETS 
  turtlesim_sub
  turtlesim_pub
  turtle_ex1
  turtle_ex2
  DESTINATION lib/${PROJECT_NAME}
)
# Link the node with its dependencies
ament_target_dependencies(turtlesim_sub rclcpp turtlesim)
ament_target_dependencies(turtlesim_pub rclcpp turtlesim geometry_msgs)
ament_target_dependencies(turtle_ex1 rclcpp geometry_msgs turtlesim)
ament_target_dependencies(turtle_ex2 rclcpp geometry_msgs turtlesim)

if(BUILD_TESTING)
  find_package(ament_lint_auto REQUIRED)
  # the following line skips the linter which checks for copyrights
  # comment the line when a copyright and license is added to all source files
  set(ament_cmake_copyright_FOUND TRUE)
  # the following line skips cpplint (only works in a git repo)
  # comment the line when this package is in a git repo and when
  # a copyright and license is added to all source files
  set(ament_cmake_cpplint_FOUND TRUE)
  ament_lint_auto_find_test_dependencies()
endif()

ament_package()
