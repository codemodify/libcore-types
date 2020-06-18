#ifndef __libcore_types_spec__
#define __libcore_types_spec__

//
// Inspiref from https://github.com/golang/go/blob/master/src/builtin/builtin.go
//
// EXPECTED TYPES to be defined based on a native storage type for an OS/Arch combo
//

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

// uint8		- is the set of all unsigned  8-bit integers, Range: 0 through 255.
// uint16		- is the set of all unsigned 16-bit integers, Range: 0 through 65535.
// uint32		- is the set of all unsigned 32-bit integers, Range: 0 through 4294967295.
// uint64		- is the set of all unsigned 64-bit integers, Range: 0 through 18446744073709551615.
//
// uint			- convenience shortcut to one of the above that is efficient on a platform, at least 32 bits in size
//
// uintMin		- min value for unsigned INT
// uint8Min		- min value for unsigned INT8
// uint16Max	- max value for unsigned INT16
// uint32Max	- max value for unsigned INT32
// uint64Max	- max value for unsigned INT64
//
// uintRef		- pointer, useful to change the original value, ex: *a = 1
// uintRefRef	- pointer to pointer, useful to change the value of the pointer, ex: **a = new-pointer-val
// uint8Ref  + uint8RefRef
// uint16Ref + uint16RefRef
// uint32Ref + uint32RefRef
// uint64Ref + uint64RefRef

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

// int8			- is the set of all signed  8-bit integers, Range: -128 through 127.
// int16		- is the set of all signed 16-bit integers, Range: -32768 through 32767.
// int32		- is the set of all signed 32-bit integers, Range: -2147483648 through 2147483647.
// int64		- is the set of all signed 64-bit integers, Range: -9223372036854775808 through 9223372036854775807.
//
// int			- convenience shortcut to one of the above that is efficient on a platform, at least 32 bits in size
//
// intMin		- min value for signed INT
// int8Min		- min value for signed INT8
// int16Max		- max value for signed INT16
// int32Max		- max value for signed INT32
// int64Max		- max value for signed INT64
//
// intRef,   intRefRef
// int8Ref,  int8RefRef
// int16Ref, int16RefRef
// int32Ref, int32RefRef
// int64Ref, int64RefRef

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

// float32		- is the set of all IEEE-754 32-bit floating-point numbers.
// float64		- is the set of all IEEE-754 64-bit floating-point numbers.
//
// float		- convenience shortcut to one of the above that is efficient on a platform
//
// floatRef, floatRefRef
// float32Ref, float32RefRef
// float64Ref, float64RefRef

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

// complex64	- is the set of all complex numbers with float32 real and imaginary parts.
// complex128	- is the set of all complex numbers with float64 real and imaginary parts.
//
// complex		- convenience shortcut to one of the above that is efficient on a platform
//
// complexRef, complexRefRef
// complex64Ref, complex64RefRef
// complex128Ref, complex128RefRef

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

// byte			- equivalent to uint8 in all ways, represents 8 bit byte
//
// byteRef, byteRefRef
//
// byteArray, byteArrayRef - convenience shortcut to one of the above

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

// string		- pointer to a sequence of 8-bit bytes, conventionally but
//				  not necessarily representing UTF-8-encoded text,
//				  aka: `char*` it does not tell anything about the length
//
// stringRef	- aka: `char**` used to modify the pointer value
// stringArray	- aka: `char**` used to express this is an array, don't modify the pointer value
//
// string terminateString(string val, int length)

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

// uintptr		- is an integer type that is large enough to hold the bit pattern of any pointer.
// pointer		- abstract pointer to anything, typically `void*`
//
// pointerRef

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

// nil			- representing the zero value for a pointer
// NULL			- convenience shortcut to above
// null			- convenience shortcut to above

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

// bool			- is the set of boolean values, true and false.
//
// boolean		- convenience shortcut to above
// BOOL			- convenience shortcut to above
// BOOLEAN		- convenience shortcut to above
//
// true, false
// TRUE, FALSE

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

// error		- is a type defined to express an error code
//
// success		- error code to express success
// failure		- error code to express failure

#endif
