#include <uvsqgraphics.h>
int i;
POINT p, P, P1, P2;

void cercle_blue(int rayon)
{
P=wait_clic();

if(distance(p,P)<=rayon)
{
	draw_fill_circle(p,rayon,blue);
}
}

void cercle_blanc(int rayon)
{
P1=wait_clic();

if(distance(p,P1)<=rayon)
{
	draw_fill_circle(p,rayon,blanc);
}
}

void cercle_rouge(int rayon)
{
P2=wait_clic();

if(distance(p,P2)<=rayon)
{
	draw_fill_circle(p,rayon,rouge);
}
}

void dessine_cercle_couleur(int rayon)
{

p=wait_clic();
draw_fill_circle(p,rayon,rouge);


for(i=0;;i++)
{

 if (i%3==0)
 {
cercle_blue(100);
}
else if(i%3==1){
cercle_blanc(100);}

else {cercle_rouge(100);}

}
}

int main()
{
init_graphics(600,600);

dessine_cercle_couleur(100);

wait_escape(0);
exit(0);	
}



