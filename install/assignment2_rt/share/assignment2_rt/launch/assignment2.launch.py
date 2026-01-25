from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='assignment2_rt',
            executable='Robot_Control',
            name='robot_control_node',
            output='screen'
        ),
        Node(
            package='assignment2_rt',
            executable='UI',
            name='ui_node',
            output='screen',
            prefix='xterm -e' # Launch UI in a new terminal window
        ),
    ])
