// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_legged_msgs:msg/Walk.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__WALK__STRUCT_H_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__WALK__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'highcmd'
#include "unitree_legged_msgs/msg/detail/high_cmd__struct.h"

// Struct defined in msg/Walk in the package unitree_legged_msgs.
typedef struct unitree_legged_msgs__msg__Walk
{
  unitree_legged_msgs__msg__HighCmd highcmd;
  int8_t time;
} unitree_legged_msgs__msg__Walk;

// Struct for a sequence of unitree_legged_msgs__msg__Walk.
typedef struct unitree_legged_msgs__msg__Walk__Sequence
{
  unitree_legged_msgs__msg__Walk * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_legged_msgs__msg__Walk__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__WALK__STRUCT_H_
