#include <stdio.h>
#include <stdlib.h>

int triple(int nombre) {
    return nombre * 3;
}

int main() {
    int nombre = 0;
    printf("Ecrivez un nombre que vous voulez multiplier par 3: ");
    scanf("%d", &nombre);

    int resultat = triple(nombre);
    printf("Le triple de %d est %d", nombre, resultat);

    return 0;
}