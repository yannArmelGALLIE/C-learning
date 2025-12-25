#include <stdio.h>
#include <stdlib.h>

int main() {
    int compteur = 10;

    do {
        printf("Compteur: %d\n", compteur);
        compteur--;
    } while (compteur > 0);

    return 0;
}   
