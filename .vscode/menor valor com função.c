#include <stdio.h>
#include <stdlib.h>


func1 (int num1,int num2,int num3){
    if(num1 < num2 && num1 < num3){
        return num1;
    }

    if (num2 < num1 && num2 < num3){
        return num2;
    }

    if (num3 < num2 && num3 < num1){
        return num3;
    }
}




int main(){

int menorValor,num1,num2,num3;


printf("digite tres valores inteiros e descubra qual eh o menor:\n ");
    scanf("%d %d %d",&num1,&num2,&num3);

    menorValor = func1(num1,num2,num3);


printf("o menor valor dos valores inteiros foi : %d",menorValor);    

    return 0;
}