#include <stdlib.h>
#include <math.h>
#include <uvsqgraphics.h>
	

int main()
{
init_graphics (400,400);

POINT p1, p2;
	
p1.x = 0; p1.y=50;	
p2.x = 400; p2.y=50;	
draw_line(p1,p2,rouge);

p1.x = 0; p1.y=100;	
p2.x = 400; p2.y=100;	
draw_line(p1,p2,rouge);

p1.x = 0; p1.y=150;	
p2.x = 400; p2.y=150;	
draw_line(p1,p2,rouge);

p1.x = 0; p1.y=200;	
p2.x = 400; p2.y=200;	
draw_line(p1,p2,rouge);

p1.x = 0; p1.y=250;	
p2.x = 400; p2.y=250;	
draw_line(p1,p2,rouge);

p1.x = 0; p1.y=300;	
p2.x = 400; p2.y=300;	
draw_line(p1,p2,rouge);

p1.x = 0; p1.y=350;	
p2.x = 400; p2.y=350;	
draw_line(p1,p2,rouge);

p1.x = 50; p1.y=0;	
p2.x = 50; p2.y=400;	
draw_line(p1,p2,rouge);

p1.x = 100; p1.y=0;	
p2.x = 100; p2.y=400;	
draw_line(p1,p2,rouge);

p1.x = 150; p1.y=0;	
p2.x = 150; p2.y=400;	
draw_line(p1,p2,rouge);

p1.x = 200; p1.y=0;	
p2.x = 200; p2.y=400;	
draw_line(p1,p2,rouge);

p1.x = 250; p1.y=0;	
p2.x = 250; p2.y=400;	
draw_line(p1,p2,rouge);

p1.x = 300; p1.y=0;	
p2.x = 300; p2.y=400;	
draw_line(p1,p2,rouge);
	
p1.x = 350; p1.y=0;	
p2.x = 350; p2.y=400;	
draw_line(p1,p2,rouge);	
	wait_escape();
    exit(0);
	
}
