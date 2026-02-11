from launch import LaunchDescription
from launch.actions import IncludeLaunchDescription, LogInfo
from launch.launch_description_sources import PythonLaunchDescriptionSource
from launch_ros.substitutions import FindPackageShare
from launch.substitutions import PathJoinSubstitution

def generate_launch_description():
    
    # Path to gazebo_differential_drive_robot launch
    gazebo_differential_drive_robot = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('gazebo_differential_drive_robot'),
                'launch',
                'robot.launch.py'
            ])
        ])
    )

    # Path to assignment1_rt launch
    assignment1_launch = IncludeLaunchDescription(
        PythonLaunchDescriptionSource([
            PathJoinSubstitution([
                FindPackageShare('assignment1_rt'),
                'launch',
                'assignment1.launch.py'
            ])
        ])
    )

    return LaunchDescription([
        LogInfo(msg="Starting Simulation and Assignment 1 Nodes..."),
        gazebo_differential_drive_robot,
        assignment1_launch
    ])
