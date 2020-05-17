#include <uvsqgraphics.h>

int main()
{
init_graphics(900,600);

int a,b;
a=1;
b=a;
write_int(a);
write_int(b);

a=a+2;

write_int(a);
write_int(b);

wait_escape();
exit(0);
}


