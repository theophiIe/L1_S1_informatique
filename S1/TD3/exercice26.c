#include <uvsqgraphics.h>
int main () 
{
  
init_graphics (800,600);
 
POINT p,p1,P;

	p.x=200; p.y=100;
	p1.x=600; p1.y=500; 
	draw_rectangle(p,p1,jaune);

int i;
	
for(i=0; ; i++)
{
	P=wait_clic();	
if (P.x>200 && P.y>100 && P.x<600 && P.y<500 && (i%2!=0))
{
	p.x=200; p.y=100;
	p1.x=600; p1.y=500; 
	draw_fill_rectangle(p,p1,noir);
	p.x=200; p.y=100;
	p1.x=600; p1.y=500; 
	draw_rectangle(p,p1,jaune);
}
else if (P.x>200 && P.y>100 && P.x<600 && P.y<500 && (i%2==0))
{
	p.x=200; p.y=100;
	p1.x=600; p1.y=500; 
	draw_fill_rectangle(p,p1,jaune);
}

else
{
	wait_escape(0);
	exit(0); 
}
}

 wait_escape(0);
 exit(0); 
}





