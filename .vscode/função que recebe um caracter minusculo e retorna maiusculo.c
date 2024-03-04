#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>


letra (char  caractere){
    if (caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u' || caractere == 'A' || caractere == 'E' || caractere == 'I' || caractere == 'O' || caractere == 'U'){
        return 1;
    } else {
        return 0;
    }
}

int main(){

char caractere;
int resultado;

printf("digite um caracter :\n");
    scanf("%c",&caractere);

    resultado = letra(caractere);

    if(resultado == 1){

printf("seu caractere recbeu 1 entao eh uma vogal minuscula ou maiuscula");

    } else {

    printf("seu caractere recebeu 0 entao nao eh uma vogal minuscula ou maiuscula");

    }

    return 0;
}