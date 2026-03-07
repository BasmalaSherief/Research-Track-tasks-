import rclpy
from rclpy.action import ActionClient
from rclpy.node import Node 
from turtlesim.action import RotateAbsolute

class RotateAbsoluteClient(Node):
    def __init__(self):
        super().__init__('rotate_absolute_client')
        self._action_client = ActionClient(self, RotateAbsolute, '/turtle1/rotate_absolute')
        self._goal_handle = None
        self._cancel_sent = False
        
    def send_goal(self, angle):
        goal_msg = RotateAbsolute.Goal()
        goal_msg.theta = angle
        self._action_client.wait_for_server()
        
        self._goal_handle = None
        self._cancel_sent = False
        
        self.send_goal_future = self._action_client.send_goal_async(goal_msg,feedback_callback=self.feedback_callback)
        self.send_goal_future.add_done_callback(self.goal_response_callback)

    def goal_response_callback(self, future):
        goal_handle = future.result()
        if not goal_handle.accepted:
            self.get_logger().info('Goal rejected :(')
            return
        self.get_logger().info('Goal accepted :)')
        self._goal_handle = goal_handle
        self.get_result_future = goal_handle.get_result_async()
        self.get_result_future.add_done_callback(self.get_result_callback)
        
    def get_result_callback(self, future):
        result = future.result().result
        self.get_logger().info('Result = {}'.format(result))
        rclpy.shutdown()
        
    def feedback_callback(self, feedback_msg):
        feedback = feedback_msg.feedback
        remaining = feedback.remaining
        self.get_logger().info('Received feedback: remaining angle = {}'.format(remaining)) 
        
        if self._cancel_sent or self._goal_handle is None:
            return
        if remaining < 1.0 and remaining > -1.0:
            self._cancel_sent = True 
            self.get_logger().warn('Remaining angle is less than 1.0, sending cancel request')
            cancel_future = self._goal_handle.cancel_goal_async()
            cancel_future.add_done_callback(self.cancel_done_callback)
            
    def cancel_done_callback(self, future):
        cancel_response = future.result()
        if len(cancel_response.goals_canceling) > 0:
            self.get_logger().info('Goal successfully canceled')
        else:
            self.get_logger().warn('Goal failed to cancel')

def main(args=None):
    rclpy.init(args=args)
    action_client = RotateAbsoluteClient()
    action_client.send_goal(3.14)
    rclpy.spin(action_client)

if __name__ == '__main__':
    main()