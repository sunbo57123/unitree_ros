// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_legged_msgs:msg/LowCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_CMD__BUILDER_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_CMD__BUILDER_HPP_

#include "unitree_legged_msgs/msg/detail/low_cmd__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_legged_msgs
{

namespace msg
{

namespace builder
{

class Init_LowCmd_ff
{
public:
  explicit Init_LowCmd_ff(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  ::unitree_legged_msgs::msg::LowCmd ff(::unitree_legged_msgs::msg::LowCmd::_ff_type arg)
  {
    msg_.ff = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_crc
{
public:
  explicit Init_LowCmd_crc(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_ff crc(::unitree_legged_msgs::msg::LowCmd::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return Init_LowCmd_ff(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_reserve
{
public:
  explicit Init_LowCmd_reserve(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_crc reserve(::unitree_legged_msgs::msg::LowCmd::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return Init_LowCmd_crc(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_wirelessremote
{
public:
  explicit Init_LowCmd_wirelessremote(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_reserve wirelessremote(::unitree_legged_msgs::msg::LowCmd::_wirelessremote_type arg)
  {
    msg_.wirelessremote = std::move(arg);
    return Init_LowCmd_reserve(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_led
{
public:
  explicit Init_LowCmd_led(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_wirelessremote led(::unitree_legged_msgs::msg::LowCmd::_led_type arg)
  {
    msg_.led = std::move(arg);
    return Init_LowCmd_wirelessremote(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_motorcmd
{
public:
  explicit Init_LowCmd_motorcmd(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_led motorcmd(::unitree_legged_msgs::msg::LowCmd::_motorcmd_type arg)
  {
    msg_.motorcmd = std::move(arg);
    return Init_LowCmd_led(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_bandwidth
{
public:
  explicit Init_LowCmd_bandwidth(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_motorcmd bandwidth(::unitree_legged_msgs::msg::LowCmd::_bandwidth_type arg)
  {
    msg_.bandwidth = std::move(arg);
    return Init_LowCmd_motorcmd(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_sn
{
public:
  explicit Init_LowCmd_sn(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_bandwidth sn(::unitree_legged_msgs::msg::LowCmd::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_LowCmd_bandwidth(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_robotid
{
public:
  explicit Init_LowCmd_robotid(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_sn robotid(::unitree_legged_msgs::msg::LowCmd::_robotid_type arg)
  {
    msg_.robotid = std::move(arg);
    return Init_LowCmd_sn(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_commversion
{
public:
  explicit Init_LowCmd_commversion(::unitree_legged_msgs::msg::LowCmd & msg)
  : msg_(msg)
  {}
  Init_LowCmd_robotid commversion(::unitree_legged_msgs::msg::LowCmd::_commversion_type arg)
  {
    msg_.commversion = std::move(arg);
    return Init_LowCmd_robotid(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

class Init_LowCmd_levelflag
{
public:
  Init_LowCmd_levelflag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_LowCmd_commversion levelflag(::unitree_legged_msgs::msg::LowCmd::_levelflag_type arg)
  {
    msg_.levelflag = std::move(arg);
    return Init_LowCmd_commversion(msg_);
  }

private:
  ::unitree_legged_msgs::msg::LowCmd msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_legged_msgs::msg::LowCmd>()
{
  return unitree_legged_msgs::msg::builder::Init_LowCmd_levelflag();
}

}  // namespace unitree_legged_msgs

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_CMD__BUILDER_HPP_
