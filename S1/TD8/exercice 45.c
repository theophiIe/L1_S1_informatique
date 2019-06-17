#include <uvsqgraphics.h>
POINT centre, centre_precedent;
POINT a;

void efface_affiche()
{
centre_precedent=centre;
draw_fill_circle(centre_precedent,30,noir);
}

void plus_ou_moins(POINT p)
{
a=wait_clic();
if(a.y>=200)
{
efface_affiche();
centre.y = centre.y + 2;
draw_fill_circle(centre,30,blue);	
}

else if (a.y<200)
{
efface_affiche();
centre.y =centre.y - 2;
draw_fill_circle(centre,30,blue);

}
}


int main()
{
POINT p1;
int i;
init_graphics(400,400);

centre_precedent.x = 0;
centre_precedent.y = 0;

centre.x=200;
centre.y=200;

for (i=0 ; i<20; i++)
{

draw_fill_circle(centre,30,blue);

plus_ou_moins(p1);
}
wait_escape();
exit(0);
}
