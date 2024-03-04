#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    
    printf("Digite um número:\n");
    scanf("%d", &n);

    switch (n) {
        case 1 ... 100:
            printf("Este numero esta na faixa 1.\n");
            break;

        case 101 ... 200:
            printf("Este numero esta na faixa 2.\n");
            break;

        case 201 ... 300:
            printf("Este numero esta na faixa 3.\n");
            break;

        case 301 ... 400:
            printf("Este numero esta na faixa 4.\n");
            break;

        case 401 ... 500:
            printf("Este numero esta na faixa 5.\n");
            break;

        default:
            if (n > 500) {
                printf("Este numero esta acima de 500.\n");
            } else {
                printf("Numero nao esta em nenhuma faixa. Tem certeza que digitou o numero corretamente?\n");
            }
    }

    return 0;
}
