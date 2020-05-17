#include <uvsqgraphics.h>

int main()
{
init_graphics(512,512);
POINT p,p1;
int i,j;

for(i=0;i<256;i++)
{
for(j=0;j<256;j++)
{

p.x=2*i; p.y=2*j;
p1.x=2+2*i; p1.y=2*j+2;


draw_fill_rectangle(p,p1,couleur_RGB(i,0,255-j));	
}}
wait_escape(0);
exit(0);
}

