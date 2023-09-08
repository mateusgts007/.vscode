#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float quilometragem_incial, quilometragem_final, litros_consumidos,preco_litro;

float distancia_percorrida,valor_total_gasto,consumo_carro; 

     printf("digite a quilometragem inicial:\n");
        scanf("%f",&quilometragem_incial); 

    printf("digite a quilometragem final:\n");
        scanf("%f",&quilometragem_final); 

    printf("digite a quantidade de litros consumidos:\n");
        scanf("%f",&litros_consumidos);

    printf("digite o preco do litro :\n");
        scanf("%f",&preco_litro);  


        distancia_percorrida = (quilometragem_final - quilometragem_incial);

            valor_total_gasto = preco_litro * distancia_percorrida;

                consumo_carro = distancia_percorrida / litros_consumidos;


    printf("a distancia percorrida foi de %.2f (km)\n",distancia_percorrida);

    printf("aqui esta o valor total gasto %.2f(R$)\n",valor_total_gasto);

    printf("aqui esta o consumo do carro %.2f(Km(l))\n",consumo_carro);



    return 0;
}