#include <stdio.h>
#include <stdlib.h>

void decoupeMinutes(int *pointeurHeure, int *pointeurMinute) {
    *pointeurHeure = *pointeurMinute / 60;
    *pointeurMinute = *pointeurMinute % 60;
}

int main() {
    int heure = 0;
    int minutes = 90;

    decoupeMinutes(&heure, &minutes);

    printf("%d heure et %d minutes", heure, minutes);

    return 0;
}