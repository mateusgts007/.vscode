/*
Desenvolva uma função que recebe o ano de nascimento do usuário e retorna a
sua idade. Faça o cálculo usando o ano atual.
*/

#include <stdio.h>

int descobrirIdade (int anoNascimento, int anoAtual){

    int idade = anoAtual - anoNascimento;


        return idade;
}


int main (){

int calculo;
int anoNascimento,anoAtual;

printf("informe o ano atual:\n");
    scanf("%d",&anoAtual);


printf("informe o ano de nascimento:\n");
    scanf("%d",&anoNascimento);


calculo = descobrirIdade(anoNascimento,anoAtual);

  printf("a sua idade = %d",calculo);

    return 0;
}