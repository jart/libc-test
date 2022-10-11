#include <sys/times.h>
#define T(t) (t*)0;
#define F(t,n) {t *y = &x.n;}
#define C(n) {__auto_type c = n;}
static void f()
{
T(clock_t)
{
struct tms x;
F(clock_t,tms_utime)
F(clock_t,tms_stime)
F(clock_t,tms_cutime)
F(clock_t,tms_cstime)
}
{clock_t(*p)(struct tms*) = times;}
}
