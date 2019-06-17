#include <uvsqgraphics.h>

int main()
{
init_graphics(800,800);

POINT p1, p2;

p1.x = 400; p1.y = 300;
draw_circle(p1,250, bleu);

p1.x = 270; p1.y=510;	
p2.x = 530; p2.y=510;	
draw_line(p1,p2,rouge);

p1.x = 150; p1.y=300;	
p2.x = 270; p2.y=510;	
draw_line(p1,p2,rouge);

p1.x = 530; p1.y=510;	
p2.x = 650; p2.y=300;	
draw_line(p1,p2,rouge);

p1.x = 270; p1.y=90;	
p2.x = 530; p2.y=90;	
draw_line(p1,p2,rouge);

p1.x = 150; p1.y=300;	
p2.x = 270; p2.y=90;	
draw_line(p1,p2,rouge);

p1.x = 530; p1.y=90;	
p2.x = 650; p2.y=300;	
draw_line(p1,p2,rouge);

wait_escape();
exit(0);
}
