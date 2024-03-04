/*
Escreva um programa que calcula o produto de dois números lidos sem usar o operador de multiplicação (‘*’)
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

int num;

    printf("digite um numero para descobrir a sua multiplicacao:\n");
        scanf("%d",&num);



            for(int x = 1; x<=10; ++x){

                

                printf("%d x %d = %d\n",x,num, x + num -1);

                

              








            }

    return 0;
}