#include <stdio.h>
#include <stdlib.h>

struct coordonnees
{
    int x;
    int y;
};

void initialiserCoordonnees(struct coordonnees *pointeur) {
    pointeur -> x = 0;
    pointeur -> y = 0;
}

int main() {
    struct coordonnees monPoint;
    struct coordonnees *pointeur = &monPoint;

    monPoint.x = 10;
    monPoint.y = 20;

    printf("=== Avant initialiserCoordonnees ===\n");
    printf("x = %d\ny = %d\n", monPoint.x, monPoint.y);

    initialiserCoordonnees(pointeur);

    printf("=== Apres initialiserCoordonnees ===\n");
    printf("x = %d\ny = %d\n", monPoint.x, monPoint.y);

    return 0;
}
