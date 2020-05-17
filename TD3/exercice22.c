#include <uvsqgraphics.h>
int main () 
{
  
init_graphics (900,500);
 
int i, x, y;

POINT p,P ; 
	for(i=0; i<10; i++)
 {
	x=-100;
	p.x= x+100*i; p.y= 0; 
	P.x= p.x; P.y= 500;
	draw_line(p,P,blanc);
 
	y=0;
	p.x= 0; p.y= y+100*i; 
	P.x= 900; P.y= p.y;
	draw_line(p,P,blanc);
	 
}
 wait_escape(0);
 exit(0); 
}

