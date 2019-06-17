#include <uvsqgraphics.h>
int main () 
{
  
init_graphics (800,600);
 
POINT p,p1;
	
int i;	
for(i=0; i<10; i++)
{


if(i%2==0)
{
	p.x=200; p.y=100;
	p1.x=600; p1.y=500; 
	draw_fill_rectangle(p,p1,noir);
	p.x=200; p.y=100;
	p1.x=600; p1.y=500; 
	draw_rectangle(p,p1,jaune);
}
else
{
	p.x=200; p.y=100;
	p1.x=600; p1.y=500; 
	draw_fill_rectangle(p,p1,jaune);
}
wait_clic();
}

 wait_escape(0);
 exit(0); 
}




