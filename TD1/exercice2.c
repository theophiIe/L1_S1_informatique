#include <uvsqgraphics.h>

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1, p2;


p1.x = 100; p1.y=300;	
p2.x = 700; p2.y=300;	
draw_line(p1,p2,rouge);

p1.x = 100; p1.y = 300;
draw_circle(p1,100, magenta);

p1.x = 700; p1.y = 300;
draw_circle(p1,100, magenta);

p1.x = 400; p1.y = 300;
draw_circle(p1,100, magenta);

wait_escape();
exit(0);
}

