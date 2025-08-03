import rclpy
from rclpy.node import Node

class Node04(Node):
    def __init__(self):
        super().__init__("node_04")
        self.get_logger().info("大家好，我是node_04.")

def main(args=None):
    rclpy.init(args=args)
    node = Node04()
    rclpy.spin(node)
    rclpy.shutdown()
    