#include <stdio.h>
#include <stdlib.h>


func1 (int ano_atual,int ano_nascimento ){
    int idade = ano_atual - ano_nascimento;
    return idade;
}



int main(){

int ano_atual,ano_nascimento,idades;

printf("digite o ano atual:\n");
    scanf("%d",&ano_atual);

printf("digite o seu ano de nascimento:\n");
    scanf("%d",&ano_nascimento);


    idades = func1(ano_atual,ano_nascimento);

printf("a sua idade eh de %d",idades);    

    return 0;
}