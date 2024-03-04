#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

int numero;
float cubo;

    printf("digite um numero para descobrir o seu cubo:\n");
        scanf("%d",&numero);


cubo = pow(numero,3);

printf("aqui esta o cubo do numero %d e %.2f",numero,cubo);










    return 0;

}