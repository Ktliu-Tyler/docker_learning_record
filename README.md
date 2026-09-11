# ROS 2 Learning Record

A personal collection of ROS 2 exercises stored under the original repository name `docker_learning_record`. The committed material focuses on learning robotics middleware through small C++ and Python programs: nodes, topics, services, actions, parameters, and custom interfaces.

## Purpose

The repository records the progression from a minimal ROS 2 node to programs that communicate, request work, track longer-running actions, and start together through launch files. It is a learning workspace collection rather than one finished robot application.

## Topics covered

| Area | Examples in the repository |
| --- | --- |
| Basic nodes | [chap2](chap2) |
| Service clients and servers | [chap3](chap3) |
| Publish/subscribe communication | [example_topic_rclcpp](example_topic_rclcpp), [example_topic_rclpy](example_topic_rclpy) |
| Actions and feedback | [example_action_rclcpp](example_action_rclcpp), [example_action_rclpy](example_action_rclpy) |
| Custom interfaces | [example_ros2_interfaces](example_ros2_interfaces), [robot_control_interfaces](robot_control_interfaces) |
| Parameters | [example_parameters_rclcpp](example_parameters_rclcpp) |
| Launch composition | [robot_startup](robot_startup) |

## Technical focus

The C++ examples use `rclcpp` and CMake/ament, while the Python examples use `rclpy` and Python package entry points. Package manifests describe message and interface dependencies. This provides side-by-side records of similar ROS 2 concepts in both languages.

## Personal record

The tree includes source packages alongside generated build, installation, and log artifacts from earlier workspaces. Those artifacts document the learning environment; they are not a portable prebuilt distribution. The repository name reflects its original organization, while the material available here is primarily ROS 2 code. No Docker image or complete container setup is included.
