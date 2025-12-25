#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreDeVies = 5; //nombre entier avec int "%d"
    unsigned int nombre = 10; //variable qui stocke que des nombres positifs "%u"
    const int nombreDeViesInoitiales = 8; //La variable garde la même valeur pendant toute la durée du programme

    printf("Il vous reste %d vies \nVous aviez au début %d vies", nombreDeVies, nombreDeViesInoitiales);

    return 0;
}