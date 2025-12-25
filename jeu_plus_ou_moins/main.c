// L'ordinateur tire au sort un nombre entre 1 et 100.
// Il vous demande de deviner le nombre. Vous entrez donc un nombre entre 1 et 100.
// L'ordinateur compare le nombre que vous avez entré avec le nombre « mystère » qu'il a tiré au sort. Il vous dit si le nombre mystère est supérieur ou inférieur à celui que vous avez entré.
// Puis l'ordinateur vous redemande le nombre.
// … Et il vous indique si le nombre mystère est supérieur ou inférieur.
// Et ainsi de suite, jusqu'à ce que vous trouviez le nombre mystère.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombre_mystere = 0;
    int nombre_entre = 0;

    srand(time(NULL));
    nombre_mystere = (rand() % 100) + 1;

    printf("Devinez le nombre mystere : ");
    scanf("%d", &nombre_entre);

    do
    {
        if (nombre_entre < nombre_mystere)
        {
            printf("Le nombre mystere est superieur a celui que vous avez entre\n");
            printf("Essayez encore : \n");
            scanf("%d", &nombre_entre);
        }
        else if (nombre_entre > nombre_mystere)
        {
            printf("Le nombre mystere est inferieur a celui que vous avez entre\n");
            printf("Essayez encore : \n");
            scanf("%d", &nombre_entre);
        }
    } while (nombre_entre != nombre_mystere);

    printf("Vous avez devine le nombre mystere");

    return 0;
    
}