#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

 int num1,num2,num3;

 printf("digite tres numeros para descobrir qual e o maio:\n");
 scanf("%d%d%d",&num1,&num2,&num3);

 if (num1 > num2 && num1 > num3){
    printf("o numero %d e o maio dentre os tres",num1);
 }

 else if (num2 > num1 && num2 > num3){
    printf("o numero %d e o maio dentre os tres",num2);
 }

 else if (num3 > num1 && num3 > num2){
    printf("o numero %d e o maio dentre os tres",num3);
 }












    return 0;
}