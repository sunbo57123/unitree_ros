// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_legged_msgs:msg/HighCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_CMD__BUILDER_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_CMD__BUILDER_HPP_

#include "unitree_legged_msgs/msg/detail/high_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_legged_msgs
{

namespace msg
{

namespace builder
{

class Init_HighCmd_crc
{
public:
  explicit Init_HighCmd_crc(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  ::unitree_legged_msgs::msg::HighCmd crc(::unitree_legged_msgs::msg::HighCmd::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_reserve
{
public:
  explicit Init_HighCmd_reserve(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_crc reserve(::unitree_legged_msgs::msg::HighCmd::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return Init_HighCmd_crc(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_appremote
{
public:
  explicit Init_HighCmd_appremote(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_reserve appremote(::unitree_legged_msgs::msg::HighCmd::_appremote_type arg)
  {
    msg_.appremote = std::move(arg);
    return Init_HighCmd_reserve(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_wirelessremote
{
public:
  explicit Init_HighCmd_wirelessremote(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_appremote wirelessremote(::unitree_legged_msgs::msg::HighCmd::_wirelessremote_type arg)
  {
    msg_.wirelessremote = std::move(arg);
    return Init_HighCmd_appremote(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_led
{
public:
  explicit Init_HighCmd_led(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_wirelessremote led(::unitree_legged_msgs::msg::HighCmd::_led_type arg)
  {
    msg_.led = std::move(arg);
    return Init_HighCmd_wirelessremote(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_roll
{
public:
  explicit Init_HighCmd_roll(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_led roll(::unitree_legged_msgs::msg::HighCmd::_roll_type arg)
  {
    msg_.roll = std::move(arg);
    return Init_HighCmd_led(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_pitch
{
public:
  explicit Init_HighCmd_pitch(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_roll pitch(::unitree_legged_msgs::msg::HighCmd::_pitch_type arg)
  {
    msg_.pitch = std::move(arg);
    return Init_HighCmd_roll(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_yaw
{
public:
  explicit Init_HighCmd_yaw(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_pitch yaw(::unitree_legged_msgs::msg::HighCmd::_yaw_type arg)
  {
    msg_.yaw = std::move(arg);
    return Init_HighCmd_pitch(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_footraiseheight
{
public:
  explicit Init_HighCmd_footraiseheight(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_yaw footraiseheight(::unitree_legged_msgs::msg::HighCmd::_footraiseheight_type arg)
  {
    msg_.footraiseheight = std::move(arg);
    return Init_HighCmd_yaw(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_bodyheight
{
public:
  explicit Init_HighCmd_bodyheight(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_footraiseheight bodyheight(::unitree_legged_msgs::msg::HighCmd::_bodyheight_type arg)
  {
    msg_.bodyheight = std::move(arg);
    return Init_HighCmd_footraiseheight(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_rotatespeed
{
public:
  explicit Init_HighCmd_rotatespeed(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_bodyheight rotatespeed(::unitree_legged_msgs::msg::HighCmd::_rotatespeed_type arg)
  {
    msg_.rotatespeed = std::move(arg);
    return Init_HighCmd_bodyheight(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_sidespeed
{
public:
  explicit Init_HighCmd_sidespeed(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_rotatespeed sidespeed(::unitree_legged_msgs::msg::HighCmd::_sidespeed_type arg)
  {
    msg_.sidespeed = std::move(arg);
    return Init_HighCmd_rotatespeed(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_forwardspeed
{
public:
  explicit Init_HighCmd_forwardspeed(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_sidespeed forwardspeed(::unitree_legged_msgs::msg::HighCmd::_forwardspeed_type arg)
  {
    msg_.forwardspeed = std::move(arg);
    return Init_HighCmd_sidespeed(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_mode
{
public:
  explicit Init_HighCmd_mode(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_forwardspeed mode(::unitree_legged_msgs::msg::HighCmd::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_HighCmd_forwardspeed(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_bandwidth
{
public:
  explicit Init_HighCmd_bandwidth(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_mode bandwidth(::unitree_legged_msgs::msg::HighCmd::_bandwidth_type arg)
  {
    msg_.bandwidth = std::move(arg);
    return Init_HighCmd_mode(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_sn
{
public:
  explicit Init_HighCmd_sn(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_bandwidth sn(::unitree_legged_msgs::msg::HighCmd::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_HighCmd_bandwidth(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_robotid
{
public:
  explicit Init_HighCmd_robotid(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_sn robotid(::unitree_legged_msgs::msg::HighCmd::_robotid_type arg)
  {
    msg_.robotid = std::move(arg);
    return Init_HighCmd_sn(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_commversion
{
public:
  explicit Init_HighCmd_commversion(::unitree_legged_msgs::msg::HighCmd & msg)
  : msg_(msg)
  {}
  Init_HighCmd_robotid commversion(::unitree_legged_msgs::msg::HighCmd::_commversion_type arg)
  {
    msg_.commversion = std::move(arg);
    return Init_HighCmd_robotid(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

class Init_HighCmd_levelflag
{
public:
  Init_HighCmd_levelflag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HighCmd_commversion levelflag(::unitree_legged_msgs::msg::HighCmd::_levelflag_type arg)
  {
    msg_.levelflag = std::move(arg);
    return Init_HighCmd_commversion(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_legged_msgs::msg::HighCmd>()
{
  return unitree_legged_msgs::msg::builder::Init_HighCmd_levelflag();
}

}  // namespace unitree_legged_msgs

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_CMD__BUILDER_HPP_
