#include <stdio.h>
#include <string.h>

int main() {
    char nome[20][50]; // Array bidimensional para nomes
    int idade[20];
    char sexo[20];
    char nomeVelho[50]; // Variável para o nome do homem mais velho
    int homemVelho = 0;
    float somaidadeMulheres = 0;
    int contadorMulheres = 0;

    for (int i = 0; i < 2; i++) {
        printf("Informe o nome da pessoa : ");
        scanf("%s", nome[i]);

        printf("Informe a idade da pessoa : ");
        scanf("%d", &idade[i]);

        printf("Informe o sexo (M ou F) da pessoa : ");
        scanf(" %c", &sexo[i]);

        if (sexo[i] == 'F') {
            somaidadeMulheres += idade[i];
            contadorMulheres++;
        }

        if (sexo[i] == 'M' && idade[i] > homemVelho) {
            homemVelho = idade[i];
            strcpy(nomeVelho, nome[i]);
        }
    }

    printf("Nomes das pessoas:\n");
    for (int i = 0; i < 2; i++) {
        printf("%s\n", nome[i]);
    }

    if (homemVelho > 0) {
        printf("O nome do homem mais velho e a sua idade sao: %s e %d anos.\n", nomeVelho, homemVelho);
    } else {
        printf("Nenhum homem foi inserido.\n");
    }

    if (contadorMulheres > 0) {
        float mediaIdadeMulheres = somaidadeMulheres / contadorMulheres;
        printf("A media de idade das mulheres e: %.2f anos.\n", mediaIdadeMulheres);
    } else {
        printf("Nenhuma mulher foi inserida.\n");
    }

    return 0;
}
