#ifndef _PLATFORM_TYPES_H_
#define _PLATFORM_TYPES_H_

#include <stdbool.h>

#ifndef _Bool
#define _Bool unsigned char
#endif

#define CPY_TYPE                CPU_TYPE_32
#define CPU_BIT_ORDER           MSB_FIRST
#define CPU_BYTE_ORDER          HIGH_BYTE_FIRST

#ifndef FALSE
#define FALSE                          (boolean)false
#endif

#ifndef TRUE
#define TRUE                           (boolean)true
#endif

//Bool Type
typedef _Bool                           boolean;


//8-bit type
typedef unsigned char                   uint8;
typedef signed char                     sint8;
typedef volatile unsigned char          vuint8;
typedef volatile signed char            vsint8;

//16-bit type
typedef unsigned short                  uint16;
typedef signed short                    sint16;
typedef volatile unsigned short         vuint16;
typedef volatile signed short           vsint16;

//32-bit type
typedef unsigned int                    uint32;
typedef signed int                      sint32;
typedef volatile unsigned int           vuint32;
typedef volatile signed int             vsint32;

// 64-BIT TYPE
typedef signed long long                sint64;
typedef unsigned long long              uint64;
typedef volatile unsigned long long     vuint64;
typedef volatile signed long long       vsint64;

#endif  /* PLATFORM_TYPES_H_ */