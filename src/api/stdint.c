#include <stdint.h>
#define T(t) (t*)0;
#define C(n) {__auto_type c = n;}
static void f()
{
T(int8_t)
T(int16_t)
T(int32_t)
T(int64_t)
T(uint8_t)
T(uint16_t)
T(uint32_t)
T(uint64_t)
T(int_least8_t)
T(int_least16_t)
T(int_least32_t)
T(int_least64_t)
T(uint_least8_t)
T(uint_least16_t)
T(uint_least32_t)
T(uint_least64_t)
T(int_fast8_t)
T(int_fast16_t)
T(int_fast32_t)
T(int_fast64_t)
T(uint_fast8_t)
T(uint_fast16_t)
T(uint_fast32_t)
T(uint_fast64_t)
#ifdef _XOPEN_SOURCE
T(intptr_t)
T(uintptr_t)
#endif
T(intmax_t)
T(uintmax_t)
C(INT8_MIN)
C(INT16_MIN)
C(INT32_MIN)
C(INT64_MIN)
C(INT8_MAX)
C(INT16_MAX)
C(INT32_MAX)
C(INT64_MAX)
C(UINT8_MAX)
C(UINT16_MAX)
C(UINT32_MAX)
C(UINT64_MAX)
C(INT_LEAST8_MIN)
C(INT_LEAST16_MIN)
C(INT_LEAST32_MIN)
C(INT_LEAST64_MIN)
C(INT_LEAST8_MAX)
C(INT_LEAST16_MAX)
C(INT_LEAST32_MAX)
C(INT_LEAST64_MAX)
C(UINT_LEAST8_MAX)
C(UINT_LEAST16_MAX)
C(UINT_LEAST32_MAX)
C(UINT_LEAST64_MAX)
C(INT_FAST8_MIN)
C(INT_FAST16_MIN)
C(INT_FAST32_MIN)
C(INT_FAST64_MIN)
C(INT_FAST8_MAX)
C(INT_FAST16_MAX)
C(INT_FAST32_MAX)
C(INT_FAST64_MAX)
C(UINT_FAST8_MAX)
C(UINT_FAST16_MAX)
C(UINT_FAST32_MAX)
C(UINT_FAST64_MAX)
C(INTPTR_MIN)
C(INTPTR_MAX)
C(UINTPTR_MAX)
C(INTMAX_MIN)
C(INTMAX_MAX)
C(UINTMAX_MAX)
C(PTRDIFF_MIN)
C(PTRDIFF_MAX)
C(SIG_ATOMIC_MIN)
C(SIG_ATOMIC_MAX)
C(SIZE_MAX)
C(WCHAR_MIN)
C(WCHAR_MAX)
C(WINT_MIN)
C(WINT_MAX)
C(INT8_C(0))
C(INT16_C(0))
C(INT32_C(0))
C(INT64_C(0))
C(UINT8_C(0))
C(UINT16_C(0))
C(UINT32_C(0))
C(UINT64_C(0))
C(INTMAX_C(0))
C(UINTMAX_C(0))
}
