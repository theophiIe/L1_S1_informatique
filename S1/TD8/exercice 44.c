#include <uvsqgraphics.h>
POINT P,p,A,p1,p2;
int i;
void quadrillage()
{
for(i=0;i<3;i++)
{

P.x=0; P.y=0+100*i;
p.x=300; p.y=P.y;
draw_line(p,P,vert);

P.x=0+100*i; P.y=0;
p.x=P.x; p.y=300;
draw_line(p,P,vert);
}
}



void dessine_action(POINT A) 
{
POINT centre;
A=wait_clic();
if(A.x<100 && A.y>200)
{
centre.x=50;
centre.y=250;
}

else if(A.x>100 && A.x<200 && A.y>200)
{
centre.x=150;
centre.y=250;
}

else if(A.x>200 && A.y>200) 
{
centre.x=250;
centre.y=250;
}

else if(A.x<100 && A.y<200 && A.y>100) 
{
centre.x=50;
centre.y=150;
}

else if(A.x>100 && A.x<200 && A.y<200 && A.y>100)
{
centre.x=150;
centre.y=150;
}

else if(A.x>200 && A.y<200 && A.y>100)
{
centre.x=250;
centre.y=150;
}

else if(A.x<100 && A.y<100)
{
centre.x=50;
centre.y=50;
}

else if(A.x>100 && A.x<200 && A.y<100)
{
centre.x=150;
centre.y=50;
}

else if(A.x>200 && A.y<100)
{
centre.x=250;
centre.y=50;
}
for(i=0;;i++)
{
int joueur1;
if(joueur1%2=0)
{	
draw_fill_circle(centre,20,orange);
}
else
{
p1.x=centre.x - 25; p1.y=centre.x - 25;
p2.x=centre.x + 25; p2.y=centre.x + 25;
draw_line(p1,p2,vert);

p1.x=centre.x -25; p1.y=centre.x+25 ;
p2.x=centre.x +25; p2.y=centre.x-25 ;
draw_line(p1,p2,vert);
}
}
}

int main()
{
A=wait_clic();
init_graphics(300,300);
quadrillage();
int i;

for(i=0; i<9; i++)
{
dessine_action(A);
}
wait_escape(0);
exit(0);	
}

