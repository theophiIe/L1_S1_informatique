#include <uvsqgraphics.h>

int main()
{
init_graphics(512,512);
int i;
POINT t[20];

int a[20];

for(i=0;i<20;i++)
{
t[i].x=alea_int(512);
t[i].y=alea_int(512);
a[i]=alea_int(50);

draw_circle(t[i],a[i],darkorange);

}

wait_escape(0);
exit(0);
}

