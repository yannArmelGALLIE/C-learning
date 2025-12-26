#include <stdio.h>
#include <stdlib.h>

#include "liste.h"
#include "initialisation.h"
#include "insertion.h"
#include "suppression.h"
#include "afficherliste.h"

int main()
{
    Liste *maListe = initialisation();

    insertion(maListe, 4);
    insertion(maListe, 6);

    suppression(maListe);

    afficherListe(maListe);

    return 0;
}