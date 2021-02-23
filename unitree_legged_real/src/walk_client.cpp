//
// Created by sun on 2021/2/20.
//

#include <iostream>
#include <memory>
#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "unitree_legged_msgs/msg/walk.hpp"

using namespace std::chrono_literals;

class PubNode: public rclcpp::Node
{
public:
    PubNode():Node("pub_node"), count_(0){
        walk_pub = this->create_publisher<unitree_legged_msgs::msg::Walk>("walk", 10);
        timer_ = this->create_wall_timer(500ms, std::bind(&PubNode::pub_callback, this));
    }

private:
    void pub_callback(){
        unitree_legged_msgs::msg::Walk msg;
        msg.mode = 1;
        msg.forwardspeed = 0.0f;
        msg.rotatespeed = 0.0f;
        msg.sidespeed = 0.0f;
        msg.time = 6;
        RCLCPP_INFO(this->get_logger(), "sending");
        walk_pub->publish(msg);
    }
    rclcpp::TimerBase::SharedPtr timer_;
    rclcpp::Publisher<unitree_legged_msgs::msg::Walk>::SharedPtr walk_pub;
    size_t count_;
};

int main(int argc, char * argv[])
{
    rclcpp::init(argc, argv);
    auto node = std::make_shared<PubNode>();
    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;

}
