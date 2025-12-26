#include <stdio.h>
#include <stdlib.h>

#include "lire.h"

int main()
{
    char nomComplet[100];

    printf("Quel est votre nom complet ? : ");
    lire(nomComplet, 100);
    printf("Vous etes %s\n\n", nomComplet);

    return 0;
}