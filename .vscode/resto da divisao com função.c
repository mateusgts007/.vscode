#include <stdio.h>
#include <stdlib.h>


func1 (int num1,int num2){
    int restos = num1 % num2;
    return restos;

}




int main(){

int num1,num2,resto;

printf("digite dois numeros inteiros:\n");
    scanf("%d %d",&num1,&num2);


    resto = func1(num1,num2);

    printf(" o resto da divisao dos numeros inteiros foi: %d",resto);

    return 0;
}