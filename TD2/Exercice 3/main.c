#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nb;
    int resu;

    printf("Quelle valeur de la suite voulez vous afficher ?\n");
    scanf("%d", &nb);

    resu = fi(nb);
    printf("La %deme valeur de la suite est %d!", nb, resu);

    return 0;
}
