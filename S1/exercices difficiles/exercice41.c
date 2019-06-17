#include <uvsqgraphics.h>
POINT p;

void pixel(COULEUR color)
{
draw_pixel(p,color);
}

void dessine_ellipse(POINT f1, POINT f2, int dist, COULEUR c)
{

if(distance(p,f1)+distance(p,f2)==dist)
{pixel(bleu);
}
}
int main()
{
POINT f1,f2;
init_graphics(600,600);
dessine_ellipse(f1,f2,10,vert);

wait_escape(0);
exit(0);	
}



