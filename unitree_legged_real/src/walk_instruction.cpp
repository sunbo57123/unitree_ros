
// Created by sun on 2021/2/19.

#include <memory>
#include "rclcpp/rclcpp.hpp"
#include "unitree_legged_msgs/msg/walk.hpp"
#include "unitree_legged_msgs/msg/high_cmd.hpp"
#include "unitree_legged_msgs/msg/high_state.hpp"
#include "unitree_legged_sdk/unitree_legged_sdk.h"

class WalkNode : public rclcpp::Node
{
public:
    WalkNode():Node("walk_node"), udp(UNITREE_LEGGED_SDK::HIGHLEVEL),safe(UNITREE_LEGGED_SDK::LeggedType::A1), high_cmd({0}), high_state({0})
    {
        walk_sub = this->create_subscription<unitree_legged_msgs::msg::Walk>(
                "walk",
                10,
                std::bind(&WalkNode::walk_callback,
                          this,
                          std::placeholders::_1));
        udp.InitCmdData(high_cmd);
    }
    void UDPRecv(){
        udp.Recv();
    }
    void UDPSend(){
        udp.Send();
    }

    UNITREE_LEGGED_SDK::Safety safe;
    UNITREE_LEGGED_SDK::UDP udp;
    unitree_legged_msgs::msg::Walk walk_cmd;
    UNITREE_LEGGED_SDK::HighCmd high_cmd;
    UNITREE_LEGGED_SDK::HighState high_state;
    float dt = 0.002;

private:
    void walk_callback(const unitree_legged_msgs::msg::Walk::SharedPtr msg)
    {
        RCLCPP_INFO(this->get_logger(), "received : %d", msg->time);
        if (msg->time >0){
            if (msg->mode == 1){
                high_cmd.mode = 2;
                sleep(30);
            }
        }
        udp.SetSend(high_cmd);
    }
    rclcpp::Subscription<unitree_legged_msgs::msg::Walk>::SharedPtr walk_sub;
};

int main(int argc, char* argv[]){

    std::cout << "start" << std::endl;

    rclcpp::init(argc, argv);
    auto node = std::make_shared<WalkNode>();
    UNITREE_LEGGED_SDK::InitEnvironment();
    UNITREE_LEGGED_SDK::LoopFunc loop_udpRecv("UDP receive", node->dt, 3 , boost::bind(&WalkNode::UDPRecv,&node));
    loop_udpRecv.start();
    UNITREE_LEGGED_SDK::LoopFunc loop_udpSend("UDP send", node->dt, 3 , boost::bind(&WalkNode::UDPSend,&node));
    loop_udpSend.start();

    rclcpp::spin(node);
    rclcpp::shutdown();
    return 0;
}