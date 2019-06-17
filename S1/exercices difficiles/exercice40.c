#include <uvsqgraphics.h>
POINT P,p,P1;
COULEUR courante;
int i;
void dessine_couleurs()
{
P.x=550; P.y=50;
p.x=600; p.y=0;
draw_fill_rectangle(p,P,rouge);

P.x=550; P.y=100;
p.x=600; p.y=50;
draw_fill_rectangle(p,P,vert);

P.x=500; P.y=50;
p.x=550; p.y=0;
draw_fill_rectangle(p,P,jaune);

P.x=500; P.y=100;
p.x=550; p.y=50;
draw_fill_rectangle(p,P,blue);
	
}

void dessine_cercle()
{

for(i=0;i<20;i++)
{
P1=wait_clic();
if((P1.x>500) && (P1.x<550) && (P1.y<100) && (P1.y>50))
{
courante=bleu;	
}	

else if((P1.x>550) && (P1.x<600) && (P1.y<50) && (P1.y>0))
{
courante=rouge;
}	

else if((P1.x>500) && (P1.x<550) && (P1.y<50) && (P1.y>0))
{
courante=jaune;
}	

else if((P1.x>550) && (P1.x<600) && (P1.y<100) && (P1.y>50))
{
courante=vert;
}	
else
{
draw_fill_circle(P1,10,courante);
}
p=wait_clic();
draw_fill_circle(p,10,courante);
}
}

int main()
{
init_graphics(600,600);

dessine_couleurs();
dessine_cercle();
wait_escape(0);
exit(0);	
}

