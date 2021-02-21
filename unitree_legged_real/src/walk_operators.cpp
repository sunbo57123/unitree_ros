// currently, the robot should under walking mode.
// receive msg: walk_2s
// convert msgs to lcm?  OR convert it to udp through convert.h

#include <rclcpp/rclcpp.hpp>
#include <pthread.h>
#include <time.h>
#include <string>
#include <boost/thread.hpp>
#include <boost/thread/mutex.hpp>
#include "unitree_legged_sdk/unitree_legged_sdk.h"
#include "convert.h"

using namespace UNITREE_LEGGED_SDK;


// receive highstate from robot
template<typename TCmd, typename TState, typename TLCM>
int recvLCM(int argc, char *argv[], TLCM &roslcm)
{
    // TState RecvHighLCM = {0};
    // unitree_legged_msgs::HighState RecvHighState;

    // pthread_t tid; 
    // pthread_create(&tid, NULL, update_loop<TLCM>, &roslcm)

    HighState state = {0};
    HighCmd cmd = {0};
    Safety safe = new safe(LeggedType::A1);
    UDP udp = udp(0x00);
    udp.InitCmdData(cmd);

}

void walkControl(long motiontime, &state){
    motiontime += 2;
    udp.GetRecv(state);

}


// send highcmd to robot 
void walkCallback(const unitree_legged_msgs::walk_2s& walk_msg)
   {
     ROS_INFO("I heard: [%d]", walk_msg.time);
     unitree_legged_msgs::HighCmd walk;
     int time;
     walk = walk_msg.highcmd;
     time = walk_msg.time;
     UNITREE_LEGGED_SDK::HighCmd walk_sdk;
     walk_sdk = ToLcm(walk, walk_sdk);
     ROS_INFO("speed: [%f]", walk.forwardSpeed);
   }

// subscribe msg from controller
void walkSubscriber()
{
    std::cout << "subscribing ... " << std::endl;
    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("walk", 1000, walkCallback);
    ros::spin();
}

// pub msg to controller

int main(int argc, char *argv[]){
    rclcpp::init(argc, argv, "walk_ros");

    UNITREE_LEGGED_SDK::LeggedType rname = UNITREE_LEGGED_SDK::LeggedType::A1;

    UNITREE_LEGGED_SDK::InitEnvironment();
    UNITREE_LEGGED_SDK::LCM roslcm(UNITREE_LEGGED_SDK::HIGHLEVEL);
    mainhelper<UNITREE_LEGGED_SDK::HighCmd, UNITREE_LEGGED_SDK::HighState, UNITREE_LEGGED_SDK::LCM>(argc, argv, roslcm);

}
