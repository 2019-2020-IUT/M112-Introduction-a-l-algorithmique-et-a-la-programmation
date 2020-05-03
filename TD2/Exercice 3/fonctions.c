#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int fi(int nb)
{
    int UNm1;
    int UNm2;
    int UN;
    int i = 3;

    UNm2 = 1;
    UNm1 = 1;

    if (nb <= 2)
    {
        return 1;
    }

    while(i != nb)
    {
        UN = UNm1 + UNm2;
        UNm2 = UNm1;
        UNm1 = UN;
        i++;
    }
    return UN;
}
