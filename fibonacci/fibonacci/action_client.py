import rclpy
from rclpy.action import ActionServer
from rclpy.node import Node
from action_interfaces.action import Fibonacci
from rclpy.action import ActionClient

class FibonacciActionClient(Node):
    def __init__(self):
        super().__init__('fibonacci_action_client')
        self._action_client = ActionClient(self, Fibonacci, 'fibonacci')
        
    def send_goal(self, order):
            goal_msg = Fibonacci.Goal()
            goal_msg.order = order
            self._action_client.wait_for_server()
            send_goal_future = self._action_client.send_goal_async(goal_msg)
            rclpy.spin_until_future_complete(self, send_goal_future)
            goal_handle = send_goal_future.result()
            
            if not goal_handle.accepted:
                self.get_logger().info('Goal rejected')
                return
            self.get_logger().info('Goal accepted')

            result_future = goal_handle.get_result_async()
            rclpy.spin_until_future_complete(self, result_future)
            result = result_future.result().result
            self.get_logger().info(f'Result sequence: {result.sequence}')
            
def main(args=None):
    rclpy.init(args=args)
    fibonacci_action_client = FibonacciActionClient()
    fibonacci_action_client.send_goal(10)
    rclpy.spin(fibonacci_action_client)
    rclpy.shutdown()
    
if __name__ == '__main__':
    main()