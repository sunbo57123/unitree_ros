//
// Created by sun on 2021/2/20.
//

#include <iostream>
#include <memory>
#include <chrono>
#include "rclcpp/rclcpp.hpp"
#include "unitree_legged_msgs/msg/walk.hpp"

int main(int argc, char* argv[]){
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("walk_pub");
    auto walk_publisher = node->create_publisher<unitree_legged_msgs::msg::Walk>("topic", 10);
    rclcpp::WallRate loop_rate(2);
    auto msg = std::make_shared<unitree_legged_msgs::msg::Walk>();
    auto highcmd = std::make_shared<unitree_legged_msgs::msg::HighCmd>();
    while (rclcpp::ok()){
        msg->time = 2;
        highcmd->forwardspeed = 1.00f;
        highcmd->sidespeed = 0.0f;
        highcmd->rotatespeed = 0.0f;
        highcmd->bodyheight = 0.0f;

        highcmd->mode = 0;
        highcmd->roll = 0;
        highcmd->pitch = 0;
        highcmd->yaw = 0;

        msg->highcmd =*highcmd;

        walk_publisher->publish(*msg);
        RCLCPP_INFO(node->get_logger(), "send time %d", msg->time);
        rclcpp::spin_some(node);
        loop_rate.sleep();
    }
    return 0;

}
