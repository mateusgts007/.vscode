
#include <stdio.h>

int main (){

int numlido;
int matriz [50][100];
int soma = 0;

printf("infome um numero inteiro:\n");
scanf("%d",&numlido);


printf("informe os elementos da matriz 50x100\n");

for (int i = 0; i < 50; i++) {

        for (int j = 0; j < 100; j++) {

            scanf("%d", &matriz[i][j]);

            if (matriz[i][j] > numlido) {

                soma += matriz[i][j];
            }
        }
    }


printf("A soma dos elementos maiores que %d na matriz e: %d\n", numlido, soma);


    return 0;
}