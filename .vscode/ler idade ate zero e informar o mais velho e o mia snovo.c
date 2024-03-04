#include <stdio.h>
#include <stdio.h>
#include <conio.h>
#include <string.h> /////////// para utilizar a manipulação de caractere


int main (){

int idade, novo = 200, velho = 0;
char nome [20];
char nomeV[20];
char nomeN[20];

do{

printf ("digite sua idade:\n");
scanf("%d",&idade);

if (idade > 0){

    printf("informe o nome:\n");
    scanf("%s",&nome);
}

if(idade > velho){
    velho = idade;

    strcpy(nomeV,nome); ///// MANIPULAÇÃO DE CARACTERE -- copia e cola uma cadeira de caracter

}

if (idade < novo){
    novo = idade;

    strcpy(nomeN,nome);

}


}while(idade !=0);


printf ("%s eh a pessoa mais velha \n",nomeV);
printf("%s eh a pessoa mais nova\n",nomeN);

    return  0;
}