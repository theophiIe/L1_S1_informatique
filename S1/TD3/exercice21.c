#include <uvsqgraphics.h>
int main () 
{
  
init_graphics (900,500);
 
int i;
POINT p,P ; 
for(i=0; i<10; i++)
 {

int x;
x=0;
p.x= x+100*i; p.y= 0; 
P.x= p.x; P.y= 500;
draw_line(p,P,blanc);


	 
}
 wait_escape(0);
 exit(0); 
}
