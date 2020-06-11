#ifndef __libcore_types__
#define __libcore_types__

#include <stdint.h>

// pointers
#define nil ((void*)0)
typedef void* AbstractPointer;
typedef uintptr_t uintptr;
typedef intptr_t intptr;

// unsigned int
typedef uint8_t uint8;
typedef uint16_t uint16;
typedef uint32_t uint32;
typedef uint64_t uint64;
typedef unsigned int uint32;

// signed int
typedef int8_t int8;
typedef int16_t int16;
typedef int32_t int32;
typedef int64_t int64;

// misc
typedef char* cstring;
typedef uint8 byte;
typedef byte* bytearray;
typedef byte bool;
#define true 1
#define false 0

#endif