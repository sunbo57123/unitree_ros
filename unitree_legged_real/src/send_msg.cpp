#include "rclcpp/rclcpp.hpp"
#include <unitree_legged_msgs/walk.h>
#include <unitree_legged_msgs/HighCmd.h>

int main(int argc, char **argv)
{
  rclcpp::init(argc, argv, "controller");
  auto node = rclcpp::node::Node::make_shared("walk");
//  qos
  rmw_qos_profile_t qos = rmw_qos_profile_default;
  qos.depth = 7;

  auto pub = node->create_publisher<uni>("chatter", qos);


    ros::Rate loop_rate(10);

 int count = 0;

while (ros::ok())
{

  unitree_legged_msgs::walk_2s walk;
  unitree_legged_msgs::HighCmd walk_highcmd;
  walk.time = 2;
  walk_highcmd.forwardSpeed = 1.00f;
  walk_highcmd.sideSpeed = 0.0f;
  walk_highcmd.rotateSpeed = 0.0f;
  walk_highcmd.bodyHeight = 0.0f;

  walk_highcmd.mode = 0;
  walk_highcmd.roll  = 0;
  walk_highcmd.pitch = 0;
  walk_highcmd.yaw = 0;
  walk.highcmd = walk_highcmd;

  ROS_INFO("build msg");
  ROS_INFO("%f\n", walk_highcmd.forwardSpeed);
  ROS_INFO("??");

  walk_pub.publish(walk);
  ROS_INFO("publish");

  ros::spinOnce();
 
  loop_rate.sleep();
  ++count;
}
}
