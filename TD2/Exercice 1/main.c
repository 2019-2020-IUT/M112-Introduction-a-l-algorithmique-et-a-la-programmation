#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int main()
{
    int nb;
    int resu;

    do{
        printf("Entrer un entier different de 0 ou 1\n");
        scanf("%d", &nb);
        if(nb == 0 || nb == 1)
        {
            printf("Erreur, veuillez entrer un entier different de 0 ou 1\n\n");
        }

    }while(nb <=1);

    resu = PPD(nb);

    printf("Le plus petit diviseur de %d est %d\n\n", nb, resu);



    return 0;
}
