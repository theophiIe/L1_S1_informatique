#include <uvsqgraphics.h>
POINT p1,p2,p3,p4;

void dessq1()
{}
void dessq2()
{}
void dessq3()
{}
void dessq4()
{}
void dessine_quadri(POINT p1,POINT p2,POINT p3,POINT p4,COULEUR c)
{

p1=wait_clic();
p2=wait_clic();
p3=wait_clic();
p4=wait_clic();

draw_line(p1,p2,vert); 

draw_line(p2,p3,bleu); 

draw_line(p3,p4,jaune); 

draw_line(p4,p1,c); 
}

int main()
{
init_graphics(600,600);
dessine_quadri(p1, p2, p3, p4, rouge);


wait_escape(0);
exit(0);	
}
