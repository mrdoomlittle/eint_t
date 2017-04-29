# ifndef __mdl__eint__t__h
# define __mdl__eint__t__h
# if (defined(__USING_OPENCL) || defined(USING_OPENCL)) && defined(__OPENCL_LNG_TYPES)
# if defined(ARC64) || defined(__ARC64)
typedef ulong mdl_uint_t;
typedef long mdl_int_t;
# elif defined(ARC32) || defined(__ARC32)
typedef uint mdl_uint_t;
typedef int mdl_int_t;
# elif defined(ARC16) || defined(__ARC16)
typedef ushort mdl_uint_t;
typedef short mdl_int_t;
# elif defined(ARC8) || defined(__ARC8)
typedef uchar mdl_uint_t;
typedef char mdl_int_t;
# endif
typedef ulong mdl_u64_t;
typedef long mdl_i64_t;

typedef uint mdl_u32_t;
typedef int mdl_i32_t;

typedef ushort mdl_u16_t;
typedef short mdl_i16_t;

typedef uchar mdl_u8_t;
typedef char mdl_i8_t;
# else
# include <stdint.h>
# if defined(ARC64) || defined(__ARC64)
typedef uint64_t mdl_uint_t;
typedef int64_t mdl_int_t;
# elif defined(ARC32) || defined(__ARC32)
typedef uint32_t mdl_uint_t;
typedef int32_t mdl_int_t;
# elif defined(ARC16) || defined(__ARC16)
typedef uint16_t mdl_uint_t;
typedef int16_t mdl_int_t;
# elif defined(ARC8) || defined(__ARC8)
typedef uint8_t mdl_uint_t;
typedef int8_t mdl_int_t;
# else
typedef int unsigned mdl_uint_t;
typedef int mdl_int_t;
# endif
typedef uint64_t mdl_u64_t;
typedef int64_t mdl_i64_t;

typedef uint32_t mdl_u32_t;
typedef int32_t mdl_i32_t;

typedef uint16_t mdl_u16_t;
typedef int16_t mdl_i16_t;

typedef uint8_t mdl_u8_t;
typedef int8_t mdl_i8_t;
# if (defined(__USING_OPENCL) || defined(USING_OPENCL)) && defined(__OPENCL_API_TYPES)
# include <CL/cl.h>
typedef cl_ulong mdl_cl_u64_t;
typedef cl_long mdl_cl_i64_t;

typedef cl_uint mdl_cl_u32_t;
typedef cl_int mdl_cl_i32_t;

typedef cl_ushort mdl_cl_u16_t;
typedef cl_short mdl_cl_i16_t;

typedef cl_uchar mdl_cl_u8_t;
typedef cl_char mdl_cl_i8_t;
# endif
# endif
# endif /*__mdl__eint__t__h*/
