#include <stdio.h>
#include <stdlib.h>

int main(){

int idade_atual,ano_atual,calculo;

printf("digite o seu ano de nascimento:\n");
scanf("%i",&idade_atual);

printf("digite o ano atual:\n");
scanf("%i",&ano_atual);



calculo = (ano_atual - idade_atual);

printf("a sua idade e %d",calculo);





    return 0;
}