// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_legged_msgs:msg/HighState.idl
// generated code does not contain a copyright notice
#include "unitree_legged_msgs/msg/detail/high_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `imu`
#include "unitree_legged_msgs/msg/detail/imu__functions.h"
// Member `footposition2body`
// Member `footspeed2body`
// Member `eeforce`
#include "unitree_legged_msgs/msg/detail/cartesian__functions.h"

bool
unitree_legged_msgs__msg__HighState__init(unitree_legged_msgs__msg__HighState * msg)
{
  if (!msg) {
    return false;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // mode
  // imu
  if (!unitree_legged_msgs__msg__IMU__init(&msg->imu)) {
    unitree_legged_msgs__msg__HighState__fini(msg);
    return false;
  }
  // forwardspeed
  // sidespeed
  // rotatespeed
  // bodyheight
  // updownspeed
  // forwardposition
  // sideposition
  // footposition2body
  for (size_t i = 0; i < 4; ++i) {
    if (!unitree_legged_msgs__msg__Cartesian__init(&msg->footposition2body[i])) {
      unitree_legged_msgs__msg__HighState__fini(msg);
      return false;
    }
  }
  // footspeed2body
  for (size_t i = 0; i < 4; ++i) {
    if (!unitree_legged_msgs__msg__Cartesian__init(&msg->footspeed2body[i])) {
      unitree_legged_msgs__msg__HighState__fini(msg);
      return false;
    }
  }
  // footforce
  // footforceest
  // tick
  // wirelessremote
  // reserve
  // crc
  // eeforce
  for (size_t i = 0; i < 4; ++i) {
    if (!unitree_legged_msgs__msg__Cartesian__init(&msg->eeforce[i])) {
      unitree_legged_msgs__msg__HighState__fini(msg);
      return false;
    }
  }
  // jointp
  return true;
}

void
unitree_legged_msgs__msg__HighState__fini(unitree_legged_msgs__msg__HighState * msg)
{
  if (!msg) {
    return;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // mode
  // imu
  unitree_legged_msgs__msg__IMU__fini(&msg->imu);
  // forwardspeed
  // sidespeed
  // rotatespeed
  // bodyheight
  // updownspeed
  // forwardposition
  // sideposition
  // footposition2body
  for (size_t i = 0; i < 4; ++i) {
    unitree_legged_msgs__msg__Cartesian__fini(&msg->footposition2body[i]);
  }
  // footspeed2body
  for (size_t i = 0; i < 4; ++i) {
    unitree_legged_msgs__msg__Cartesian__fini(&msg->footspeed2body[i]);
  }
  // footforce
  // footforceest
  // tick
  // wirelessremote
  // reserve
  // crc
  // eeforce
  for (size_t i = 0; i < 4; ++i) {
    unitree_legged_msgs__msg__Cartesian__fini(&msg->eeforce[i]);
  }
  // jointp
}

unitree_legged_msgs__msg__HighState *
unitree_legged_msgs__msg__HighState__create()
{
  unitree_legged_msgs__msg__HighState * msg = (unitree_legged_msgs__msg__HighState *)malloc(sizeof(unitree_legged_msgs__msg__HighState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_legged_msgs__msg__HighState));
  bool success = unitree_legged_msgs__msg__HighState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
unitree_legged_msgs__msg__HighState__destroy(unitree_legged_msgs__msg__HighState * msg)
{
  if (msg) {
    unitree_legged_msgs__msg__HighState__fini(msg);
  }
  free(msg);
}


bool
unitree_legged_msgs__msg__HighState__Sequence__init(unitree_legged_msgs__msg__HighState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  unitree_legged_msgs__msg__HighState * data = NULL;
  if (size) {
    data = (unitree_legged_msgs__msg__HighState *)calloc(size, sizeof(unitree_legged_msgs__msg__HighState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_legged_msgs__msg__HighState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_legged_msgs__msg__HighState__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
unitree_legged_msgs__msg__HighState__Sequence__fini(unitree_legged_msgs__msg__HighState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unitree_legged_msgs__msg__HighState__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

unitree_legged_msgs__msg__HighState__Sequence *
unitree_legged_msgs__msg__HighState__Sequence__create(size_t size)
{
  unitree_legged_msgs__msg__HighState__Sequence * array = (unitree_legged_msgs__msg__HighState__Sequence *)malloc(sizeof(unitree_legged_msgs__msg__HighState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = unitree_legged_msgs__msg__HighState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
unitree_legged_msgs__msg__HighState__Sequence__destroy(unitree_legged_msgs__msg__HighState__Sequence * array)
{
  if (array) {
    unitree_legged_msgs__msg__HighState__Sequence__fini(array);
  }
  free(array);
}
