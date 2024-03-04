
/*1. Faça um algoritmo, em linguagem C, que lê números inteiros positivos, um de cada vez, até que o número zero seja digitado, e exibe o maior número lido.

*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

int num,maiorNum = 0;

    do{

    printf("digite numeros inteiros postivivos:\n");
        scanf("%d",&num);
 
    if (num > maiorNum){
            maiorNum = num;
    }
        } while(num!=0);

    printf("o maior numero obtido foi : %d",maiorNum);

    return 0;
}