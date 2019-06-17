#include <uvsqgraphics.h>

int main()
{
init_graphics(900,600);

// Debut du code
POINT p1, p2;


p1.x = 200; p1.y=200;	
p2.x = 200; p2.y=300;	
draw_line(p1,p2,bleu);

p1.x = 200; p1.y=200;	
p2.x = 300; p2.y=200;	
draw_line(p1,p2,rouge);

p1.x = 200; p1.y=300;	
p2.x = 300; p2.y=300;	
draw_line(p1,p2,vert);

p1.x = 300; p1.y=200;	
p2.x = 300; p2.y=300;	
draw_line(p1,p2,orange);

wait_escape();
exit(0);
}
