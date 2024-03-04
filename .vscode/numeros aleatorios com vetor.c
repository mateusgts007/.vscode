#include <stdio.h>

int main() {

    int vetor[100]; 


    for (int i = 0; i < 100; i++) {
        vetor[i] = rand() % 100;     ////////// pra gerar numero aleatorio até 100
    }

    for(int i = 2; i < 100; i+=2){

         printf("Valor no vetor %d: %d\n", i, vetor[i]);

    }
    


    return 0;
}
