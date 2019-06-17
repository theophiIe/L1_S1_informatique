#include <uvsqgraphics.h>
int a_qui_de_jouer;
 
void quadrillage(){
POINT m,M;
m.x=0;m.y=0;
M.x=0;M.y=300;
while (m.x<301){
    draw_line(M,m,white);
    m.x=m.x+100;
    M.x=M.x+100;}
M.x=0;M.y=0;
while(m.y<301){
    draw_line(M,m,white);
    m.y=m.y+100;
    M.y=M.y+100;}
}
void dessine_action(POINT p){
POINT c,a,b;
if(p.x<=100 && p.y<=100){
    c.x=50; c.y=50;}
else if(p.x<=100 && 100<p.y && p.y<=200){
    c.x=50; c.y=150;}
else if(p.x<=100 && 200<p.y && p.y<=300){
    c.x=50;c.y=250;}
else if(100<p.x && p.x<=200 && p.y<=100){
    c.x=150;c.y=50;}
else if(100<p.x && p.x<=200 && 100<p.y && p.y<=200){
    c.x=150;c.y=150;}
else if(100<p.x && p.x<=200 && 200<p.y && p.y<=300){
    c.x=150;c.y=250;}
else if(200<p.x && p.x<=300 && p.y<=100){
    c.x=250;c.y=50;}
else if(200<p.x && p.x<=300 && 100<p.y && p.y<=200){
    c.x=250;c.y=150;}
else{
    c.x=250;c.y=250;}
if(a_qui_de_jouer==0){
    a.x=c.x-50;a.y=c.y-50;
    b.x=c.x+50;b.y=c.y+50;
    draw_line(a,b,white);
    a.x=c.x+50;a.y=c.y-50;
    b.x=c.x-50;b.y=c.y+50;
    draw_line(a,b,white);}
else if(a_qui_de_jouer==1){
    draw_fill_circle(c,25,white);}
}
int main(){
init_graphics(300,300);
quadrillage();
POINT p;
int i;
a_qui_de_jouer=0;
for(i=0;i<9;i++){
p=wait_clic();
dessine_action(p);
a_qui_de_jouer=1-a_qui_de_jouer;
}
wait_escape();
exit(0);
}
 
     
    
