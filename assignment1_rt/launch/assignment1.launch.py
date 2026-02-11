from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='assignment1_rt',
            executable='DistanceControl',
            name='distance_control_node',
            output='screen'
        ),
        Node(
            package='assignment1_rt',
            executable='UI',
            name='ui_node',
            output='screen',
            prefix='xterm -e' # Launch UI in a new terminal window
        ),
    ])