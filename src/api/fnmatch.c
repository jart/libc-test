#include <fnmatch.h>
#define C(n) {__auto_type c = n;}
static void f()
{
C(FNM_NOMATCH)
C(FNM_PATHNAME)
C(FNM_PERIOD)
C(FNM_NOESCAPE)
{int(*p)(const char*,const char*,int) = fnmatch;}
}
