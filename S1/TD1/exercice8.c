#include <uvsqgraphics.h>

int main()
{
init_graphics(900,600);

int a, b, c, d;
a=3;
b=6;
c=(a/b);
d=(a%b);
write_int(c);
writeln();
write_int(d);


wait_escape();
exit(0);
}


