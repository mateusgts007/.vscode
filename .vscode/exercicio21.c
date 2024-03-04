#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float matricula,horas_trabalhadas,valor_da_hora,filhos,calculo;

    printf("digite sua matricula de funcionario porfavor: \n");
        scanf("%f",&matricula);

    printf("digite quantas horas voce trabalhou porfavor: \n");
        scanf("%f",&horas_trabalhadas);

    printf("digite o valor das suas horas porfavor: \n");
        scanf("%f",&valor_da_hora);

    printf("digite quantos filhos voce tem menor de 14 anos porfavor: \n");
        scanf("%f",&filhos);

 

    calculo = horas_trabalhadas * valor_da_hora;

    if (filhos == 1 ) {
    calculo += 30.00;
}

    printf("aqui esta seu salario:%.2f",calculo);




    return 0;
}