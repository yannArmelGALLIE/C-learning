#include <stdio.h>
#include <stdlib.h>

#include "insertion.h"

void insertion(Liste *liste, int nvNombre)
{
    Element *nouveau = malloc(sizeof(*nouveau));

    if (liste == NULL || nouveau == NULL)
    {
        exit(EXIT_FAILURE);
    }

    nouveau -> nombre = nvNombre;
    nouveau -> suivant = liste -> premier;
    liste -> premier = nouveau;
}