/*
5. Desenvolva uma função que recebe como parâmetro o mês atual e retorna
quantos meses faltam para o final do ano.
*/

#include <stdio.h>

int mesesParaOFim(int mesAtual){

    int calculo = 12 - mesAtual;

    return calculo;

} /// fim da função


int main (){

int mesAtual,calcular;

printf("informe qual o mes atual (1 a 12)\n");
    scanf("%d",&mesAtual);

if (mesAtual < 1 || mesAtual > 12) {

        printf("Mes invalido. O mes deve ser um numero de 1 a 12\n");

    } else {

        calcular = mesesParaOFim(mesAtual);

        printf("Faltam %d meses para o final do ano\n", calcular);
    }

    return 0;
}