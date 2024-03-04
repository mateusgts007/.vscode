#include <stdio.h>
#include <stdlib.h>

int main(){

int X,calculation;


    printf("digite um numero para descobrir se ele e par ou impar: \n");
    scanf("%d",&X);


calculation = (X%2);

if(calculation == 0){
    printf("este numero e par");
}

else {

    printf("este numero e impar");
}



    return 0;
}