#include <stdio.h>
#include <stdlib.h>

int main()
{
    char tab[10];
    char tabVoy[10];
    char tabCons[10];
    int Nv = 0;
    int Nc = 0;
    int count = 0;

    for(int n = 0; n < 10; n++)
    {
        printf("Entrez le caractere numero %d\n", n+1);
        fflush(stdin);
        scanf("%char", &tab[n]);
        if(tab[n] == 'a' || tab[n] == 'e' || tab[n] == 'i' || tab[n] == 'o' || tab[n] == 'u' || tab[n] == 'y')
        {
            tabVoy[Nv] = tab[n];
            Nv++;
        }
        else
        {
            tabCons[Nc] = tab[n];
            Nc++;
        }
    }

    printf("Voici le tablau des 10 carateres :\n");

    for(count = 0; count < 10; count++)
    {
        printf("%c ", tab[count]);
    }
    printf("\n");

    printf("Voici le tablau des 10 carateres :\n");
    for(count = 0; count < 10; count++)
    {
        printf("%c ", tabVoy[count]);
    }
    printf("\n");

    printf("Voici le tablau des %d consonnes :\n", Nc);
    for(count = 0; count < 10; count++)
    {
        printf("%c ", tabCons[count]);
    }
    printf("\n");
    return 0;
}
