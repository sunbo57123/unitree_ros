// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_legged_msgs:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_STATE__TRAITS_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_STATE__TRAITS_HPP_

#include "unitree_legged_msgs/msg/detail/low_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'imu'
#include "unitree_legged_msgs/msg/detail/imu__traits.hpp"
// Member 'motorstate'
#include "unitree_legged_msgs/msg/detail/motor_state__traits.hpp"
// Member 'eeforceraw'
// Member 'eeforce'
// Member 'position'
// Member 'velocity'
// Member 'velocity_w'
#include "unitree_legged_msgs/msg/detail/cartesian__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_legged_msgs::msg::LowState>()
{
  return "unitree_legged_msgs::msg::LowState";
}

template<>
inline const char * name<unitree_legged_msgs::msg::LowState>()
{
  return "unitree_legged_msgs/msg/LowState";
}

template<>
struct has_fixed_size<unitree_legged_msgs::msg::LowState>
  : std::integral_constant<bool, has_fixed_size<unitree_legged_msgs::msg::Cartesian>::value && has_fixed_size<unitree_legged_msgs::msg::IMU>::value && has_fixed_size<unitree_legged_msgs::msg::MotorState>::value> {};

template<>
struct has_bounded_size<unitree_legged_msgs::msg::LowState>
  : std::integral_constant<bool, has_bounded_size<unitree_legged_msgs::msg::Cartesian>::value && has_bounded_size<unitree_legged_msgs::msg::IMU>::value && has_bounded_size<unitree_legged_msgs::msg::MotorState>::value> {};

template<>
struct is_message<unitree_legged_msgs::msg::LowState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_STATE__TRAITS_HPP_
