#include <stdio.h>
#include <stdlib.h>

int main(){

float maca_comprada,calculo;
float meia_duzia = 0.30;
float duzia = 0.25;

    printf("quantas macas foram compradas ?");
        scanf("%f",&maca_comprada);


            if (maca_comprada <= 6){

                calculo = maca_comprada * meia_duzia;

                    printf("aqui esta o valor das macas: %.2f",calculo);

            }           else if(maca_comprada <= 12){

                            calculo = maca_comprada * duzia;

                                    printf("aqui esta o valor das macas:%.2f",calculo);

            }

               

    return 0;
}