// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from unitree_legged_msgs:msg/HighState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__BUILDER_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__BUILDER_HPP_

#include "unitree_legged_msgs/msg/detail/high_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace unitree_legged_msgs
{

namespace msg
{

namespace builder
{

class Init_HighState_jointp
{
public:
  explicit Init_HighState_jointp(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  ::unitree_legged_msgs::msg::HighState jointp(::unitree_legged_msgs::msg::HighState::_jointp_type arg)
  {
    msg_.jointp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_eeforce
{
public:
  explicit Init_HighState_eeforce(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_jointp eeforce(::unitree_legged_msgs::msg::HighState::_eeforce_type arg)
  {
    msg_.eeforce = std::move(arg);
    return Init_HighState_jointp(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_crc
{
public:
  explicit Init_HighState_crc(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_eeforce crc(::unitree_legged_msgs::msg::HighState::_crc_type arg)
  {
    msg_.crc = std::move(arg);
    return Init_HighState_eeforce(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_reserve
{
public:
  explicit Init_HighState_reserve(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_crc reserve(::unitree_legged_msgs::msg::HighState::_reserve_type arg)
  {
    msg_.reserve = std::move(arg);
    return Init_HighState_crc(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_wirelessremote
{
public:
  explicit Init_HighState_wirelessremote(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_reserve wirelessremote(::unitree_legged_msgs::msg::HighState::_wirelessremote_type arg)
  {
    msg_.wirelessremote = std::move(arg);
    return Init_HighState_reserve(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_tick
{
public:
  explicit Init_HighState_tick(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_wirelessremote tick(::unitree_legged_msgs::msg::HighState::_tick_type arg)
  {
    msg_.tick = std::move(arg);
    return Init_HighState_wirelessremote(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_footforceest
{
public:
  explicit Init_HighState_footforceest(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_tick footforceest(::unitree_legged_msgs::msg::HighState::_footforceest_type arg)
  {
    msg_.footforceest = std::move(arg);
    return Init_HighState_tick(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_footforce
{
public:
  explicit Init_HighState_footforce(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footforceest footforce(::unitree_legged_msgs::msg::HighState::_footforce_type arg)
  {
    msg_.footforce = std::move(arg);
    return Init_HighState_footforceest(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_footspeed2body
{
public:
  explicit Init_HighState_footspeed2body(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footforce footspeed2body(::unitree_legged_msgs::msg::HighState::_footspeed2body_type arg)
  {
    msg_.footspeed2body = std::move(arg);
    return Init_HighState_footforce(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_footposition2body
{
public:
  explicit Init_HighState_footposition2body(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footspeed2body footposition2body(::unitree_legged_msgs::msg::HighState::_footposition2body_type arg)
  {
    msg_.footposition2body = std::move(arg);
    return Init_HighState_footspeed2body(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_sideposition
{
public:
  explicit Init_HighState_sideposition(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_footposition2body sideposition(::unitree_legged_msgs::msg::HighState::_sideposition_type arg)
  {
    msg_.sideposition = std::move(arg);
    return Init_HighState_footposition2body(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_forwardposition
{
public:
  explicit Init_HighState_forwardposition(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_sideposition forwardposition(::unitree_legged_msgs::msg::HighState::_forwardposition_type arg)
  {
    msg_.forwardposition = std::move(arg);
    return Init_HighState_sideposition(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_updownspeed
{
public:
  explicit Init_HighState_updownspeed(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_forwardposition updownspeed(::unitree_legged_msgs::msg::HighState::_updownspeed_type arg)
  {
    msg_.updownspeed = std::move(arg);
    return Init_HighState_forwardposition(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_bodyheight
{
public:
  explicit Init_HighState_bodyheight(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_updownspeed bodyheight(::unitree_legged_msgs::msg::HighState::_bodyheight_type arg)
  {
    msg_.bodyheight = std::move(arg);
    return Init_HighState_updownspeed(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_rotatespeed
{
public:
  explicit Init_HighState_rotatespeed(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_bodyheight rotatespeed(::unitree_legged_msgs::msg::HighState::_rotatespeed_type arg)
  {
    msg_.rotatespeed = std::move(arg);
    return Init_HighState_bodyheight(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_sidespeed
{
public:
  explicit Init_HighState_sidespeed(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_rotatespeed sidespeed(::unitree_legged_msgs::msg::HighState::_sidespeed_type arg)
  {
    msg_.sidespeed = std::move(arg);
    return Init_HighState_rotatespeed(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_forwardspeed
{
public:
  explicit Init_HighState_forwardspeed(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_sidespeed forwardspeed(::unitree_legged_msgs::msg::HighState::_forwardspeed_type arg)
  {
    msg_.forwardspeed = std::move(arg);
    return Init_HighState_sidespeed(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_imu
{
public:
  explicit Init_HighState_imu(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_forwardspeed imu(::unitree_legged_msgs::msg::HighState::_imu_type arg)
  {
    msg_.imu = std::move(arg);
    return Init_HighState_forwardspeed(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_mode
{
public:
  explicit Init_HighState_mode(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_imu mode(::unitree_legged_msgs::msg::HighState::_mode_type arg)
  {
    msg_.mode = std::move(arg);
    return Init_HighState_imu(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_bandwidth
{
public:
  explicit Init_HighState_bandwidth(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_mode bandwidth(::unitree_legged_msgs::msg::HighState::_bandwidth_type arg)
  {
    msg_.bandwidth = std::move(arg);
    return Init_HighState_mode(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_sn
{
public:
  explicit Init_HighState_sn(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_bandwidth sn(::unitree_legged_msgs::msg::HighState::_sn_type arg)
  {
    msg_.sn = std::move(arg);
    return Init_HighState_bandwidth(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_robotid
{
public:
  explicit Init_HighState_robotid(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_sn robotid(::unitree_legged_msgs::msg::HighState::_robotid_type arg)
  {
    msg_.robotid = std::move(arg);
    return Init_HighState_sn(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_commversion
{
public:
  explicit Init_HighState_commversion(::unitree_legged_msgs::msg::HighState & msg)
  : msg_(msg)
  {}
  Init_HighState_robotid commversion(::unitree_legged_msgs::msg::HighState::_commversion_type arg)
  {
    msg_.commversion = std::move(arg);
    return Init_HighState_robotid(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

class Init_HighState_levelflag
{
public:
  Init_HighState_levelflag()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_HighState_commversion levelflag(::unitree_legged_msgs::msg::HighState::_levelflag_type arg)
  {
    msg_.levelflag = std::move(arg);
    return Init_HighState_commversion(msg_);
  }

private:
  ::unitree_legged_msgs::msg::HighState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::unitree_legged_msgs::msg::HighState>()
{
  return unitree_legged_msgs::msg::builder::Init_HighState_levelflag();
}

}  // namespace unitree_legged_msgs

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__BUILDER_HPP_
