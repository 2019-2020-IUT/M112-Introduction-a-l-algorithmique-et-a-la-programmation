#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

int nbChiffres(int nb)
{
    int count = 1;
    int ver;
    ver = nb;

    while(ver != 0)
    {
        ver = ver / (10 * count);
        count++;
    }
    if (count !=0)
    {
       count--;
    }

    return count;
}
