#include <uvsqgraphics.h>

int main()
{
init_graphics(900,600);

POINT p, p1, P;

p.y=100 ; p.x=lire_entier_clavier();
write_ln();
	draw_fill_circle(p,5,rouge);
p1.y=100; p1.x=lire_entier_clavier();		
	draw_fill_circle(p1,5,rouge);

	draw_line(p,p1,blue);

P.x= (p1.x+p.x)/2;
P.y=200;
	draw_line(p,P,blue);
	draw_line(p1,P,blue);

	draw_fill_circle(P,5,rouge);

wait_escape();
exit(0);
}



