#include <uvsqgraphics.h>
 
void dessineuntruc()
{
POINT p1, p2, p, P;

p1.x=500;  p1.y=0;
p2.x=500;  p2.y=500; 
draw_line(p1,p2,blanc);
 
int i;
 
 p = wait_clic();
 draw_fill_circle(p,50,rouge); 
for(i=0;i<10;i++)
{
 if(p.x<500)
 {
	p.x=1000-p.x;
	draw_fill_circle(p,50,rouge);  
 }
 
else 
{
	p.x=(p.x-1000)*(-1);
	draw_fill_circle(p,50,blue);
 }
 
 
P = wait_clic();
	draw_fill_circle(p,50,rouge); 
if(P.x<500)
 {	
	P.x=1000-P.x;
	draw_fill_circle(P,50,red);  
 }
 
 else 
 {	draw_fill_circle(p,50,rouge); 
	P.x=(P.x-1000)*(-1);
	draw_fill_circle(P,50,red);
 }


}
}
int main () 
{
  
init_graphics (1000,500);

dessineuntruc();

 wait_escape(0);
 exit(0);
   
   
 
}
