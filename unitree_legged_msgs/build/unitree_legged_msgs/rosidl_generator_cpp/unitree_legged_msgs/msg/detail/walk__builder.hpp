// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_legged_msgs:msg/Walk.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__WALK__BUILDER_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__WALK__BUILDER_HPP_

#include "unitree_legged_msgs/msg/detail/walk__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_legged_msgs
{

namespace msg
{

namespace builder
{

class Init_Walk_time
{
public:
  explicit Init_Walk_time(::unitree_legged_msgs::msg::Walk & msg)
  : msg_(msg)
  {}
  ::unitree_legged_msgs::msg::Walk time(::unitree_legged_msgs::msg::Walk::_time_type arg)
  {
    msg_.time = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_legged_msgs::msg::Walk msg_;
};

class Init_Walk_highcmd
{
public:
  Init_Walk_highcmd()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Walk_time highcmd(::unitree_legged_msgs::msg::Walk::_highcmd_type arg)
  {
    msg_.highcmd = std::move(arg);
    return Init_Walk_time(msg_);
  }

private:
  ::unitree_legged_msgs::msg::Walk msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_legged_msgs::msg::Walk>()
{
  return unitree_legged_msgs::msg::builder::Init_Walk_highcmd();
}

}  // namespace unitree_legged_msgs

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__WALK__BUILDER_HPP_
