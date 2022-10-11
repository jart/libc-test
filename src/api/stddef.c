#include <stddef.h>
#define T(t) (t*)0;
#define C(n) {__auto_type c = n;}
static void f()
{
{void *p=NULL;}
C(offsetof(struct{int i;}, i))
T(ptrdiff_t)
T(wchar_t)
T(size_t)
}
