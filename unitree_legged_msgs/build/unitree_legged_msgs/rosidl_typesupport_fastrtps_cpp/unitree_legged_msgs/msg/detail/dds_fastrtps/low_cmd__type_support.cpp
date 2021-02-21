// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from unitree_legged_msgs:msg/LowCmd.idl
// generated code does not contain a copyright notice
#include "unitree_legged_msgs/msg/detail/low_cmd__rosidl_typesupport_fastrtps_cpp.hpp"
#include "unitree_legged_msgs/msg/detail/low_cmd__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace unitree_legged_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unitree_legged_msgs::msg::MotorCmd &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unitree_legged_msgs::msg::MotorCmd &);
size_t get_serialized_size(
  const unitree_legged_msgs::msg::MotorCmd &,
  size_t current_alignment);
size_t
max_serialized_size_MotorCmd(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unitree_legged_msgs

namespace unitree_legged_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unitree_legged_msgs::msg::LED &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unitree_legged_msgs::msg::LED &);
size_t get_serialized_size(
  const unitree_legged_msgs::msg::LED &,
  size_t current_alignment);
size_t
max_serialized_size_LED(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unitree_legged_msgs

namespace unitree_legged_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const unitree_legged_msgs::msg::Cartesian &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  unitree_legged_msgs::msg::Cartesian &);
size_t get_serialized_size(
  const unitree_legged_msgs::msg::Cartesian &,
  size_t current_alignment);
size_t
max_serialized_size_Cartesian(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace unitree_legged_msgs


namespace unitree_legged_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unitree_legged_msgs
cdr_serialize(
  const unitree_legged_msgs::msg::LowCmd & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: levelflag
  cdr << ros_message.levelflag;
  // Member: commversion
  cdr << ros_message.commversion;
  // Member: robotid
  cdr << ros_message.robotid;
  // Member: sn
  cdr << ros_message.sn;
  // Member: bandwidth
  cdr << ros_message.bandwidth;
  // Member: motorcmd
  {
    for (size_t i = 0; i < 20; i++) {
      unitree_legged_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.motorcmd[i],
        cdr);
    }
  }
  // Member: led
  {
    for (size_t i = 0; i < 4; i++) {
      unitree_legged_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.led[i],
        cdr);
    }
  }
  // Member: wirelessremote
  {
    cdr << ros_message.wirelessremote;
  }
  // Member: reserve
  cdr << ros_message.reserve;
  // Member: crc
  cdr << ros_message.crc;
  // Member: ff
  {
    for (size_t i = 0; i < 4; i++) {
      unitree_legged_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
        ros_message.ff[i],
        cdr);
    }
  }
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unitree_legged_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  unitree_legged_msgs::msg::LowCmd & ros_message)
{
  // Member: levelflag
  cdr >> ros_message.levelflag;

  // Member: commversion
  cdr >> ros_message.commversion;

  // Member: robotid
  cdr >> ros_message.robotid;

  // Member: sn
  cdr >> ros_message.sn;

  // Member: bandwidth
  cdr >> ros_message.bandwidth;

  // Member: motorcmd
  {
    for (size_t i = 0; i < 20; i++) {
      unitree_legged_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.motorcmd[i]);
    }
  }

  // Member: led
  {
    for (size_t i = 0; i < 4; i++) {
      unitree_legged_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.led[i]);
    }
  }

  // Member: wirelessremote
  {
    cdr >> ros_message.wirelessremote;
  }

  // Member: reserve
  cdr >> ros_message.reserve;

  // Member: crc
  cdr >> ros_message.crc;

  // Member: ff
  {
    for (size_t i = 0; i < 4; i++) {
      unitree_legged_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
        cdr,
        ros_message.ff[i]);
    }
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unitree_legged_msgs
get_serialized_size(
  const unitree_legged_msgs::msg::LowCmd & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: levelflag
  {
    size_t item_size = sizeof(ros_message.levelflag);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: commversion
  {
    size_t item_size = sizeof(ros_message.commversion);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: robotid
  {
    size_t item_size = sizeof(ros_message.robotid);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: sn
  {
    size_t item_size = sizeof(ros_message.sn);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: bandwidth
  {
    size_t item_size = sizeof(ros_message.bandwidth);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: motorcmd
  {
    size_t array_size = 20;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unitree_legged_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.motorcmd[index], current_alignment);
    }
  }
  // Member: led
  {
    size_t array_size = 4;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unitree_legged_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.led[index], current_alignment);
    }
  }
  // Member: wirelessremote
  {
    size_t array_size = 40;
    size_t item_size = sizeof(ros_message.wirelessremote[0]);
    current_alignment += array_size * item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: reserve
  {
    size_t item_size = sizeof(ros_message.reserve);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: crc
  {
    size_t item_size = sizeof(ros_message.crc);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: ff
  {
    size_t array_size = 4;

    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unitree_legged_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
        ros_message.ff[index], current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_unitree_legged_msgs
max_serialized_size_LowCmd(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: levelflag
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: commversion
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: robotid
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint16_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint16_t));
  }

  // Member: sn
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: bandwidth
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: motorcmd
  {
    size_t array_size = 20;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unitree_legged_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_MotorCmd(
        full_bounded, current_alignment);
    }
  }

  // Member: led
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unitree_legged_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_LED(
        full_bounded, current_alignment);
    }
  }

  // Member: wirelessremote
  {
    size_t array_size = 40;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: reserve
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: crc
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: ff
  {
    size_t array_size = 4;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        unitree_legged_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Cartesian(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _LowCmd__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const unitree_legged_msgs::msg::LowCmd *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _LowCmd__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<unitree_legged_msgs::msg::LowCmd *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _LowCmd__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const unitree_legged_msgs::msg::LowCmd *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _LowCmd__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_LowCmd(full_bounded, 0);
}

static message_type_support_callbacks_t _LowCmd__callbacks = {
  "unitree_legged_msgs::msg",
  "LowCmd",
  _LowCmd__cdr_serialize,
  _LowCmd__cdr_deserialize,
  _LowCmd__get_serialized_size,
  _LowCmd__max_serialized_size
};

static rosidl_message_type_support_t _LowCmd__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_LowCmd__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace unitree_legged_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_unitree_legged_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<unitree_legged_msgs::msg::LowCmd>()
{
  return &unitree_legged_msgs::msg::typesupport_fastrtps_cpp::_LowCmd__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, unitree_legged_msgs, msg, LowCmd)() {
  return &unitree_legged_msgs::msg::typesupport_fastrtps_cpp::_LowCmd__handle;
}

#ifdef __cplusplus
}
#endif
