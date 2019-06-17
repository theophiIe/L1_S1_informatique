#include <uvsqgraphics.h>

void dessine_damier()
{
	POINT p1, p2;
	p1.x= 0; p1.y=0;
	p2.x= 50; p2.y= 50;
	int i= 1;
	COULEUR c= white;
	
	
	while(p2.y<=400)
	{
		draw_fill_rectangle(p1, p2, c);
		p1.x= p1.x+50;
		p2.x= p2.x+50;
		i++;
		
		if(p2.x>400)
		{
			p2.y= p2.y+50;
			p1.y= p1.y+50;
			p1.x=0;
			p2.x=50;
			i++;
		}
		
		if(i%2==0)
		{
			c= black;
		}
		if(i%2!=0)
		{
			c= white;
		}
	}
	
}

int main()
{
init_graphics(400,400);
dessine_damier();
wait_escape();
exit(0);
}


