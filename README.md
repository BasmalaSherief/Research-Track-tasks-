# ROS2 Workspace Overview

This workspace contains a collection of ROS2 packages and exercises for robotics simulation and control, primarily focused on the **Research Track** coursework at university of Genova in addition to the **Yahboom Rosmaster** robot platform.

## Workspace Structure

### Root Packages
Located in the root of the workspace:
*   **`assignment1_rt`**: Custom package for Assignment 1 (Research Track), likely containing node implementations and launch configurations.
*   **`first_package_cpp`**: Introductory C++ package examples.
*   **`first_package_python`**: Introductory Python package examples.
*   **`turtlesim_controller`**: Nodes and logic for controlling the Turtlesim simulation.
*   **`turtlesim_custom_msgs`**: Custom message definitions used by the Turtlesim controller.

### Source Packages (`src/`)
Located in the `src` directory:
*   **`bme_gazebo_sensors`**: Plugins and configurations for simulating sensors in Gazebo.
*   **`yahboom_rosmaster` Collection**: comprehensive suite for the Yahboom Rosmaster robot:
    *   `mecanum_drive_controller`: Control logic for mecanum wheel drive.
    *   `yahboom_rosmaster_bringup`: Launch files and scripts to start the robot/simulation.
    *   `yahboom_rosmaster_description`: URDF models and meshes.
    *   `yahboom_rosmaster_gazebo`: Gazebo simulation environments and worlds.
    *   `yahboom_rosmaster_system_tests`: System-level testing modules.

## Getting Started
To build the workspace, run from the root:
```bash
colcon build
source install/setup.bash
```
