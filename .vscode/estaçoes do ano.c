#include <stdio.h>
#include <stdlib.h>

int main()
{

    int dia, mes;

    printf("digite qual e o dia atual:\n");
        scanf("%d", &dia);

    printf("digite qual e o mes atual:\n");
        scanf("%d", &mes);

    if ((dia == 22 && mes == 9 || mes == 10 || mes == 11))
    {
        printf("estamos na primavera");
    }

    else if ((dia == 21 && mes == 12 || mes == 1 || mes == 2))
    {
        printf("estamos no verao");
    }

    else if ((dia == 20 && mes == 3 || mes == 4 || mes == 5))
    {
        printf("estamos no outono");
    }

    else if ((dia == 20 && mes == 6 || mes == 7 || mes == 8))
    {
        printf("estamos no inverno");
    }

    else
    {
        printf("data invalida");
    }
    return 0;
}