#include <uvsqgraphics.h>
int main () 
{
int taille, i;
taille=200;
init_graphics (taille,taille);
POINT p; 
for(i=1; i<10; i++)
{
p.x=100; p.y=100;

draw_circle(p,10*i,bleu);
}
 wait_escape(0);
 exit(0); 
}




