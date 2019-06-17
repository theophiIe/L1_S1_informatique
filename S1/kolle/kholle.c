#include <uvsqgraphics.h>

POINT T[10];
POINT A[10];
int i;

void draw_moon()
{

for(i=0; i<10; i++)
 {
	T[i]=wait_clic();
	draw_fill_circle(T[i],30,jaune);
	A[i].x=T[i].x + 10;
	A[i].y=T[i].y + 10;
    draw_fill_circle(A[i],30,noir);
}
}
void efface()
{
for(i=9; i>=0; i--)
 {
	wait_clic();
	draw_fill_circle(T[i],30,noir);
	draw_fill_circle(A[i],30,noir);
}
}

int main()
{
init_graphics(600,400);

draw_moon();
efface();
wait_escape(0);
exit(0);
}
