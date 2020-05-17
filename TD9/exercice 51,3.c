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

POINT retourne_case(POINT clic)
{
	POINT p;
	p.x= clic.x/50;
	p.y= clic.y/50;
	return p;
}

void dessine_piece(POINT piece)
{
	piece.x= piece.x*50 + 25;
	piece.y= piece.y*50 + 25;
	draw_fill_circle(piece, 25, blue);
}

POINT deplacement_cavalier(POINT p1, POINT p2)
{
	POINT p;
	p.x= p1.x - p2.x;
	p.y= p1.y - p2.y;
	if(p.x<0)
	{
		p.x= -p.x;
	}
	if(p.y<0)
	{
		p.y= -p.y;
	}
	
	return p;	
}

int main()
{
	init_graphics(400, 400);
	
	// variables
	
	int i=0;
	POINT p, p1, p2;
	p1.x=0; p1.y=0;
	
	// dessiner un damier
	
	dessine_damier();
	dessine_piece(p1);
	
	
	// retourner la case
	
	for(i=0; ; i++)
	{	
		p= wait_clic();
		p= retourne_case(p);
		p2= deplacement_cavalier(p, p1);
		
		if(p2.x == 1 && p2.y == 2)
		{
			dessine_damier();
			dessine_piece(p);
			p1= p;			
		}
		else if(p2.x == 2 && p2.y == 1)
		{
			dessine_damier();
			dessine_piece(p);
			p1= p;
		}
	}
	
	wait_escape();
	exit(0);	
}
