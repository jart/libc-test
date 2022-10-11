#include <stdbool.h>
#define T(t) (t*)0;
#define C(n) {__auto_type c = n;}
static void f()
{
T(bool)
C(true)
C(false)
C(__bool_true_false_are_defined)
}
