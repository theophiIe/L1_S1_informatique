#include <uvsqgraphics.h>

int main()
{
	
init_graphics(1000,600);

POINT p, P;

int T[20], i, j, k;

for (i=0;i<20;i++)
{
T[i]=alea_int(100);
}
for (i=0;i<20;i++)
{
p.x=100+20*i; p.y=50;
P.x=100+20*i+19; P.y=50+3*T[i];

draw_fill_rectangle(p,P,bleu);
}

j=T[0];

for(i=0;i<20;i++)
{
if(T[i]>=j)
{
j=T[i];
p.x=100+20*i; p.y=50;
P.x=100+20*i+19; P.y=50+3*T[i];
}
}
draw_fill_rectangle(p,P,red);

k=T[0];

for(i=0;i<20;i++)
{
if(T[i]<=k)
{
k=T[i];
p.x=100+20*i; p.y=50;
P.x=100+20*i+19; P.y=50+3*T[i];
}
}
draw_fill_rectangle(p,P,vert);


wait_escape(0);
exit(0);	
}

