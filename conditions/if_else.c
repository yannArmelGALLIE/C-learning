#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    == est égale à
    > est supérieur à
    < est inférieur à
    >= est supérieur ou égal à
    != est différent de
    */

    /*
    && et
    || ou
    ! non
    */

    int age = 0;
    int condition = 0;
    printf("Quel age avez-vous ? ");
    scanf("%d", &age);

    condition = age >= 18;

    if (condition)
    {
        printf("Vous etes majeur !");
    }
    else
    {
        printf("Vous etes mineur !");
    }

    return 0;
}