#include <uvsqgraphics.h>

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1, p2;


p1.x = 200; p1.y=100;	
p2.x = 600; p2.y=100;	
draw_line(p1,p2,rouge);

p1.x = 200; p1.y=200;	
p2.x = 600; p2.y=200;	
draw_line(p1,p2,rouge);

p1.x = 200; p1.y=300;	
p2.x = 600; p2.y=300;	
draw_line(p1,p2,rouge);

p1.x = 200; p1.y=400;	
p2.x = 600; p2.y=400;	
draw_line(p1,p2,rouge);

p1.x = 200; p1.y=500;	
p2.x = 600; p2.y=500;	
draw_line(p1,p2,rouge);

wait_escape();
exit(0);
}


