// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from unitree_legged_msgs:msg/LED.idl
// generated code does not contain a copyright notice

#ifndef UNITREE_LEGGED_MSGS__MSG__DETAIL__LED__FUNCTIONS_H_
#define UNITREE_LEGGED_MSGS__MSG__DETAIL__LED__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "unitree_legged_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "unitree_legged_msgs/msg/detail/led__struct.h"

/// Initialize msg/LED message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * unitree_legged_msgs__msg__LED
 * )) before or use
 * unitree_legged_msgs__msg__LED__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_unitree_legged_msgs
bool
unitree_legged_msgs__msg__LED__init(unitree_legged_msgs__msg__LED * msg);

/// Finalize msg/LED message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unitree_legged_msgs
void
unitree_legged_msgs__msg__LED__fini(unitree_legged_msgs__msg__LED * msg);

/// Create msg/LED message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * unitree_legged_msgs__msg__LED__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_unitree_legged_msgs
unitree_legged_msgs__msg__LED *
unitree_legged_msgs__msg__LED__create();

/// Destroy msg/LED message.
/**
 * It calls
 * unitree_legged_msgs__msg__LED__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unitree_legged_msgs
void
unitree_legged_msgs__msg__LED__destroy(unitree_legged_msgs__msg__LED * msg);


/// Initialize array of msg/LED messages.
/**
 * It allocates the memory for the number of elements and calls
 * unitree_legged_msgs__msg__LED__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_unitree_legged_msgs
bool
unitree_legged_msgs__msg__LED__Sequence__init(unitree_legged_msgs__msg__LED__Sequence * array, size_t size);

/// Finalize array of msg/LED messages.
/**
 * It calls
 * unitree_legged_msgs__msg__LED__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unitree_legged_msgs
void
unitree_legged_msgs__msg__LED__Sequence__fini(unitree_legged_msgs__msg__LED__Sequence * array);

/// Create array of msg/LED messages.
/**
 * It allocates the memory for the array and calls
 * unitree_legged_msgs__msg__LED__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_unitree_legged_msgs
unitree_legged_msgs__msg__LED__Sequence *
unitree_legged_msgs__msg__LED__Sequence__create(size_t size);

/// Destroy array of msg/LED messages.
/**
 * It calls
 * unitree_legged_msgs__msg__LED__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_unitree_legged_msgs
void
unitree_legged_msgs__msg__LED__Sequence__destroy(unitree_legged_msgs__msg__LED__Sequence * array);

#ifdef __cplusplus
}
#endif

#endif  // UNITREE_LEGGED_MSGS__MSG__DETAIL__LED__FUNCTIONS_H_
