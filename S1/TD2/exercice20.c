#include <uvsqgraphics.h>
  
 
int main () 
{
  
init_graphics (900,500);

POINT  p;
 
 p = wait_clic();

 
 if((p.x%2==0) && (p.y%2==0))
 {
	draw_fill_circle(p,50,rouge);
 }
 
 else if((p.x%2==0) && (p.y%2!=0))
 {
	draw_fill_circle(p,50,bleu);
 }
  else if((p.x%2!=0) && (p.y%2==0))
 {
	draw_fill_circle(p,50,jaune);
 }

  else
 {
	draw_fill_circle(p,50,vert);
 }
 

 wait_escape(0);
 exit(0);
   
   
 
}






