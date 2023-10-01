

#include <stdio.h>

int main() {
    int matriz1[100][200];
    double medias[100]; // Um array para armazenar as médias das linhas

    // Preenchendo a matriz com números inteiros
    for (int i = 0; i < 100; i++) {
        for (int j = 0; j < 200; j++) {
            printf("Informe o elemento Matriz[%d][%d]: ", i, j);
            scanf("%d", &matriz1[i][j]);
        }
    }

    // Calculando a média de cada linha
    for (int i = 0; i < 100; i++) {
        int soma = 0;
        for (int j = 0; j < 200; j++) {
            soma += matriz1[i][j];
        }
        medias[i] = (double)soma / 200; // Calcula a média como um número de ponto flutuante
    }

    // Exibindo as médias das linhas
    for (int i = 0; i < 100; i++) {
        printf("A média da linha %d é %.2lf\n", i, medias[i]);
    }

    return 0;
}
