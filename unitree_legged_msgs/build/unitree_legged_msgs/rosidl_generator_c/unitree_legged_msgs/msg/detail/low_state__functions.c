// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from unitree_legged_msgs:msg/LowState.idl
// generated code does not contain a copyright notice
#include "unitree_legged_msgs/msg/detail/low_state__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `imu`
#include "unitree_legged_msgs/msg/detail/imu__functions.h"
// Member `motorstate`
#include "unitree_legged_msgs/msg/detail/motor_state__functions.h"
// Member `eeforceraw`
// Member `eeforce`
// Member `position`
// Member `velocity`
// Member `velocity_w`
#include "unitree_legged_msgs/msg/detail/cartesian__functions.h"

bool
unitree_legged_msgs__msg__LowState__init(unitree_legged_msgs__msg__LowState * msg)
{
  if (!msg) {
    return false;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // imu
  if (!unitree_legged_msgs__msg__IMU__init(&msg->imu)) {
    unitree_legged_msgs__msg__LowState__fini(msg);
    return false;
  }
  // motorstate
  for (size_t i = 0; i < 20; ++i) {
    if (!unitree_legged_msgs__msg__MotorState__init(&msg->motorstate[i])) {
      unitree_legged_msgs__msg__LowState__fini(msg);
      return false;
    }
  }
  // footforce
  // footforceest
  // tick
  // wirelessremote
  // reserve
  // crc
  // eeforceraw
  for (size_t i = 0; i < 4; ++i) {
    if (!unitree_legged_msgs__msg__Cartesian__init(&msg->eeforceraw[i])) {
      unitree_legged_msgs__msg__LowState__fini(msg);
      return false;
    }
  }
  // eeforce
  for (size_t i = 0; i < 4; ++i) {
    if (!unitree_legged_msgs__msg__Cartesian__init(&msg->eeforce[i])) {
      unitree_legged_msgs__msg__LowState__fini(msg);
      return false;
    }
  }
  // position
  if (!unitree_legged_msgs__msg__Cartesian__init(&msg->position)) {
    unitree_legged_msgs__msg__LowState__fini(msg);
    return false;
  }
  // velocity
  if (!unitree_legged_msgs__msg__Cartesian__init(&msg->velocity)) {
    unitree_legged_msgs__msg__LowState__fini(msg);
    return false;
  }
  // velocity_w
  if (!unitree_legged_msgs__msg__Cartesian__init(&msg->velocity_w)) {
    unitree_legged_msgs__msg__LowState__fini(msg);
    return false;
  }
  return true;
}

void
unitree_legged_msgs__msg__LowState__fini(unitree_legged_msgs__msg__LowState * msg)
{
  if (!msg) {
    return;
  }
  // levelflag
  // commversion
  // robotid
  // sn
  // bandwidth
  // imu
  unitree_legged_msgs__msg__IMU__fini(&msg->imu);
  // motorstate
  for (size_t i = 0; i < 20; ++i) {
    unitree_legged_msgs__msg__MotorState__fini(&msg->motorstate[i]);
  }
  // footforce
  // footforceest
  // tick
  // wirelessremote
  // reserve
  // crc
  // eeforceraw
  for (size_t i = 0; i < 4; ++i) {
    unitree_legged_msgs__msg__Cartesian__fini(&msg->eeforceraw[i]);
  }
  // eeforce
  for (size_t i = 0; i < 4; ++i) {
    unitree_legged_msgs__msg__Cartesian__fini(&msg->eeforce[i]);
  }
  // position
  unitree_legged_msgs__msg__Cartesian__fini(&msg->position);
  // velocity
  unitree_legged_msgs__msg__Cartesian__fini(&msg->velocity);
  // velocity_w
  unitree_legged_msgs__msg__Cartesian__fini(&msg->velocity_w);
}

unitree_legged_msgs__msg__LowState *
unitree_legged_msgs__msg__LowState__create()
{
  unitree_legged_msgs__msg__LowState * msg = (unitree_legged_msgs__msg__LowState *)malloc(sizeof(unitree_legged_msgs__msg__LowState));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(unitree_legged_msgs__msg__LowState));
  bool success = unitree_legged_msgs__msg__LowState__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
unitree_legged_msgs__msg__LowState__destroy(unitree_legged_msgs__msg__LowState * msg)
{
  if (msg) {
    unitree_legged_msgs__msg__LowState__fini(msg);
  }
  free(msg);
}


bool
unitree_legged_msgs__msg__LowState__Sequence__init(unitree_legged_msgs__msg__LowState__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  unitree_legged_msgs__msg__LowState * data = NULL;
  if (size) {
    data = (unitree_legged_msgs__msg__LowState *)calloc(size, sizeof(unitree_legged_msgs__msg__LowState));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = unitree_legged_msgs__msg__LowState__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        unitree_legged_msgs__msg__LowState__fini(&data[i - 1]);
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
unitree_legged_msgs__msg__LowState__Sequence__fini(unitree_legged_msgs__msg__LowState__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      unitree_legged_msgs__msg__LowState__fini(&array->data[i]);
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

unitree_legged_msgs__msg__LowState__Sequence *
unitree_legged_msgs__msg__LowState__Sequence__create(size_t size)
{
  unitree_legged_msgs__msg__LowState__Sequence * array = (unitree_legged_msgs__msg__LowState__Sequence *)malloc(sizeof(unitree_legged_msgs__msg__LowState__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = unitree_legged_msgs__msg__LowState__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
unitree_legged_msgs__msg__LowState__Sequence__destroy(unitree_legged_msgs__msg__LowState__Sequence * array)
{
  if (array) {
    unitree_legged_msgs__msg__LowState__Sequence__fini(array);
  }
  free(array);
}
