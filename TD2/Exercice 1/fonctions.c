#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int PPD(int nb)
{
    int i = 2;
    int ver = nb;

    while((ver % i) != 0)
    {
        i++;
    }
    return i;
}
