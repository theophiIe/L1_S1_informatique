#include <uvsqgraphics.h>

void dessine_triangle(POINT p1, POINT p2, POINT p3)
{
p1.x = 0; p1.y = 0;
p2.x = 300; p2.y = 600;
p3.x = 600; p3.y = 0;

draw_line(p1,p2,bleu);
draw_line(p2,p3,blanc);
draw_line(p3,p1,rouge);

}

int main()
{
init_graphics(1000,600);

POINT p1,p2,p3;

dessine_triangle(p1, p2, p3);

wait_escape(0);
exit(0);	
}


