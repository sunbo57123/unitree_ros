// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from unitree_legged_msgs:msg/Walk.idl
// generated code does not contain a copyright notice
#include "unitree_legged_msgs/msg/detail/walk__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "unitree_legged_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "unitree_legged_msgs/msg/detail/walk__struct.h"
#include "unitree_legged_msgs/msg/detail/walk__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif

#include "unitree_legged_msgs/msg/detail/high_cmd__functions.h"  // highcmd

// forward declare type support functions
size_t get_serialized_size_unitree_legged_msgs__msg__HighCmd(
  const void * untyped_ros_message,
  size_t current_alignment);

size_t max_serialized_size_unitree_legged_msgs__msg__HighCmd(
  bool & full_bounded,
  size_t current_alignment);

const rosidl_message_type_support_t *
  ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_legged_msgs, msg, HighCmd)();


using _Walk__ros_msg_type = unitree_legged_msgs__msg__Walk;

static bool _Walk__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _Walk__ros_msg_type * ros_message = static_cast<const _Walk__ros_msg_type *>(untyped_ros_message);
  // Field name: highcmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unitree_legged_msgs, msg, HighCmd
      )()->data);
    if (!callbacks->cdr_serialize(
        &ros_message->highcmd, cdr))
    {
      return false;
    }
  }

  // Field name: time
  {
    cdr << ros_message->time;
  }

  return true;
}

static bool _Walk__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _Walk__ros_msg_type * ros_message = static_cast<_Walk__ros_msg_type *>(untyped_ros_message);
  // Field name: highcmd
  {
    const message_type_support_callbacks_t * callbacks =
      static_cast<const message_type_support_callbacks_t *>(
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(
        rosidl_typesupport_fastrtps_c, unitree_legged_msgs, msg, HighCmd
      )()->data);
    if (!callbacks->cdr_deserialize(
        cdr, &ros_message->highcmd))
    {
      return false;
    }
  }

  // Field name: time
  {
    cdr >> ros_message->time;
  }

  return true;
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_legged_msgs
size_t get_serialized_size_unitree_legged_msgs__msg__Walk(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _Walk__ros_msg_type * ros_message = static_cast<const _Walk__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name highcmd

  current_alignment += get_serialized_size_unitree_legged_msgs__msg__HighCmd(
    &(ros_message->highcmd), current_alignment);
  // field.name time
  {
    size_t item_size = sizeof(ros_message->time);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _Walk__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_unitree_legged_msgs__msg__Walk(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_unitree_legged_msgs
size_t max_serialized_size_unitree_legged_msgs__msg__Walk(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;

  // member: highcmd
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        max_serialized_size_unitree_legged_msgs__msg__HighCmd(
        full_bounded, current_alignment);
    }
  }
  // member: time
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static size_t _Walk__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_unitree_legged_msgs__msg__Walk(
    full_bounded, 0);
}


static message_type_support_callbacks_t __callbacks_Walk = {
  "unitree_legged_msgs::msg",
  "Walk",
  _Walk__cdr_serialize,
  _Walk__cdr_deserialize,
  _Walk__get_serialized_size,
  _Walk__max_serialized_size
};

static rosidl_message_type_support_t _Walk__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_Walk,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, unitree_legged_msgs, msg, Walk)() {
  return &_Walk__type_support;
}

#if defined(__cplusplus)
}
#endif
