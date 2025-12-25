#include <stdio.h>
#include <stdlib.h>

int main() {
    int tableau[4];

    tableau[0] = 10;
    tableau[1] = 25;
    tableau[2] = 40;
    tableau[3] = 290;

    for (int i = 0; i < 4; i++) {
        printf("tableau[%d] = %d\n", i, tableau[i]);
    }

    return 0;
}