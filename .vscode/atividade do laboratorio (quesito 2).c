/*
Escreva um programa que lê três números e em seguida imprime quantos deles são iguais.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){


    int num1,num2,num3;


    printf("digite tres numeros inteiros:\n");
        scanf("%d%d%d",&num1,&num2,&num3);


        if ((num1 == num2) && (num2 == num3) && (num1 == num3)){
            printf("todos os numeros sao iguais: %d %d %d",num1,num2,num3);
        }
            else if ((num1 == num2) || (num1 == num3) || (num2 == num3)){
                printf("dois numeros sao iguais e sao : %d %d",num1,num2,num3);

            }
                else {
                    printf("todos os numeros sao diferentes e sao: %d %d %d",num1,num2,num3);
                }
        



    return 0;
}