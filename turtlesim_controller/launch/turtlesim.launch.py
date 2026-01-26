from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    return LaunchDescription([

        Node(
            package='turtlesim_controller',
            executable='TurtlesimController',
            name='sim',
            namespace='turtlesim1',
            output='screen'
        ),

        Node(
            package='turtlesim_controller',
            executable='turtlesim_service',
            name='service',
            namespace='turtlesim1',
            arguments=['--ros-args', '--log-level', 'warn']
        ),

        Node(
            package='turtlesim_controller',
            executable='turtlesim_controller3',
            name='control',
            namespace='turtlesim1'
        ),
    ])
