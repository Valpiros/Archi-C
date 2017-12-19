#include <stdio.h>
#include <stdlib.h>

typedef struct {char c;
                int x;
                int y;
                }s_point;

s_point inverse (s_point *a);

int main()
{
s_point a;
printf("Nom du point : "); scanf("%c",&a.c);
printf("Coordonnee : x = "); scanf("%d",&a.x);
printf("Coordonnee : y = "); scanf("%d",&a.y);
a = inverse (&a);
printf ("Point inverse : %c = (%d;%d)\n",a.c,a.x,a.y);
    return 0;
}

s_point inverse (s_point *a)
{
a->x = -(a->x);
a->y = -(a->y);
    return *a;
}
