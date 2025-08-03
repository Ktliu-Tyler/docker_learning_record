from launch import LaunchDescription
from launch_ros.actions import Node


def generate_launch_description():
    action_robot_01 = Node(
        package = "example_action_rclcpp",
        executable = "action_robot_01"
        )
    action_control_01 = Node(
        package="example_action_rclcpp",
        executable="action_control_01"
        )
    launch_description = LaunchDescription(
        [action_robot_01, action_control_01]
    )
    return launch_description
