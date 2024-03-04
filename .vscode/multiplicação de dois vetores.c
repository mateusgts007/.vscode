#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


int main(){

float vetor1[20];
float vetor2[20];
float resultado[20];



for (int i = 0; i < 20; i++){

    printf("digite 20 numeros reais:\n");

        scanf("%f",&vetor1[i]);       

}

for ( int i = 0; i < 20; i++){

    printf("digite mais 20 numeros reais:\n");

        scanf("%f",&vetor2[20]);

}

for (int i = 0; i < 20; i++){

    resultado[i] = vetor1[i] * vetor2[i];

}

printf("o resultado da multiplicacao eh:\n");

for (int i = 0; i < 20; i++){
printf(" %.2f\n",resultado[i]);

}

    return 0;
}