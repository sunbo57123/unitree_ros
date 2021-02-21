// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_legged_msgs:msg/LowState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_STATE__STRUCT_H_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'imu'
#include "unitree_legged_msgs/msg/detail/imu__struct.h"
// Member 'motorstate'
#include "unitree_legged_msgs/msg/detail/motor_state__struct.h"
// Member 'eeforceraw'
// Member 'eeforce'
// Member 'position'
// Member 'velocity'
// Member 'velocity_w'
#include "unitree_legged_msgs/msg/detail/cartesian__struct.h"

// Struct defined in msg/LowState in the package unitree_legged_msgs.
typedef struct unitree_legged_msgs__msg__LowState
{
  int8_t levelflag;
  int16_t commversion;
  int16_t robotid;
  int32_t sn;
  int8_t bandwidth;
  unitree_legged_msgs__msg__IMU imu;
  unitree_legged_msgs__msg__MotorState motorstate[20];
  int16_t footforce[4];
  int16_t footforceest[4];
  int32_t tick;
  int8_t wirelessremote[40];
  int32_t reserve;
  int32_t crc;
  unitree_legged_msgs__msg__Cartesian eeforceraw[4];
  unitree_legged_msgs__msg__Cartesian eeforce[4];
  unitree_legged_msgs__msg__Cartesian position;
  unitree_legged_msgs__msg__Cartesian velocity;
  unitree_legged_msgs__msg__Cartesian velocity_w;
} unitree_legged_msgs__msg__LowState;

// Struct for a sequence of unitree_legged_msgs__msg__LowState.
typedef struct unitree_legged_msgs__msg__LowState__Sequence
{
  unitree_legged_msgs__msg__LowState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_legged_msgs__msg__LowState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__LOW_STATE__STRUCT_H_
