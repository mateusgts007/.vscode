#include <stdio.h>

int main (){


int contador, soma = 0;

for ( contador = 1; contador <= 50; contador++){

if (contador % 2 == 0){

soma = soma + contador;

}

}

printf("somas dos numeros pares de 1 a 50 = %d",soma);



    return 0;
}