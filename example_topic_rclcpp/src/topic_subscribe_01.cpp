#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/string.hpp"

class Topicsubscribe01 : public rclcpp::Node
{
    public:
    Topicsubscribe01(std::string name) : Node(name) {
        RCLCPP_INFO(this->get_logger(), "%s節點已啟動.", name.c_str());
        command_subscriber_ = this->create_subscription<std_msgs::msg::String>("command", 10, std::bind(&Topicsubscribe01::command_callback, this, std::placeholders::_1));
    }
    private:
    rclcpp::Subscription<std_msgs::msg::String>::SharedPtr command_subscriber_;
    void command_callback(const std_msgs::msg::String::SharedPtr msg) {
        double speed = 0.0f;
        if(msg->data == "forward")
        {
            speed = 0.2f;
        }
        RCLCPP_INFO(this->get_logger(), "收到[%s]指令，發送速度 %f", msg->data.c_str(), speed);    
    }

};

int main(int argc,char **argv) {
    rclcpp::init(argc, argv);
    auto node = std::make_shared<Topicsubscribe01>("topic_subscribe_01");
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}

