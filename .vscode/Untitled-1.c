#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


int main(){


float peso,altura,imc;

    printf("digite seu peso em (gramas):\n");
        scanf("%f",&peso);

        printf("digite sua altura em (centimetros):\n");
            scanf("%f",&altura);

            altura /= 100; ////// passar a altura de metros para centimetros

            imc =  peso / (altura * altura);

            if (imc <= 18.5 ){
                printf("voce esta abaixo do peso");
            }
                else if ( imc > 18.5 && imc < 25 ){
                    printf("voce esta no peso normal");
                }
                    else if(imc > 25 && imc < 30 ){
                        printf("voce esta acima do peso");
                    }
                        else if(imc > 30){
                            printf("voce esta obeso");
                        }


    return 0;
}