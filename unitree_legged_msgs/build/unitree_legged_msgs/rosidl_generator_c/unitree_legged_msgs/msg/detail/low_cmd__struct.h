// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_legged_msgs:msg/LowCmd.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_CMD__STRUCT_H_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_CMD__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'motorcmd'
#include "unitree_legged_msgs/msg/detail/motor_cmd__struct.h"
// Member 'led'
#include "unitree_legged_msgs/msg/detail/led__struct.h"
// Member 'ff'
#include "unitree_legged_msgs/msg/detail/cartesian__struct.h"

// Struct defined in msg/LowCmd in the package unitree_legged_msgs.
typedef struct unitree_legged_msgs__msg__LowCmd
{
  int8_t levelflag;
  int16_t commversion;
  int16_t robotid;
  int32_t sn;
  int8_t bandwidth;
  unitree_legged_msgs__msg__MotorCmd motorcmd[20];
  unitree_legged_msgs__msg__LED led[4];
  int8_t wirelessremote[40];
  int32_t reserve;
  int32_t crc;
  unitree_legged_msgs__msg__Cartesian ff[4];
} unitree_legged_msgs__msg__LowCmd;

// Struct for a sequence of unitree_legged_msgs__msg__LowCmd.
typedef struct unitree_legged_msgs__msg__LowCmd__Sequence
{
  unitree_legged_msgs__msg__LowCmd * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_legged_msgs__msg__LowCmd__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_CMD__STRUCT_H_
