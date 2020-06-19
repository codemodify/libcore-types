#ifndef __libcore_types_linux_amd64__
#define __libcore_types_linux_amd64__

// #include <limits.h>  // know data types length
#include <stdint.h>
#include <sys/types.h>

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

typedef uint8_t uint8;	  //
typedef uint16_t uint16;  //
typedef uint32_t uint32;  //
typedef uint64_t uint64;  //
// typedef uint64 uint;			  // this is defined by the platform
#define uintMin UINT8_MAX		  //
#define uint16Max UINT16_MAX	  //
#define uint32Max UINT32_MAX	  //
#define uint64Max UINT64_MAX	  //
typedef uint* uintRef;			  //
typedef uintRef* uintRefRef;	  //
typedef uint8* uint8Ref;		  //
typedef uint8Ref* uint8RefRef;	  //
typedef uint16* uint16Ref;		  //
typedef uint16Ref* uint16RefRef;  //
typedef uint32* uint32Ref;		  //
typedef uint32Ref* uint32RefRef;  //
typedef uint64* uint64Ref;		  //
typedef uint64Ref* uint64RefRef;  //

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

typedef int8_t int8;	//
typedef int16_t int16;	//
typedef int32_t int32;	//
typedef int64_t int64;	//
// typedef int64 int;			// this is defined by the platform
#define intMin INT8_MAX			//
#define int16Max INT16_MAX		//
#define int32Max INT32_MAX		//
#define int64Max INT64_MAX		//
typedef int* intRef;			//
typedef intRef* intRefRef;		//
typedef int8* int8Ref;			//
typedef int8Ref* int8RefRef;	//
typedef int16* int16Ref;		//
typedef int16Ref* int16RefRef;	//
typedef int32* int32Ref;		//
typedef int32Ref* int32RefRef;	//
typedef int64* int64Ref;		//
typedef int64Ref* int64RefRef;	//

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

typedef float float32;	 //
typedef double float64;	 //
// typedef float64 float;				// this is defined by the platform
typedef float* floatRef;			//
typedef floatRef* floatRefRef;		//
typedef float32* float32Ref;		//
typedef float32Ref* float32RefRef;	//
typedef float64* float64Ref;		//
typedef float64Ref* float64RefRef;	//

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

typedef uint8 byte;				  //
typedef byte* byteRef;			  //
typedef byteRef* byteRefRef;	  //
typedef byteRef byteArray;		  //
typedef byteRefRef byteArrayRef;  //

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

typedef byteRef string;									//
typedef byteRefRef stringRef;							//
typedef byteRefRef stringArray;							//
extern string terminateString(string val, int length);	// sets a 0 at position length, returs the same

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

typedef uintptr_t uintptr;	  //
typedef void* pointer;		  //
typedef pointer* pointerRef;  //

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

#define nil ((void*)0)	 //
#undef NULL				 //
#define NULL ((void*)0)	 //
#define null ((void*)0)	 //

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

typedef byte bool;	   //
typedef bool boolean;  //
typedef bool BOOL;	   //
typedef bool BOOLEAN;  //

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

#define true 1	 //
#define false 0	 //
#define TRUE 1	 //
#define FALSE 0	 //

// ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~ ~~~~

typedef int error;
#define success 0
#define failure 1

#endif