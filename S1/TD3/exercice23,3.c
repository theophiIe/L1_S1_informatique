#include <uvsqgraphics.h>
int main () 
{
  
init_graphics (900,500);
 
int i, x, y, delta;
delta=lire_entier_clavier();
POINT p,P ; 
	for(i=0;; i++)
 {
	x=-delta;
	p.x= x+delta*i; p.y= 0; 
	P.x= p.x; P.y= 500;
	draw_line(p,P,blanc);
 
	y=-delta;
	p.x= 0; p.y= y+delta*i; 
	P.x= 900; P.y= p.y;
	draw_line(p,P,blanc);
	 
}
 wait_escape(0);
 exit(0); 
}



