#include <stdio.h>
#include <stdlib.h>

int gagne(int* lettreTrouvee, int nombreLettres) {
    int joueurGagne = 1;

    for (int i = 0; i < nombreLettres; i++) {
        if (lettreTrouvee[i] == 0) {
            joueurGagne = 0;
        } 

        return joueurGagne;
    }
}