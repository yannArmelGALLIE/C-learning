// D'abord, créez une fonction somme Tableau qui renvoie la somme des valeurs contenues dans le tableau
// Ensuite, créez une fonction moyenne Tableau qui calcule et renvoie la moyenne des valeurs.

#include <stdio.h>
#include <stdlib.h>

int sommeTableau(int *tableau, int tailleTableau)
{
    int resultat = 0;

    for (int i = 0; i < tailleTableau; i++)
    {
        resultat += tableau[i];
    }

    return resultat;
}

float moyenneTableau(int *tableau, int tailleTableau)
{
    int somme = sommeTableau(tableau, tailleTableau);

    float moyenne = (float)somme / (float)tailleTableau;

    return moyenne;
}

int main()
{
    int tableau[4] = {10, 25, 100, 290};

    int somme = sommeTableau(tableau, 4);
    float moyenne = moyenneTableau(tableau, 4);

    printf("La somme des valeurs contenues dans le tableau est : %d\n", somme);
    printf("La moyenne des valeurs contenues dans le tableau est : %.2f", moyenne);

    return 0;
}