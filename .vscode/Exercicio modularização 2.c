/*
Desenvolva uma função que recebe dois números inteiros como parâmetro, e
retorna o resto da divisão do primeiro parâmetro pelo segundo.
*/

#include <stdio.h>


int func (int n1, int n2){

    int resto = n1 % n2;


    return resto;

}



int main (){

int n1,n2,calculo;


printf("informe dois numeros inteiros:\n");
    scanf("%d %d",&n1,&n2);

calculo = func(n1,n2); 

    printf(" o resto da divisao de %d por %d eh: %d\n",n1,n2,calculo);

    return 0;
}