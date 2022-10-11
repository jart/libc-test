#include <netinet/tcp.h>
#define C(n) {__auto_type c = n;}
static void f()
{
C(TCP_NODELAY)
}
