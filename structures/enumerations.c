#include <stdio.h>
#include <stdlib.h>

typedef enum Volume Volume; 

enum Volume {
    FAIBLE = 10,
    MOYEN = 50,
    FORT = 100
};

int main() {
    Volume musique = MOYEN;
    printf("%d", musique);

    return 0;
}