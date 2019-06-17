#include <uvsqgraphics.h>

void dessine_mickey(POINT centre,int largeur,COULEUR c)
{

POINT P, P1, P2;
P=wait_clic();
draw_fill_circle(P,largeur,c);

P1.x = P.x + largeur ;  P1.y = P.y + largeur;
largeur=largeur/2;
draw_fill_circle(P1,largeur,c);

P2.x = P.x - largeur*2 ; P2.y = P1.y;

draw_fill_circle(P2,largeur,c);
largeur=largeur*2;
draw_circle(P,largeur,noir);
}

int main()
{
init_graphics(1000,600);
POINT P;
int i;
for(i=0;;i++)
{
dessine_mickey(P,20,orange);
}

wait_escape(0);
exit(0);	
}



