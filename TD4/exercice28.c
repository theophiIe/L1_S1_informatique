#include <uvsqgraphics.h>
//ne marche pas
int main()
{
init_graphics(1000,600);

POINT p,p1,P;

p.x=500; p1.y=0;
p1.x=500; p1.y=600;

draw_line(p,p1,blanc);

int i ;
for(i=1;;i++)
{
P=wait_clic();

if(P.x<500 && i%5==0)
{
draw_fill_circle(P,50,blue);
}
else if (P.x>500 && i%5==0)
{
draw_fill_circle(P,50,red);
}

}
wait_escape(0);
exit(0);	
}
