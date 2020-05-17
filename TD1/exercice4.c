#include <uvsqgraphics.h>

int main()
{
init_graphics(900,600);

POINT p1,p;
p= wait_clic();
draw_fill_circle(p,25,bleu);

p1= wait_clic();
draw_fill_circle(p,25,noir);
draw_fill_circle(p1,25,bleu);





wait_escape();
exit(0);
}


