#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main (){

    float codigo_produto,preco_custo_produto,novo_preco;
    float media_preco_aumento,media_preco_sem_aumento,media;

    printf("digite o codigo do produto:\n");
        scanf("%f",&codigo_produto);

    printf("digite o preco de custo do produto:\n");
        scanf("%f",&preco_custo_produto);

    novo_preco = preco_custo_produto * 0.2;

    



    return 0;
}