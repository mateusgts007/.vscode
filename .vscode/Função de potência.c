
#include <stdio.h>
#include <math.h>


int func(int num1, int num2){

    int pot = pow(num1,num2); 

    return pot;
}


int main (){

int num1,num2,resultado;

printf("informe um numero para elevar a potencia:\n");
scanf("%d",&num1);

printf("informe um numero para servir de potencia:\n");
scanf("%d",&num2);

resultado = func(num1,num2);

printf("o %d elevado a %d = %d",num1,num2,resultado);


    return 0;
}