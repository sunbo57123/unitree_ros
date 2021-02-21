// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unitree_legged_msgs:msg/Walk.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__WALK__STRUCT_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__WALK__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'highcmd'
#include "unitree_legged_msgs/msg/detail/high_cmd__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__unitree_legged_msgs__msg__Walk __attribute__((deprecated))
#else
# define DEPRECATED__unitree_legged_msgs__msg__Walk __declspec(deprecated)
#endif

namespace unitree_legged_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct Walk_
{
  using Type = Walk_<ContainerAllocator>;

  explicit Walk_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : highcmd(_init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0;
    }
  }

  explicit Walk_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : highcmd(_alloc, _init)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->time = 0;
    }
  }

  // field types and members
  using _highcmd_type =
    unitree_legged_msgs::msg::HighCmd_<ContainerAllocator>;
  _highcmd_type highcmd;
  using _time_type =
    int8_t;
  _time_type time;

  // setters for named parameter idiom
  Type & set__highcmd(
    const unitree_legged_msgs::msg::HighCmd_<ContainerAllocator> & _arg)
  {
    this->highcmd = _arg;
    return *this;
  }
  Type & set__time(
    const int8_t & _arg)
  {
    this->time = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unitree_legged_msgs::msg::Walk_<ContainerAllocator> *;
  using ConstRawPtr =
    const unitree_legged_msgs::msg::Walk_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unitree_legged_msgs::msg::Walk_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unitree_legged_msgs::msg::Walk_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unitree_legged_msgs::msg::Walk_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unitree_legged_msgs::msg::Walk_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unitree_legged_msgs::msg::Walk_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unitree_legged_msgs::msg::Walk_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unitree_legged_msgs::msg::Walk_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unitree_legged_msgs::msg::Walk_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unitree_legged_msgs__msg__Walk
    std::shared_ptr<unitree_legged_msgs::msg::Walk_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unitree_legged_msgs__msg__Walk
    std::shared_ptr<unitree_legged_msgs::msg::Walk_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const Walk_ & other) const
  {
    if (this->highcmd != other.highcmd) {
      return false;
    }
    if (this->time != other.time) {
      return false;
    }
    return true;
  }
  bool operator!=(const Walk_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct Walk_

// alias to use template instance with default allocator
using Walk =
  unitree_legged_msgs::msg::Walk_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unitree_legged_msgs

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__WALK__STRUCT_HPP_
