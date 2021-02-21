// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from unitree_legged_msgs:msg/HighCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_CMD__TRAITS_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_CMD__TRAITS_HPP_

#include "unitree_legged_msgs/msg/detail/high_cmd__struct.hpp"
#include <rosidl_runtime_cpp/traits.hpp>
#include <stdint.h>
#include <type_traits>

// Include directives for member types
// Member 'led'
#include "unitree_legged_msgs/msg/detail/led__traits.hpp"

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<unitree_legged_msgs::msg::HighCmd>()
{
  return "unitree_legged_msgs::msg::HighCmd";
}

template<>
inline const char * name<unitree_legged_msgs::msg::HighCmd>()
{
  return "unitree_legged_msgs/msg/HighCmd";
}

template<>
struct has_fixed_size<unitree_legged_msgs::msg::HighCmd>
  : std::integral_constant<bool, has_fixed_size<unitree_legged_msgs::msg::LED>::value> {};

template<>
struct has_bounded_size<unitree_legged_msgs::msg::HighCmd>
  : std::integral_constant<bool, has_bounded_size<unitree_legged_msgs::msg::LED>::value> {};

template<>
struct is_message<unitree_legged_msgs::msg::HighCmd>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_CMD__TRAITS_HPP_
