#include <stdlib.h>
#include <math.h>
#include <uvsqgraphics.h>
	

int main()
{
init_graphics (600,400);

POINT p1, p2;
	
p1.x = 00; p1.y=100;	
p2.x = 600; p2.y=100;	
draw_line(p1,p2,rouge);

p1.x = 00; p1.y=200;	
p2.x = 600; p2.y=200;	
draw_line(p1,p2,rouge);

p1.x = 00; p1.y=300;	
p2.x = 600; p2.y=300;	
draw_line(p1,p2,rouge);

p1.x = 100; p1.y=600;	
p2.x = 100; p2.y=00;	
draw_line(p1,p2,rouge);

p1.x = 200; p1.y=600;	
p2.x = 200; p2.y=00;	
draw_line(p1,p2,rouge);

p1.x = 500; p1.y=600;	
p2.x = 500; p2.y=000;	
draw_line(p1,p2,rouge);

p1.x = 400; p1.y=600;	
p2.x = 400; p2.y=00;	
draw_line(p1,p2,rouge);

p1.x = 300; p1.y=600;	
p2.x = 300; p2.y=00;	
draw_line(p1,p2,rouge);

p1.x = 600; p1.y=600;	
p2.x = 600; p2.y=000;	
draw_line(p1,p2,rouge);

	wait_escape();
    exit(0);
	
}
