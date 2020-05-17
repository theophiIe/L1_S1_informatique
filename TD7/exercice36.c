#include <uvsqgraphics.h>

void carre(POINT centre, int largeur,COULEUR c)
{
POINT p, P, P1;

p=wait_clic();

P.x=(p.x-largeur);	P.y=p.y-largeur;
P1.x=(p.x+largeur);	P1.y=p.y+largeur;

	draw_rectangle(P,P1,c);

P.x = p.x + largeur;	P.y = p.y + largeur;
P1.x = p.x - largeur;	P1.y = p.y - largeur;

	draw_line(P,P1,c);

P.x = p.x + largeur;	P.y = p.y - largeur;
P1.x = p.x - largeur;	P1.y = p.y + largeur;

	draw_line(P,P1,c);

}


int main()
{
init_graphics(600,600);

POINT P;

carre(P,100,vert);

wait_escape(0);
exit(0);	
}
