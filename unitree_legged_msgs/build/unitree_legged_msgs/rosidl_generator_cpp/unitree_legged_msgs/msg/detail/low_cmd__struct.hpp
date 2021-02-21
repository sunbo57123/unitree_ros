// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from unitree_legged_msgs:msg/LowCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_CMD__STRUCT_HPP_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_CMD__STRUCT_HPP_

#include <rosidl_runtime_cpp/bounded_vector.hpp>
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>


// Include directives for member types
// Member 'motorcmd'
#include "unitree_legged_msgs/msg/detail/motor_cmd__struct.hpp"
// Member 'led'
#include "unitree_legged_msgs/msg/detail/led__struct.hpp"
// Member 'ff'
#include "unitree_legged_msgs/msg/detail/cartesian__struct.hpp"

#ifndef _WIN32
# define DEPRECATED__unitree_legged_msgs__msg__LowCmd __attribute__((deprecated))
#else
# define DEPRECATED__unitree_legged_msgs__msg__LowCmd __declspec(deprecated)
#endif

namespace unitree_legged_msgs
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct LowCmd_
{
  using Type = LowCmd_<ContainerAllocator>;

  explicit LowCmd_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->levelflag = 0;
      this->commversion = 0;
      this->robotid = 0;
      this->sn = 0l;
      this->bandwidth = 0;
      this->motorcmd.fill(unitree_legged_msgs::msg::MotorCmd_<ContainerAllocator>{_init});
      this->led.fill(unitree_legged_msgs::msg::LED_<ContainerAllocator>{_init});
      std::fill<typename std::array<int8_t, 40>::iterator, int8_t>(this->wirelessremote.begin(), this->wirelessremote.end(), 0);
      this->reserve = 0l;
      this->crc = 0l;
      this->ff.fill(unitree_legged_msgs::msg::Cartesian_<ContainerAllocator>{_init});
    }
  }

  explicit LowCmd_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  : motorcmd(_alloc),
    led(_alloc),
    wirelessremote(_alloc),
    ff(_alloc)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->levelflag = 0;
      this->commversion = 0;
      this->robotid = 0;
      this->sn = 0l;
      this->bandwidth = 0;
      this->motorcmd.fill(unitree_legged_msgs::msg::MotorCmd_<ContainerAllocator>{_alloc, _init});
      this->led.fill(unitree_legged_msgs::msg::LED_<ContainerAllocator>{_alloc, _init});
      std::fill<typename std::array<int8_t, 40>::iterator, int8_t>(this->wirelessremote.begin(), this->wirelessremote.end(), 0);
      this->reserve = 0l;
      this->crc = 0l;
      this->ff.fill(unitree_legged_msgs::msg::Cartesian_<ContainerAllocator>{_alloc, _init});
    }
  }

  // field types and members
  using _levelflag_type =
    int8_t;
  _levelflag_type levelflag;
  using _commversion_type =
    int16_t;
  _commversion_type commversion;
  using _robotid_type =
    int16_t;
  _robotid_type robotid;
  using _sn_type =
    int32_t;
  _sn_type sn;
  using _bandwidth_type =
    int8_t;
  _bandwidth_type bandwidth;
  using _motorcmd_type =
    std::array<unitree_legged_msgs::msg::MotorCmd_<ContainerAllocator>, 20>;
  _motorcmd_type motorcmd;
  using _led_type =
    std::array<unitree_legged_msgs::msg::LED_<ContainerAllocator>, 4>;
  _led_type led;
  using _wirelessremote_type =
    std::array<int8_t, 40>;
  _wirelessremote_type wirelessremote;
  using _reserve_type =
    int32_t;
  _reserve_type reserve;
  using _crc_type =
    int32_t;
  _crc_type crc;
  using _ff_type =
    std::array<unitree_legged_msgs::msg::Cartesian_<ContainerAllocator>, 4>;
  _ff_type ff;

  // setters for named parameter idiom
  Type & set__levelflag(
    const int8_t & _arg)
  {
    this->levelflag = _arg;
    return *this;
  }
  Type & set__commversion(
    const int16_t & _arg)
  {
    this->commversion = _arg;
    return *this;
  }
  Type & set__robotid(
    const int16_t & _arg)
  {
    this->robotid = _arg;
    return *this;
  }
  Type & set__sn(
    const int32_t & _arg)
  {
    this->sn = _arg;
    return *this;
  }
  Type & set__bandwidth(
    const int8_t & _arg)
  {
    this->bandwidth = _arg;
    return *this;
  }
  Type & set__motorcmd(
    const std::array<unitree_legged_msgs::msg::MotorCmd_<ContainerAllocator>, 20> & _arg)
  {
    this->motorcmd = _arg;
    return *this;
  }
  Type & set__led(
    const std::array<unitree_legged_msgs::msg::LED_<ContainerAllocator>, 4> & _arg)
  {
    this->led = _arg;
    return *this;
  }
  Type & set__wirelessremote(
    const std::array<int8_t, 40> & _arg)
  {
    this->wirelessremote = _arg;
    return *this;
  }
  Type & set__reserve(
    const int32_t & _arg)
  {
    this->reserve = _arg;
    return *this;
  }
  Type & set__crc(
    const int32_t & _arg)
  {
    this->crc = _arg;
    return *this;
  }
  Type & set__ff(
    const std::array<unitree_legged_msgs::msg::Cartesian_<ContainerAllocator>, 4> & _arg)
  {
    this->ff = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    unitree_legged_msgs::msg::LowCmd_<ContainerAllocator> *;
  using ConstRawPtr =
    const unitree_legged_msgs::msg::LowCmd_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<unitree_legged_msgs::msg::LowCmd_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<unitree_legged_msgs::msg::LowCmd_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      unitree_legged_msgs::msg::LowCmd_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<unitree_legged_msgs::msg::LowCmd_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      unitree_legged_msgs::msg::LowCmd_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<unitree_legged_msgs::msg::LowCmd_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<unitree_legged_msgs::msg::LowCmd_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<unitree_legged_msgs::msg::LowCmd_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__unitree_legged_msgs__msg__LowCmd
    std::shared_ptr<unitree_legged_msgs::msg::LowCmd_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__unitree_legged_msgs__msg__LowCmd
    std::shared_ptr<unitree_legged_msgs::msg::LowCmd_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const LowCmd_ & other) const
  {
    if (this->levelflag != other.levelflag) {
      return false;
    }
    if (this->commversion != other.commversion) {
      return false;
    }
    if (this->robotid != other.robotid) {
      return false;
    }
    if (this->sn != other.sn) {
      return false;
    }
    if (this->bandwidth != other.bandwidth) {
      return false;
    }
    if (this->motorcmd != other.motorcmd) {
      return false;
    }
    if (this->led != other.led) {
      return false;
    }
    if (this->wirelessremote != other.wirelessremote) {
      return false;
    }
    if (this->reserve != other.reserve) {
      return false;
    }
    if (this->crc != other.crc) {
      return false;
    }
    if (this->ff != other.ff) {
      return false;
    }
    return true;
  }
  bool operator!=(const LowCmd_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct LowCmd_

// alias to use template instance with default allocator
using LowCmd =
  unitree_legged_msgs::msg::LowCmd_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace unitree_legged_msgs

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_CMD__STRUCT_HPP_
