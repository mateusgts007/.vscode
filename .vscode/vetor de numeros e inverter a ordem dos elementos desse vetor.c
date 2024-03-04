/*
7. Ler um vetor de números e inverter a ordem dos elementos desse vetor no próprio vetor.
*/

#include <stdio.h>

int main (){

int num;  // variavel define o tamanho do vetor

printf("digite o tamanho do veto:\n");
scanf("%d",&num);


int vetor[num]; // atribuindo o tamanho do vetor informado pelo usuário

printf("informe os elemntos do vetor:\n");

for (int i = 0; i < num; i++){

scanf("%d",&vetor[i]); /// preenchendo o vetor

}

for (int i = 0; i < num / 2; i++){

int inverter = vetor[i];

 vetor[i] = vetor[num - 1 - i];

        vetor[num - 1 - i] = inverter ;

   printf("Vetor invertido:\n");

    for (int i = 0; i < num; i++) {
        printf("%d ", vetor[i]);
    }


}
    return 0;
}