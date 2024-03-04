#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{

    int senha_valida = 12345;
    int senha;

        printf("digite a senha:\n");
            scanf("%d", &senha);

    if (senha == senha_valida)
    {
        printf("acesso permitido");
    }

    else
    {
        printf("acesso negado");
    }

    return 0;
}