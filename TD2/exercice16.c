#include <uvsqgraphics.h>
  
 
int main () 
{
  
init_graphics (1000,500);

POINT p1, p2, p, P, P1;

p1.x=500;  p1.y=0;
p2.x=500;  p2.y=500; 
draw_line(p1,p2,blanc);
 
 
 p = wait_clic();
 P = wait_clic();
 P1 = wait_clic();
 
 if((p.x<500 && P.x<500 && P1.x<500) || (p.x>500 && P.x>500 && P1.x>500))
 {
	draw_fill_triangle(p,P, P1,bleu);
 }
 
 p = wait_clic();
 P = wait_clic();
 P1 = wait_clic();
 
 if((p.x<500 && P.x<500 && P1.x<500) || (p.x>500 && P.x>500 && P1.x>500)) 
 {
	draw_fill_triangle(p,P, P1,bleu);
 }

 wait_escape(0);
 exit(0);
   
   
 
}


