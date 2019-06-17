#include <uvsqgraphics.h>

int main()
{
init_graphics(1000,600);

POINT T[10];

int i;

for(i=0; i<10; i++)
 {
	T[i]=wait_clic();
	draw_fill_circle(T[i],10,rouge);

}

for(i=9; i>=0; i--)
 {
	wait_clic();
	draw_fill_circle(T[i],10,noir);
}
wait_escape(0);
exit(0);	
}

