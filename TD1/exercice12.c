#include <uvsqgraphics.h>

int main()
{
init_graphics(900,600);

POINT p,p1,p2;
//cercle
p=wait_clic();
draw_circle(p,100, bleu);
//trait du haut
p1.x=p.x-50;
p1.y=p.y+86;
p2.x=p.x+50;
p2.y=p.y+86;
draw_line(p1,p2,red);
//coté haut gauche
p1.x=p.x-100;
p1.y=p.y;
p2.x=p.x-50;
p2.y=p.y+86;
draw_line(p1,p2,red);
//coté haut droit
p1.x=p.x+50;
p1.y=p.y+86;
p2.x=p.x+100;
p2.y=p.y;
draw_line(p1,p2,red);
//trait du bas
p1.x=p.x-50;
p1.y=p.y-86;
p2.x=p.x+50;
p2.y=p.y-86;
draw_line(p1,p2,red);
//coté bas gauche
p1.x=p.x-50;
p1.y=p.y-86;
p2.x=p.x-100;
p2.y=p.y;
draw_line(p1,p2,red);
//coté bas droit
p1.x=p.x+100;
p1.y=p.y;
p2.x=p.x+50;
p2.y=p.y-86;
draw_line(p1,p2,red);


wait_escape();
exit(0);
}
