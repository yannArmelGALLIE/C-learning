#include <stdio.h>
#include <stdlib.h>

int tailleMot(char mot[])
{
    int nombreLettres = 0;

    for (int i = 0; i > mot[i] != '\0'; i++)
    {
        nombreLettres++;
    }

    return nombreLettres;
}