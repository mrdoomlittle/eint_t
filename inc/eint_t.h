# ifndef __mdl__eint__t__h
# define __mdl__eint__t__h
# if (defined(__USING_OPENCL) || defined(USING_OPENCL)) && defined(USE_CL_TYPES)
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
# endif

typedef uint64_t mdl_u64_t;
typedef int64_t mdl_i64_t;

typedef uint32_t mdl_u32_t;
typedef int32_t mdl_i32_t;

typedef uint16_t mdl_u16_t;
typedef int16_t mdl_i16_t;

typedef uint8_t mdl_u8_t;
typedef int8_t mdl_i8_t;
# endif /*__mdl__eint__t__h*/
