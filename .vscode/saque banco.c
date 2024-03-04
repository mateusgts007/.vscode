
#include <stdio.h>
#include <stdlib.h>

int main()
{

    float valor_saque;

    printf("digite o valor do saque:\n");
    scanf("%f", &valor_saque);

    if (valor_saque == 270)
    {

        printf("serao entregues notas de :\n");
        printf("notas de 50: 5\n");
        printf("notas de 20: 2\n");
        printf("notas de 10: 0\n");
    }

    else if (valor_saque == 115)
    {
        printf("nao foi possivel sacar esse valor\n");
    }

    else if (valor_saque == 130)
    {
        printf("serao entregues notas de :\n");
        printf("notas de 50: 2\n");
        printf("notas de 20: 1\n");
        printf("notas de 10: 1\n");
    }
        if(valor_saque != 130 && valor_saque != 115 && valor_saque != 270){
            printf("valor invalido");
        }
    return 0;
}