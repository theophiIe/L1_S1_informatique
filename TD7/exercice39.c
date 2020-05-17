#include <uvsqgraphics.h>
POINT p,P;
int i;

void dessine_line_H(COULEUR c)
{
for(i=0;i<6;i++)
{
P.x=0+100*i; P.y=0;
p.x=P.x; p.y=600;
draw_line(p,P,c);
}
}

void dessine_line_V(COULEUR c)
{
for(i=0;i<6;i++)
{
P.x=0; P.y=0+100*i;
p.x=600; p.y=P.y;
draw_line(p,P,c);
}
}

void dessine_quadrillage(COULEUR c)
{
wait_clic();
for(i=0;i<6;i++)
{
P.x=0; P.y=0+100*i;
p.x=600; p.y=P.y;
draw_line(p,P,c);
P.x=0+100*i; P.y=0;
p.x=P.x; p.y=600;
draw_line(p,P,c);
}
}

int main()
{
init_graphics(600,600);

dessine_line_H(vert);
dessine_line_V(orange);
dessine_quadrillage(jaune);

wait_escape(0);
exit(0);	
}



