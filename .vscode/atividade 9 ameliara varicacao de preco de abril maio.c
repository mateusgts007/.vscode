#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){

float variacao,preco_abril,preco_maio;
char mercadoria [50];

    printf("digite qual mercadoria voce quer analisar a taxa de inflacao:\n");
        scanf("%s",&mercadoria);

        fflush(stdin);

    printf("digite o preco da mercadoria em abril:\n");
        scanf("%f",&preco_abril);

    printf("digite o preco da mercadoria em maio:\n");
        scanf("%f",&preco_maio);

variacao = ((preco_maio - preco_abril) / preco_abril) * 100;

printf("a varicacao da mercadoria foi de: %.2f %%",variacao);



    return 0;
}