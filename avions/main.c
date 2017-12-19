#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main()
{
int a=0;

vol tab_vols[5]= {
    {8670,8,10,1004},
    {4650,10,25,203},
    {8010,13,20,804},
    {1020,17,10,90},
    {1135,18,55,200}
};

while (a<5)
{
    minute = tab_vols[a].minutes + calcul_minutes(tab_vols[a].duree);
    if (minute>60)
    {
        tab_vols[a].heure ++; //c'est la manière la plus ergonomique
    }
    heure = tab_vols[a].heure + calcul_heures(tab_vols[a].duree);
    /*on s'assure de pas dépasser 24h et le jour n'est pas important
    donc rien à stocker (on évite ainsi une boucle inutile) */
    printf ("Le vol numero %d partira a", tab_vols[a].numero_vol);
    printf (" %d", tab_vols[a].heure);
    printf ("h%d et arrivera a destination", tab_vols[a].minutes);
    printf (" a %d",heure%24);
    printf ("h%d\n",minute%60);
    //un peu plus long à faire mais le tout rentre sur un demi écran
    a++;
}

    return 0;
}
