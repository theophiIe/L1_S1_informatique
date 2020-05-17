#include <uvsqgraphics.h>

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1, p2;


p1.x = 120; p1.y=170;	
p2.x = 170; p2.y=120;	
draw_rectangle(p1,p2,rouge);

p1.x = 120; p1.y=170;	
p2.x = 170; p2.y=120;	
draw_line(p1,p2,rouge);

p1.x = 170; p1.y=170;	
p2.x = 120; p2.y=120;	
draw_line(p1,p2,rouge);

wait_escape();
exit(0);
}

