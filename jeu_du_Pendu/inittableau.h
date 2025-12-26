#include <stdio.h>
#include <stdlib.h>

void initTableau(int *lettreTrouvee, int taille)
{
    for (int i = 0; i < taille; i++)
    {
        lettreTrouvee[i] = 0;
    }
}