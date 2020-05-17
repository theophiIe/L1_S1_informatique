#include <uvsqgraphics.h>
int main()
{

init_graphics(1000,600);

POINT p,p1,P,p2;

p.x=500; p1.y=0;
p1.x=500; p1.y=600;

draw_line(p,p1,blanc);

int i ;
for(i=0;i<20;i++)
{
P=wait_clic();

if(P.x<500 )
{
draw_fill_circle(P,50,red);
}
else if (P.x>500)
{
p2=wait_clic();
if(p2.x>500)
{
draw_fill_circle(p2,50,blue);
}
}
}


wait_escape();
exit(0);
}
