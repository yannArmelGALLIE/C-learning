#include <stdio.h>
#include <stdlib.h>

char* bonjour(char* nom) {
    static char message[100];
    snprintf(message, sizeof(message), "Bonjour %s!", nom);
    return message;
}

int main() {
    char nom [50];
    printf("Entrez votre nom: ");
    scanf("%49s", nom);

    char* message = bonjour(nom);
    printf("%s\n", message);

    return 0;
}