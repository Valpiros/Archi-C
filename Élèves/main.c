#include <stdio.h>
#include <stdlib.h>
#include "structures.h"

int main()
{
    eleve tab[20];

    int a = 0;              // numéro_eleve actuel
    int choix;              // Permet d'utiliser le menu
    int b;                  // sert à survoler le tableau
    int coef;               // utilisé pour la moyenne générale
    float moyenne;          // utilisé pour la moyenne générale ainsi que les moyennes perso
    int fin = 0;            // permet de quitter le programme
    float best;
    int numero; // utilisés pour afficher l'étudiant avec la moyenne la plus élevée

    while (fin==0)
    {
        printf("Menu :\n");
        printf("1- Ajouter un eleve\n");
        printf("2- Supprimer un eleve\n");
        printf("3- Afficher le dernier eleve ajoute\n");
        printf("4- Afficher la moyenne generale\n");
        printf("5- Afficher l'eleve avec la moyenne la plus elevee\n");
        printf("6- Fin du programme\n");
        printf("Entrez votre choix ici : ");
        scanf ("%d", &choix);
        printf("\n");

        switch (choix)
        {
        case 1 :



            printf("Nom : ");
            scanf("%s", tab[a].nom);
            printf("Prenom : ");
            scanf("%s", tab[a].prenom);
            printf("Age : ");
            scanf("%d",&tab[a].age);
            printf("Notes : ");
            scanf("%f %f %f %f %f",&tab[a].notes[0],&tab[a].notes[1],&tab[a].notes[2],&tab[a].notes[3],&tab[a].notes[4]);
            tab[a].numero_eleve = a+1;
            a++;
            printf ("Ajout effectue\n\n");
            break;

        case 2 :
            a--;
            tab[a].age=0;
            tab[a].nom[0]='_';
            tab[a].nom[1]='_';
            tab[a].nom[2]='_';
            tab[a].nom[3]='_';
            tab[a].nom[4]='_';
            tab[a].nom[5]='_';
            tab[a].nom[6]='_';
            tab[a].nom[7]='_';
            tab[a].nom[8]='_';
            tab[a].nom[9]='_';
            tab[a].prenom[0]='_';
            tab[a].prenom[1]='_';
            tab[a].prenom[2]='_';
            tab[a].prenom[3]='_';
            tab[a].prenom[4]='_';
            tab[a].prenom[5]='_';
            tab[a].prenom[6]='_';
            tab[a].prenom[7]='_';
            tab[a].prenom[8]='_';
            tab[a].prenom[9]='_';  /* pareil */
            tab[a].notes[0]=0;
            tab[a].notes[1]=0;
            tab[a].notes[2]=0;
            tab[a].notes[3]=0;
            tab[a].notes[4]=0;
            tab[a].numero_eleve=0;
            printf("Suppression effectuee\n\n");
            break;

        case 3 :
            a--;
            printf("Nom : %s\n",tab[a].nom);
            printf("Prenom : %s\n",tab[a].prenom);
            printf("Age : %d\n",tab[a].age);
            printf("Numero d'eleve : %d\n",tab[a].numero_eleve);
            printf("Notes : %.2f %.2f %.2f %.2f %.2f\n\n",tab[a].notes[0],tab[a].notes[1],tab[a].notes[2],tab[a].notes[3],tab[a].notes[4]);
            a++;
            break;

        case 4 :
            coef = 0;
            moyenne = 0;
            b = a;
            while (b>=0)
            {
                moyenne = tab[b].notes[0]+tab[b].notes[1]+tab[b].notes[2]+tab[b].notes[3]+tab[b].notes[4];
                coef += 5;
                b--;
            }
            moyenne = moyenne / coef;
            printf ("la moyenne generale est de : %.2f", moyenne);
            break;

        case 5 :
            b = a-1;
            best = 0;
            numero = a;
            while (b>=0)
            {
                moyenne = (tab[b].notes[0]+tab[b].notes[1]+tab[b].notes[2]+tab[b].notes[3]+tab[b].notes[4]) / 5;
                if (moyenne > best)
                {
                    best = moyenne;
                    numero = b;
                }
                b--;
            }
            printf("Le meilleur eleve est :\n");
            printf("Nom : %s\n",tab[numero].nom);
            printf("Prenom : %s\n",tab[numero].prenom);
            printf("Age : %d\n",tab[numero].age);
            printf("Numero d'eleve : %d\n",tab[numero].numero_eleve);
            printf("Notes : %.2f %.2f %.2f %.2f %.2f\n\n",tab[numero].notes[0],tab[numero].notes[1],tab[numero].notes[2],tab[numero].notes[3],tab[numero].notes[4]);
            printf("Sa moyenne est de : %d", best);
            break;

        case 6 :
            fin = 1;
            break;

        default :
            printf("je n'ai pas compris votre reponse, veuillez recommencer");
            break;
        }
    }

    return 0;
}
