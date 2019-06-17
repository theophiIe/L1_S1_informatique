#include <uvsqgraphics.h>
  
 
int main () 
{
  
init_graphics (1000,500);

POINT p1, p2, p;

p1.x=500;  p1.y=0;
p2.x=500;  p2.y=500; 
draw_line(p1,p2,blanc);
 
p1.x=0;  p1.y=250;
p2.x=1000;  p2.y=250; 
draw_line(p1,p2,blanc);
 
 p = wait_clic();

 
 if((p.x<500 && p.y>250) || (p.x>500 && p.y<250))
 {
	draw_fill_circle(p,50,bleu);
 }
 
else
{
	draw_fill_circle(p,50,rouge);
 }

 wait_escape(0);
 exit(0);
   
   
 
}



