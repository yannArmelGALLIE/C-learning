#include <stdio.h>
#include <stdlib.h>

int main() {
    int age = 19;
    int *pointeur = &age;

    printf("La variable age vaut : %d\n", *pointeur);
    printf("L'adresse de la variable age est : %d", pointeur);

    return 0;
}