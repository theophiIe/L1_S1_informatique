#include <uvsqgraphics.h>
int main()
{
init_graphics(900,900);
POINT p,p1,a,a1;
int i;
a.x=300; a.y=0;
a1.x=300;a1.y=900;
draw_line(a,a1,blanc);

a.x=600; a.y=0;
a1.x=600;a1.y=900;
draw_line(a,a1,blanc);

for(i=0;i<20;i++)
{
p=wait_clic();
draw_fill_circle(p1,30,black);
if(p.x<300)
{
draw_fill_circle(p,30,blue);	
p1=p;
}
else if(p.x<600 && p.x>300)
{
draw_fill_circle(p,30,blanc);	
p1=p;
}
else if (p.x>600)
{
draw_fill_circle(p,30,rouge);	
p1=p;
}
}
wait_escape();
exit(0);
}

