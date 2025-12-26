#include <stdio.h>
#include <stdlib.h>

#include "afficherliste.h"

void afficherListe(Liste *liste) {
    if (liste == NULL) {
        exit(EXIT_FAILURE);
    }

    Element *actuel = liste -> premier;

    do
    {
        printf("%d -> ", actuel -> nombre);
        actuel = actuel -> suivant;
    } while (actuel != NULL);
    printf("NULL\n");
    
}