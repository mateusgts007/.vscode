#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

int ano_nascimento,ano_atual,calculo;


printf("digite o ano atual:\n");
    scanf("%d",&ano_atual);

printf("digite em que ano voce nasceu:\n");
    scanf("%d",&ano_nascimento);

        calculo = ano_atual - ano_nascimento;

if (calculo >= 5 && calculo <=7){
    printf("voce esta na categoria infantil >> A << ");
} 

else if(calculo >=8 && calculo <= 10){
    printf("voce esta na categoria infantil >> B << ");
}

else if (calculo >= 11 && calculo <= 13){
    printf("voce esta na categoria juvenil >> A <<");
}

else if (calculo >= 14 && calculo <= 17){
    printf("voce esta na categoria juvenil >> B <<");
}

else if (calculo >= 18){
    printf("voce esta na categoria de adultos");
}






    return 0;
}