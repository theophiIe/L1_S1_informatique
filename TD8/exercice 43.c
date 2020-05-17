#include <uvsqgraphics.h>
int haut_ou_bas, gauche_ou_droite, OU_CA;
void qui_dit_ou_c_est(POINT p)
{

if(p.y<200)
{
haut_ou_bas=0;
}

else
{
haut_ou_bas=1;
}

if(p.x<200)
{
gauche_ou_droite=0;
}

else
{
gauche_ou_droite=1;
}

}

void calcul_OU_CA()
{
if(haut_ou_bas==0 && gauche_ou_droite==0)
{
OU_CA=0;
}

else if(haut_ou_bas==0 && gauche_ou_droite==1)
{
OU_CA=1;
}

else if(haut_ou_bas==1 && gauche_ou_droite==0)
{
OU_CA=2;
}

else if(haut_ou_bas==1 && gauche_ou_droite==1)
{
OU_CA=3;
}
}

void dessine_cercle_couleur(POINT centre)
{

if(OU_CA==0)
{

draw_fill_circle(centre,10,bleu);
}
else if(OU_CA==1)
{
draw_fill_circle(centre,10,rouge);

}
else if(OU_CA==2)
{
draw_fill_circle(centre,10,vert);

}
else if(OU_CA==3)
{

draw_fill_circle(centre,10,jaune);
}

}

int main()
{
int i;
init_graphics(400,400);
for (i=0; i<20; i++)
{
POINT p;	
p=wait_clic();
qui_dit_ou_c_est(p);
calcul_OU_CA();
dessine_cercle_couleur(p);
}

wait_escape(0);
exit(0);	
}

