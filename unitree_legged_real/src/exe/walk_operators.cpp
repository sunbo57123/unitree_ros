// currently, the robot should under walking mode.
// receive msg: walk_2s
// convert msgs to lcm?  OR convert it to udp through convert.h

#include <ros/ros.h>
#include <pthread.h>
#include <time.h>
#include <string>
#include <boost/thread.hpp>
#include <boost/thread/mutex.hpp>
#include <unitree_legged_msgs/HighCmd.h>
#include <unitree_legged_msgs/HighState.h>
#include <unitree_legged_msgs/walk_2s.h>
#include "unitree_legged_sdk/unitree_legged_sdk.h"
#include "convert.h"

template<typename TLCM>
void* update_loop(void* param)
{
    TLCM *data = (TLCM *)param;
    while(ros::ok){
        data->Recv();
        usleep(2000);
    }
}

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

template<typename TCmd, typename TState, typename TLCM>
int mainhelper(int argc, char *argv[], TLCM &roslcm){
    std::cout << "WARNING: Control level is set to HIGH-level." << std::endl
              << "Make sure the robot is standing on the ground." << std::endl
              << "Press Enter to continue..." << std::endl;
    std::cin.ignore();

    ros::NodeHandle n;
    ros::Subscriber sub = n.subscribe("walk", 1000, walkCallback);
    ros::spin();
}


int main(int argc, char *argv[]){
    ros::init(argc, argv, "walk_ros");

    UNITREE_LEGGED_SDK::LeggedType rname = UNITREE_LEGGED_SDK::LeggedType::A1;

    UNITREE_LEGGED_SDK::InitEnvironment();
    UNITREE_LEGGED_SDK::LCM roslcm(UNITREE_LEGGED_SDK::HIGHLEVEL);
    mainhelper<UNITREE_LEGGED_SDK::HighCmd, UNITREE_LEGGED_SDK::HighState, UNITREE_LEGGED_SDK::LCM>(argc, argv, roslcm);

    
}
