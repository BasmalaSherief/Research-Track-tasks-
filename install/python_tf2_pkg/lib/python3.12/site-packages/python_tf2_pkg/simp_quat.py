import rclpy
from rclpy.node import Node
from scipy.spatial.transform import Rotation as R

class SimpleQuaternion(Node):
    def __init__(self):
        super().__init__('simple_quaternion')
        self.get_logger().info('Simple Quaternion Node has been started.')

        # Example Euler angles (roll, pitch, yaw) in degrees
        roll = 30.0
        pitch = 45.0
        yaw = 60.0

        # Convert Euler angles to radians
        roll_rad = roll * (3.14159265 / 180.0)
        pitch_rad = pitch * (3.14159265 / 180.0)
        yaw_rad = yaw * (3.14159265 / 180.0)

        # Create a rotation object from Euler angles
        rotation = R.from_euler('xyz', [roll_rad, pitch_rad, yaw_rad])

        # Get the quaternion representation
        quaternion = rotation.as_quat()

        self.get_logger().info(f'Quaternion: {quaternion}')
        
def main(args=None):
    rclpy.init(args=args)
    simple_quaternion_node = SimpleQuaternion()
    rclpy.spin(simple_quaternion_node)
    simple_quaternion_node.destroy_node()
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()