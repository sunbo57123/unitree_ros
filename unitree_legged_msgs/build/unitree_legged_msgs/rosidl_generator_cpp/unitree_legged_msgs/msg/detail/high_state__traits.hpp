// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_legged_msgs:msg/HighState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__TRAITS_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__TRAITS_HPP_

#include "unitree_legged_msgs/msg/detail/high_state__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'imu'
#include "unitree_legged_msgs/msg/detail/imu__traits.hpp"
// Member 'footposition2body'
// Member 'footspeed2body'
// Member 'eeforce'
#include "unitree_legged_msgs/msg/detail/cartesian__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_legged_msgs::msg::HighState>()
{
  return "unitree_legged_msgs::msg::HighState";
}

template<>
inline const char * name<unitree_legged_msgs::msg::HighState>()
{
  return "unitree_legged_msgs/msg/HighState";
}

template<>
struct has_fixed_size<unitree_legged_msgs::msg::HighState>
  : std::integral_constant<bool, has_fixed_size<unitree_legged_msgs::msg::Cartesian>::value && has_fixed_size<unitree_legged_msgs::msg::IMU>::value> {};

template<>
struct has_bounded_size<unitree_legged_msgs::msg::HighState>
  : std::integral_constant<bool, has_bounded_size<unitree_legged_msgs::msg::Cartesian>::value && has_bounded_size<unitree_legged_msgs::msg::IMU>::value> {};

template<>
struct is_message<unitree_legged_msgs::msg::HighState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__TRAITS_HPP_
