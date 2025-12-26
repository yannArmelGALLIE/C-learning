// Ouvrez un fichier avec  fopen
// Fermez un fichier avec fclose
// fputc écrit un caractère dans le fichier (UN SEUL caractère à la fois).
// fputs écrit une chaîne dans le fichier.
// fprintf écrit une chaîne formatée dans le fichier.
// fgetc lit un caractère.
// fgets lit une chaîne.
// fscanf lit une chaîne "formatée".
// "r"  : lecture seule.
// "w"  : écriture seule.
// "a"  : mode d'ajout. Vous écrirez dans le fichier, en partant de la fin du fichier
// "a+"  : ajout en lecture / écriture à la fin
// "r+"  : lecture et écriture
// "w+"  : lecture et écriture, avec suppression du contenu au préalable

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

int main() {
    FILE *fichier = NULL;
    char message[MAX] = "";
    char rajout[] = "J'espre que vous allez bien.";

    fichier = fopen("text.txt", "a+");

    if (fichier != NULL) {
        fputs(rajout, fichier);
        rewind(fichier);
        fgets(message, MAX, fichier);
        printf("%s", message);
        fclose(fichier);
    }

    return 0;
}