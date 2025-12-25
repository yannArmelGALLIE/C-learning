#include <stdio.h>
#include <stdlib.h>

int main() {
    char message[6] = "Salut\0";

    printf("%s", message);

    return 0;
}