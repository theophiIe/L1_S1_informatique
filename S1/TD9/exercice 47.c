#include <uvsqgraphics.h>
int main()
{

init_graphics(1000,600);

POINT p,p1,P;

p.x=500; p1.y=0;
p1.x=500; p1.y=600;

draw_line(p,p1,blanc);

int i, s, a;
s=0; 
a=0;
for(i=0;i<20;i++)
{
P=wait_clic();
if(i==0)
{if(P.x<500)
{
s=s+1;
draw_fill_circle(P,50,red);
}
else if (P.x>500)
{
a=a+1;
draw_fill_circle(P,50,blue);
}

}
else{
if(P.x<500 && a!=0)
{
s=s+1;
draw_fill_circle(P,50,red);
}
else if (P.x>500 && s!=0)
{
a=a+1;
draw_fill_circle(P,50,blue);
}
}
}


wait_escape();
exit(0);
}
