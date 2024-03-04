#include <stdio.h>

int main() {
    int tamanhovetor;   /// variavel para definir o tamanho do vetor

    printf("Informe o tamanho do vetor:\n");
    scanf("%d", &tamanhovetor);

    int vetor[tamanhovetor];   // O tamanho do vetor será definido pelo usuário

    printf("Informe os elementos do vetor:\n");

    for (int i = 0; i < tamanhovetor; i++) {
        scanf("%d", &vetor[i]);  // Preenche o vetor
    }

    int valormaior = 0;  // Variável que serve para a posição do maior elemento
    int valormenor = 0;  // Variável que serve para a posição do menor elemento

    for (int i = 0; i < tamanhovetor; i++) {
        if (vetor[i] > vetor[valormaior]) {
            valormaior = i;
        }
        if (vetor[i] < vetor[valormenor]) {
            valormenor = i;
        }
    }

    printf("O maior elemento esta na posicao: %d\n", valormaior);
    printf("O menor elemento esta na posicao: %d\n", valormenor);

    return 0;
}
