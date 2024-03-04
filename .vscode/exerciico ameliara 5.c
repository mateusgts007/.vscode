#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){

float votos_eleitores,votos_brancos,votos_nulos,votos_validos;

float percentual_brancos,percentual_nulos,percentual_validos;


    printf("digite a quantidade de votos da eleicao:\n");
        scanf("%f",&votos_eleitores);

    printf("digite a quantidade de votos em branco:\n");
        scanf("%f",&votos_brancos);

    printf("digite a quantidade de votos nulos:\n");
        scanf("%f",&votos_nulos);


            votos_validos = votos_eleitores - (votos_brancos + votos_nulos);

            percentual_brancos = (votos_brancos * 100) / (float) votos_eleitores;

            percentual_nulos = (votos_nulos * 100) / (float) votos_eleitores;

            percentual_validos = (votos_validos * 100) / (float) votos_eleitores;
    

    printf("a porcentagem de votos brancos foi de: %.2f %% ",percentual_brancos);

    printf("a porcentagem de votos nulos foi de: %.2f %% ",percentual_nulos);

    printf("a porcentagem de votos validos foi de: %.2f %% ",percentual_validos);













    return 0;
}