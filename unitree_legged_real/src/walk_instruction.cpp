
// Created by sun on 2021/2/19.

#include <rclcpp/rclcpp.hpp>
#include <pthread.h>
#include <time.h>
#include <string>
#include <boost/thread.hpp>
#include <boost/thread/mutex.hpp>
#include "std_msgs/msg/string.hpp"
#include "unitree_legged_msgs/msg/walk.hpp"
#include "unitree_legged_sdk/unitree_legged_sdk.h"
#include "convert.h"

using namespace UNITREE_LEGGED_SDK;

void walk_callback(const unitree_legged_msgs::msg::Walk::SharedPtr msg){
    std::cout<< "received : " << msg->time << std::endl;
//    walk related instructions are highlevel cmds.
    UDP udp = UDP(HIGHLEVEL);
    HighCmd cmd = {0};
    udp.InitCmdData(cmd);
    int time = msg->time;
    cmd.forwardSpeed = msg->highcmd.forwardspeed;
    cmd.sideSpeed = msg->highcmd.sidespeed;
    cmd.rotateSpeed = msg->highcmd.rotatespeed;
    cmd.bodyHeight = msg->highcmd.bodyheight;
    cmd.mode = msg->highcmd.mode;
    cmd.roll = msg->highcmd.roll;
    cmd.pitch = msg->highcmd.pitch;
    cmd.yaw = msg->highcmd.yaw;

    udp.SetSend(cmd);
    udp.Send();

}

int main(int argc, char* argv[])
{
    InitEnvironment();
    rclcpp::init(argc, argv);
    auto node = rclcpp::Node::make_shared("walk_ros");
    auto walk_sub = node->create_subscription<unitree_legged_msgs::msg::Walk>("topic", 10, walk_callback);
    rclcpp::spin(node);


//    UNITREE_LEGGED_SDK::LeggedType rname = UNITREE_LEGGED_SDK::LeggedType::A1;
//
//    UNITREE_LEGGED_SDK::InitEnvironment();
//    UNITREE_LEGGED_SDK::LCM roslcm(UNITREE_LEGGED_SDK::HIGHLEVEL);
//    mainhelper<UNITREE_LEGGED_SDK::HighCmd, UNITREE_LEGGED_SDK::HighState, UNITREE_LEGGED_SDK::LCM>(argc, argv, roslcm);
    return 0;
}