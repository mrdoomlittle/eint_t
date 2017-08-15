# ifndef __eint__t__h
# define __eint__t__h
# ifdef __cplusplus
#	include <cstdint>
# else
#	include <stdint.h>
# endif

# if (defined(__USING_OPENCL) || defined(USING_OPENCL)) && defined(__OPENCL_API_TYPES)
# include <CL/cl.hpp>
typedef cl_ulong mdl_cl_u64_t;
typedef cl_long mdl_cl_i64_t;

typedef cl_uint mdl_cl_u32_t;
typedef cl_int mdl_cl_i32_t;

typedef cl_ushort mdl_cl_u16_t;
typedef cl_short mdl_cl_i16_t;

typedef cl_uchar mdl_cl_u8_t;
typedef cl_char mdl_cl_i8_t;
# endif

# ifndef __mdl_u64_t_defined
# define __mdl_u64_t_defined
typedef uint64_t mdl_u64_t;
# endif

# ifndef __mdl_i64_t_defined
# define __mdl_i64_t_defined
typedef int64_t mdl_i64_t;
# endif

# ifndef __mdl_u32_t_defined
# define __mdl_u32_t_defined
typedef uint32_t mdl_u32_t;
# endif

# ifndef __mdl_i32_t_defined
# define __mdl_i32_t_defined
typedef int32_t mdl_i32_t;
# endif

# ifndef __mdl_u16_t_defined
# define __mdl_u16_t_defined
typedef uint16_t mdl_u16_t;
# endif

# ifndef __mdl_i16_t_defined
# define __mdl_i16_t_defined
typedef int16_t mdl_i16_t;
# endif

# ifndef __mdl_u8_t_defined
# define __mdl_u8_t_defined
typedef uint8_t mdl_u8_t;
# endif

# ifndef __mdl_i8_t_defined
# define __mdl_i8_t_defined
typedef int8_t mdl_i8_t;
# endif

# ifdef __cplusplus
# ifndef __mdl_defined
# define __mdl_defined
namespace mdl {
typedef mdl_u64_t u64_t;
typedef mdl_i64_t i64_t;

typedef mdl_u32_t u32_t;
typedef mdl_i32_t i32_t;

typedef mdl_u16_t u16_t;
typedef mdl_i16_t i16_t;

typedef mdl_u8_t u8_t;
typedef mdl_i8_t i8_t;

# if defined(ARC64) || defined(__ARC64)
typedef mdl_u64_t uint_t;
typedef mdl_i64_t int_t;
# elif defined(ARC32) || defined(__ARC32)
typedef mdl_u32_t uint_t;
typedef mdl_i32_t int_t;
# elif defined(ARC16) || defined(__ARC16)
typedef mdl_u16_t uint_t;
typedef mdl_i16_t int_t;
# elif defined(ARC8) || defined(__ARC8)
typedef mdl_u8_t uint_t;
typedef mdl_i8_t int_t;
# else
typedef unsigned int uint_t;
typedef int int_t;
# endif
}
# endif
# endif


# endif /*__eint__t__h*/
