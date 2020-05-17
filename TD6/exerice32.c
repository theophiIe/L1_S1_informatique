#include <uvsqgraphics.h>

int main()
{
init_graphics(1000,600);
int i=0;
POINT T[10], p;

while(i<10)
{
T[i]=wait_clic();
draw_fill_circle(T[i], 10, red);
i++;
}

p=wait_clic();
while(i>0)
{
for(i=0;i<10; i++)	
{
if(distance(T[i], p)<=10)
{
	draw_fill_circle(T[i], 10,noir);
}

}	
p=wait_clic();
}

wait_escape(0);
exit(0);	
}


