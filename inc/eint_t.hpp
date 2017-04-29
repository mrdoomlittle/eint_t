# ifndef __mdl__eint__t__hpp
# define __mdl__eint__t__hpp
# include <boost/cstdint.hpp>
namespace mdl {
# if defined(ARC64) || defined(__ARC64)
typedef boost::uint64_t uint_t;
typedef boost::int64_t int_t;
# elif defined(ARC32) || defined(__ARC32)
typedef boost::uint32_t uint_t;
typedef boost::int32_t int_t;
# elif defined(ARC16) || defined(__ARC16)
typedef boost::uint16_t uint_t;
typedef boost::int16_t int_t;
# elif defined(ARC8) || defined(__ARC8)
typedef boost::uint8_t uint_t;
typedef boost::int8_t int_t;
# else
typedef int unsigned uint_t;
typedef int int_t;
# endif
typedef boost::uint64_t u64_t;
typedef boost::int64_t i64_t;

typedef boost::uint32_t u32_t;
typedef boost::int32_t i32_t;

typedef boost::uint16_t u16_t;
typedef boost::int16_t i16_t;

typedef boost::uint8_t u8_t;
typedef boost::int8_t i8_t;

# if (defined(__USING_OPENCL) || defined(USING_OPENCL)) && defined(__OPENCL_API_TYPES)
# include <CL/cl.hpp>
typedef cl_ulong cl_u64_t;
typedef cl_long cl_i64_t;

typedef cl_uint cl_u32_t;
typedef cl_int cl_i32_t;

typedef cl_ushort cl_u16_t;
typedef cl_short cl_i16_t;

typedef cl_uchar cl_u8_t;
typedef cl_char cl_i8_t;
# endif
}
# endif /*__mdl__eint__t__hpp*/
