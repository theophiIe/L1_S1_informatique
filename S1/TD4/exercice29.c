#include <uvsqgraphics.h>

int main()
{
init_graphics(1000,600);

POINT p,p1,P;
p.x=0; p.y=0;
p1.x=10;p1.y=10;
draw_fill_rectangle(p,p1,rouge);
int i;

for(i=0;;i++)
{
P=wait_clic();
if(P.x<10 && P.y<10)
{
	wait_escape(0);
	exit(0);
}

else
{
		draw_fill_circle(P,50,blue);
}
}
wait_escape(0);
exit(0);	
}

