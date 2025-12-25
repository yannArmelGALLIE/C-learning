#include <stdio.h>
#include <stdlib.h>

struct personne
{
    char nom[100];
    char prenom[100];
    int age;
};

int main() {
    struct personne utilisateur;

    printf("Quel est votre nom ? : ");
    scanf("%s", utilisateur.nom);

    printf("Quel est votre prenom ? : ");
    scanf("%s", utilisateur.prenom);

    printf("Quel est votre age ? : ");
    scanf("%d", &utilisateur.age);

    printf("Nom : %s\nPrenom : %s\nAge : %d", utilisateur.nom, utilisateur.prenom, utilisateur.age);

    return 0;
}
