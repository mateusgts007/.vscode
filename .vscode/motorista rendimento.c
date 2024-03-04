#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float preco_combustivel = 2.59;

float rendimento,odometro_inicio_dia, odometro_final_dia;

float litros_gastos,valor_total_recebido,media_consumo,lucro_liquido;


    printf("digite a marcacao do odometro no inicio do dia em (km):\n");
        scanf("%f",&odometro_inicio_dia);

    printf("digite a marcacao do odometro no final do dia em (km):\n");
        scanf("%f",&odometro_final_dia);    

    printf("digite a quantidade de combustivel gasto (L) :\n");
        scanf("%f",&litros_gastos);

    printf("digite o valor total recebido dos passageiros:\n");
        scanf("%f",&valor_total_recebido);


media_consumo =  (odometro_final_dia - odometro_inicio_dia) / litros_gastos ;

lucro_liquido = valor_total_recebido / preco_combustivel;

rendimento = lucro_liquido / media_consumo;

    printf("o rendimento do seu carro na praca e de: (km/L)%.2f\n",rendimento);

    printf("a media de consumo do seu carro e de: (km/L)%.2f\n",media_consumo);

     printf("seu lucro liquido do dia e: (R$)%.2f\n",lucro_liquido);













    return 0;
}