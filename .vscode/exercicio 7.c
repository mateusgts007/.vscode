

#include <stdio.h>
#include <stdlib.h>

int main (){

float kilometrosInicio, KilometrosFinal,distancia;
float preco_gasolina_em_reais;
float litros_consumidos;
float gasto_em_reais;


printf("informe a kilometragem inicial:\n");
scanf("%f",&kilometrosInicio);

printf("informe a kilometragem final:\n");
scanf("%f",&KilometrosFinal);

printf("informe o preco da gasosa em reais:\n");
scanf("%f",&preco_gasolina_em_reais);

distancia = KilometrosFinal - kilometrosInicio;

litros_consumidos = distancia / 12;

gasto_em_reais = litros_consumidos * preco_gasolina_em_reais;


printf("a distancia percorrida foi de :%.2f(KM)\n",distancia);
printf("a quantidade de litros consumidos foi de: %.2f\n",litros_consumidos);
printf("o gasto em reais foi de :(R$) %.2f\n",gasto_em_reais);

    return 0;
}