// strlen pour calculer la longueur d'une chaîne.
// strcpy pour copier une chaîne dans une autre.
// strcat pour concaténer 2 chaînes.
// strcmp pour comparer 2 chaînes.
// strchr pour rechercher un caractère.
// strpbrk pour rechercher le premier caractère de la liste.
// strstr pour rechercher une chaîne dans une autre.
// sprintf pour écrire dans une chaîne

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int lire(char *texte, int longueur)
{
    char *position = NULL;

    if (fgets(texte, longueur, stdin) != NULL)
    {
        position = strchr(texte, '\n');

        if (position != NULL)
        {
            *position = '\0';
        }

        return 1;
    }
    else
    {
        return 0;
    }
}