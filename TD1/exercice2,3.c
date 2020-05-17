#include <uvsqgraphics.h>

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1, p2;


p1.x = 20; p1.y=100;	
p2.x = 100; p2.y=20;	
draw_rectangle(p1,p2,rouge);

wait_escape();
exit(0);
}



