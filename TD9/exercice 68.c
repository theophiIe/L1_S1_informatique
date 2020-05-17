#include <uvsqgraphics.h>

int main()
{
init_graphics(600,600);
int i;
POINT t[20],m;
int d;
m.x=m.y=600;
d=0;
for(i=0;i<20;i++)
{
t[i]=wait_clic();


draw_circle(t[i],20,rouge);

}

for(i=0;i<20;i++)
{
d[i] = distance (m,t[i]);	

draw_circle(t[i],20,noir);
}
wait_escape(0);
exit(0);
}
