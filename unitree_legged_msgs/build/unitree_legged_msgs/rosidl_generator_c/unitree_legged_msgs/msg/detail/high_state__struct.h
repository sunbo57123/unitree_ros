// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from unitree_legged_msgs:msg/HighState.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__STRUCT_H_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__STRUCT_H_

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
// Member 'footposition2body'
// Member 'footspeed2body'
// Member 'eeforce'
#include "unitree_legged_msgs/msg/detail/cartesian__struct.h"

// Struct defined in msg/HighState in the package unitree_legged_msgs.
typedef struct unitree_legged_msgs__msg__HighState
{
  int8_t levelflag;
  int16_t commversion;
  int16_t robotid;
  int32_t sn;
  int8_t bandwidth;
  int8_t mode;
  unitree_legged_msgs__msg__IMU imu;
  float forwardspeed;
  float sidespeed;
  float rotatespeed;
  float bodyheight;
  float updownspeed;
  float forwardposition;
  float sideposition;
  unitree_legged_msgs__msg__Cartesian footposition2body[4];
  unitree_legged_msgs__msg__Cartesian footspeed2body[4];
  int16_t footforce[4];
  int16_t footforceest[4];
  int32_t tick;
  int8_t wirelessremote[40];
  int32_t reserve;
  int32_t crc;
  unitree_legged_msgs__msg__Cartesian eeforce[4];
  float jointp[12];
} unitree_legged_msgs__msg__HighState;

// Struct for a sequence of unitree_legged_msgs__msg__HighState.
typedef struct unitree_legged_msgs__msg__HighState__Sequence
{
  unitree_legged_msgs__msg__HighState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} unitree_legged_msgs__msg__HighState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__HIGH_STATE__STRUCT_H_
