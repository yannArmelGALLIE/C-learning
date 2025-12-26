#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#include "taillemot.h"
#include "inittableau.h"
#include "gagne.h"
#include "lirecaractere.h"
#include "recherchelettre.h"

int main()
{
    char motSecret[] = "ROUGE";
    char lettre = 0;
    int coupsRestants = 10;

    int nombreLettres = tailleMot(motSecret);

    int *lettreTrouvee = NULL;
    lettreTrouvee = malloc(nombreLettres * sizeof(int));

    do
    {
        printf("\n\nIl vous reste %d coups a jouer", coupsRestants);
        printf("\nQuel est le mot secret ? ");

        for (int i = 0; i < nombreLettres; i++)
        {
            if (lettreTrouvee[i])
            {
                printf("%c", motSecret[i]);
            }
            else
            {
                printf("*");
            }
        }

        printf("\nProposez une lettre : ");
        lettre = lireCaractere();

        if (!rechercheLettre(lettre, motSecret, lettreTrouvee))
        {
            coupsRestants--;
        }
    } while (coupsRestants > 0 && !gagne(lettreTrouvee, nombreLettres));

    if (gagne(lettreTrouvee, nombreLettres))
        printf("\n\nGagne ! Le mot secret etait bien : %s", motSecret);
    else
        printf("\n\nPerdu ! Le mot secret etait : %s", motSecret);

    free(lettreTrouvee);

    return 0;
}