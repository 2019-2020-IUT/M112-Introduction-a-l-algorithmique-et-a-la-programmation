#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main()
{
    int nb;
    int resu;

    printf("Entrer un entier\n");
    scanf("%d", &nb);

    resu = nbChiffres(nb);

    if(resu < 10 && resu >= 0)
    {
        printf("Il y a %d chiffre dans %d", resu, nb);
    }
    else
    {
        printf("Il y a %d chiffres dans %d", resu, nb);
    }
    return 0;
}
