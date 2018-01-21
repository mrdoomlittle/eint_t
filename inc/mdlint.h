# ifndef __mdlint__h
# define __mdlint__h
# include <stdint.h>
# ifndef __mdl_u64_t_defined
# define __mdl_u64_t_defined
typedef long long unsigned mdl_u64_t;
# endif

# ifndef __mdl_i64_t_defined
# define __mdl_i64_t_defined
typedef long long int mdl_i64_t;
# endif

# ifndef __mdl_s64_t_defined
# define __mdl_s64_t_defined
typedef long long int mdl_s64_t;
# endif

# ifndef __mdl_u32_t_defined
# define __mdl_u32_t_defined
typedef unsigned int mdl_u32_t;
# endif

# ifndef __mdl_i32_t_defined
# define __mdl_i32_t_defined
typedef int mdl_i32_t;
# endif

# ifndef __mdl_s32_t_defined
# define __mdl_s32_t_defined
typedef int mdl_s32_t;
# endif

# ifndef __mdl_u16_t_defined
# define __mdl_u16_t_defined
typedef unsigned short int mdl_u16_t;
# endif

# ifndef __mdl_i16_t_defined
# define __mdl_i16_t_defined
typedef short int mdl_i16_t;
# endif

# ifndef __mdl_s16_t_defined
# define __mdl_s16_t_defined
typedef short int mdl_s16_t;
# endif

# ifndef __mdl_u8_t_defined
# define __mdl_u8_t_defined
typedef unsigned char mdl_u8_t;
# endif

# ifndef __mdl_i8_t_defined
# define __mdl_i8_t_defined
typedef signed char mdl_i8_t;
# endif

# ifndef __mdl_s8_t_defined
# define __mdl_s8_t_defined
typedef signed char mdl_s8_t;
# endif

# if defined(ARC64) || defined(__ARC64) || defined(__arc64)
# ifndef __mdl_uint_t_defined
# define __mdl_uint_t_defined
typedef mdl_u64_t mdl_uint_t;
# endif

# ifndef __mdl_int_t_defined
# define __mdl_int_t_defined
typedef mdl_i64_t mdl_int_t;
# endif
# endif

# if defined(ARC32) || defined(__ARC32) || defined(__arc32)
# ifndef __mdl_uint_t_defined
# define __mdl_uint_t_defined
typedef mdl_u32_t mdl_uint_t;
# endif

# ifndef __mdl_int_t_defined
# define __mdl_int_t_defined
typedef mdl_i32_t mdl_int_t;
# endif
# endif

# if defined(ARC16) || defined(__ARC16) || defined(__arc16)
# ifndef __mdl_uint_t_defined
# define __mdl_uint_t_defined
typedef mdl_u16_t mdl_uint_t;
# endif

# ifndef __mdl_int_t_defined
# define __mdl_int_t_defined
typedef mdl_i16_t mdl_int_t;
# endif
# endif

# if defined(ARC8) || defined(__ARC8) || defined(__arc8)
# ifndef __mdl_uint_t_defined
# define __mdl_uint_t_defined
typedef mdl_u8_t mdl_uint_t;
# endif

# ifndef __mdl_int_t_defined
# define __mdl_int_t_defined
typedef mdl_i8_t mdl_int_t;
# endif
# endif

# ifndef __mdl_uint_t_defined
# define __mdl_uint_t_defined
typedef int unsigned mdl_uint_t;
# endif

# ifndef __mdl_int_t_defined
# define __mdl_int_t_defined
typedef int mdl_int_t;
# endif

# ifdef __cplusplus
# ifndef __mdl_defined
# define __mdl_defined
namespace mdl {
typedef mdl_u64_t u64_t;
typedef mdl_i64_t i64_t;
typedef mdl_s64_t s64_t;

typedef mdl_u32_t u32_t;
typedef mdl_i32_t i32_t;
typedef mdl_s32_t s32_t;

typedef mdl_u16_t u16_t;
typedef mdl_i16_t i16_t;
typedef mdl_s16_t s16_t;

typedef mdl_u8_t u8_t;
typedef mdl_i8_t i8_t;
typedef mdl_s8_t s8_t;

typedef mdl_uint_t uint_t;
typedef mdl_int_t int_t;
}
# endif
# endif
# endif /*__mdlint__h*/
