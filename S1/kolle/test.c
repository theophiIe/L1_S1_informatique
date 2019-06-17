#include <uvsqgraphics.h>




int main()
{
init_graphics(512,512);
POINT p,p1;

p.x=0; p.y=0;
p1.x=512; p1.y=512;
COULEUR couleur_RGB(int r, int g, int b);
g=0; b=0; r=255;
int T[3];

draw_fill_rectangle(p,p1,couleur_RGB);	

wait_escape(0);
exit(0);	
}

