#ifndef __ATOMIC_SET_H_
#define __ATOMIC_SET_H_

#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

static __inline__ void atomic16_set(volatile int16_t *d,int16_t s)
{
	*d = s;
}

static __inline__ void atomic32_set(volatile int32_t *d,int32_t s)
{
	*d = s;
}

static __inline__ void atomic64_set(volatile int64_t *d,int64_t s)
{
	*d = s;
}

static __inline__ void atomic16u_set(volatile uint16_t *d,uint16_t s)
{
	*d = s;
}

static __inline__ void atomic32u_set(volatile uint32_t *d,uint32_t s)
{
	*d = s;
}

static __inline__ void atomic64u_set(volatile uint64_t *d,uint64_t s)
{
	*d = s;
}

#ifdef __cplusplus
}
#endif

#endif

