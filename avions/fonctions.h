#ifndef FONCTIONS_H_INCLUDED
#define FONCTIONS_H_INCLUDED

int calcul_heures(int);
int calcul_minutes(int);

int minute;
/*le min est déjà associé à quelque chose j'ai l'impression*/
int heure;

typedef struct {
    int numero_vol;
    char heure;
    char minutes;
    int duree;
} vol;

#endif // FONCTIONS_H_INCLUDED
