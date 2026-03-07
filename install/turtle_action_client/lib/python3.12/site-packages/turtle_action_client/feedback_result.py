import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node 
from turtlesim.action import RotateAbsolute

class RotateAbsoluteClient(Node):
    def __init__(self):
        super().__init__('rotate_absolute_client')
        self._action_client = ActionClient(self, RotateAbsolute, '/turtle1/rotate_absolute')
        
    def send_goal(self, angle):
        goal_msg = RotateAbsolute.Goal()
        goal_msg.theta = angle
        self._action_client.wait_for_server()
        self.send_goal_future = self._action_client.send_goal_async(goal_msg,feedback_callback=self.feedback_callback)
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return
        self.get_logger().info('Goal accepted :)')
        self.get_result_future = goal_handle.get_result_async()
        self.get_result_future.add_done_callback(self.get_result_callback)
        
    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result = {}'.format(result))
        rclpy.shutdown()
        
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        self.get_logger().info('Received feedback: remaining angle = {}'.format(feedback.remaining))  

def main(args=None):
    rclpy.init(args=args)
    action_client = RotateAbsoluteClient()
    action_client.send_goal(3.14)
    rclpy.spin(action_client)

if __name__ == '__main__':
    main()