# ifndef __eint__t__h
# define __eint__t__h

# if defined(USING_OPENCL) && defined(USE_CL_TYPES)
# ifdef ARC64
	typedef ulong uint_t;
	typedef long int_t;
# elif ARC32
	typedef uint uint_t;
	typedef int int_t;
# elif ARC16
	typedef ushort uint_t;
	typedef short int_t;
# elif ARC8
	typedef uchar uint_t;
	typedef char int_t;
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
