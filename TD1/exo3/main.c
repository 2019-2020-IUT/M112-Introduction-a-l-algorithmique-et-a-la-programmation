#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab[10];
    char voy;
    int count = 0;
    int total = 0;

    for(int n = 0; n < 10; n++)
    {
        printf("Entrez le caractere numero %d\n", n+1);
        fflush(stdin);
        scanf("%char", &tab[n]);
        if(tab[n] == 'a' || tab[n] == 'e' || tab[n] == 'i' || tab[n] == 'o' || tab[n] == 'u' || tab[n] == 'y')
        {
            count++;
        }
        total++;
    }

    printf("Il y a %d caracteres qui ont ete saisis au clavier.\n", total);
    printf("Il y a %d voyelles qui ont ete saisis au clavier.\n", count);
    return 0;
}
