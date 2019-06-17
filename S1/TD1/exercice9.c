#include <uvsqgraphics.h>

int main()
{
init_graphics(900,600);

int a, b, c, d, e, f;
a=12;
b=8;
c=10;
d=a-b-c;
e=(a-b)-c;
f=a-(b-c);

write_int(d);
writeln();
write_int(e);
writeln();
write_int(f);

wait_escape();
exit(0);
}


