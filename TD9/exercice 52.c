#include <uvsqgraphics.h>

int main()
{
init_graphics(512,512);
POINT p,p1;
int i;

for(i=0;i<256;i++)
{
p.x=2*i; p.y=0;
p1.x=2+2*i; p1.y=512;



draw_fill_rectangle(p,p1,couleur_RGB(i,0,0));	
}
wait_escape(0);
exit(0);	
}

