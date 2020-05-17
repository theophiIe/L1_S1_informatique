#include <uvsqgraphics.h>
int main () 
{
  
init_graphics (900,500);
 
int i, x, coul;
coul=red;
POINT p,P ; 
	for(i=0; i<10; i++)
 {
	x=-100;
	p.x= x+100*i; p.y= 0; 
	P.x= p.x; P.y= 500;
	draw_line(p,P,coul);

 if (i%2==0)
{	 
	coul=red;
}
else 
{	
	coul=blue; 
}
}
 wait_escape(0);
 exit(0); 
}



