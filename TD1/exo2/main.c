#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*Exercice 2 - Partie 1*/
    double tab[4] = {10, 20, -15, 30};
    double total = 0;

    /*Exercice 2 - Partie 2*/
    double tab2[10];
    double total2 = 0;

    /*Exercice 2 - Partie 1*/

    for(int i = 0; i < 4; i++)
    {
        total = total + tab[i];
    }
    printf("Voici la reponse de l'exercice 1 :\n");
    printf("%lf\n\n\n", total);

    /*Exercice 2 - Partie 2*/

    for(int i = 0; i < 10; i++)
    {
        printf("Entrez la valeur %d du tableau\n", i+1);
        scanf("%lf", &tab2[i]);
        total2 = total2 + tab2[i];
    }
    printf("Voici la reponse de l'exercice 2 :\n");
    printf("%lf\n\n\n", total2);
    return 0;


}
