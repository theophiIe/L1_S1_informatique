#include <uvsqgraphics.h>
  
 
int main () 
{
  
init_graphics (900,500);

POINT p1, p2, p;

p1.x=300;  p1.y=0;
p2.x=300;  p2.y=500; 
draw_line(p1,p2,blanc);
 
p1.x=600;  p1.y=0;
p2.x=600;  p2.y=500; 
draw_line(p1,p2,blanc);
 
 
 p = wait_clic();

 
 if(p.x<300)
 {
	draw_fill_circle(p,50,bleu);
 }
 
 else if(p.x>600)
 {
	draw_fill_circle(p,50,red);
 }
 
else
{
	draw_fill_circle(p,50,blanc);
 }
 
 p = wait_clic();

 
 if(p.x<300)
 {
	draw_fill_circle(p,50,bleu);
 }
 
 else if(p.x>600)
 {
	draw_fill_circle(p,50,red);
 }
 
else
{
	draw_fill_circle(p,50,blanc);
 }
 
 p = wait_clic();

 
 if(p.x<300)
 {
	draw_fill_circle(p,50,bleu);
 }
 
 else if(p.x>600)
 {
	draw_fill_circle(p,50,red);
 }
 
else
{
	draw_fill_circle(p,50,blanc);
 }
 

 wait_escape(0);
 exit(0);
   
   
 
}





