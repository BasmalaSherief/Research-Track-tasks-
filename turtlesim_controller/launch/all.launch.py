from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, LogInfo
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

def generate_launch_description():
    
    # Path to bme_gazebo_sensors launch
    bme_gazebo_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('bme_gazebo_sensors'),
                'launch',
                'spawn_robot.launch.py'
            ])
        ])
    )

    # Path to assignment2_rt launch
    assignment2_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('turtlesim_controller'),
                'launch',
                'turtlesim.launch.py'
            ])
        ])
    )

    return LaunchDescription([
        LogInfo(msg="Starting Simulation and Assignment 2 Nodes..."),
        bme_gazebo_launch,
        assignment2_launch
    ])
