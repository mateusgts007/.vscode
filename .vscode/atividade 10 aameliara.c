#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>


int main(){

char evento [50];
float duracao_evento,calculo_horas,calculo_minutos;



    printf("digite o nome do evento que aconteceu na fabrica:\n");
        scanf("%s",&evento);

            fflush(stdin);

    printf("quanto tempo durou o evento em segundos:\n");
        scanf("%f",&duracao_evento);



        calculo_horas = duracao_evento / 3600;

        calculo_minutos = duracao_evento / 60;

    printf("aqui esta a duracao do evento em horas: %.4f\n",calculo_horas);

    printf("aqui esta a duracao do evento em minutos: %.2f\n",calculo_minutos);

    printf("aqui esta a duracao do evento em segundos: %.3f\n",duracao_evento);


    return 0;
}