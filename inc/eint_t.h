# ifndef __eint__t__h
# define __eint__t__h

# if defined(USING_OPENCL) && defined(USE_CL_TYPES)
	# include <CL/cl.h>
# ifdef ARC64
	typedef cl_ulong uint_t;
	typedef cl_long int_t;
# elif ARC32
	typedef cl_uint uint_t;
	typedef cl_int int_t;
# elif ARC16
	typedef cl_ushort uint_t;
	typedef cl_short int_t;
# elif ARC8
	typedef cl_uchar uint_t;
	typedef cl_char int_t;
# endif
# else

# include <stdint.h>
# ifdef ARC64
    typedef uint64_t uint_t;
    typedef int64_t int_t;
# elif ARC32
    typedef uint32_t uint_t;
    typedef int32_t int_t;
# elif ARC16
    typedef uint16_t uint_t;
    typedef int16_t int_t;
# elif ARC8
    typedef uint8_t uint_t;
    typedef int8_t int_t;
# else
    typedef int unsigned uint_t;
    typedef int int_t;
# endif
# endif

# endif /*__eint__t__h*/
