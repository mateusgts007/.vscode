#include <stdio.h>
#include <conio.h>


int main (){

int codigo,maisGordo;
float peso, gordo = 0;

do{

printf("codigo do boi:\n");
scanf("%d",&codigo);

if (codigo > 0){

    printf ("digite o peso:\n");
    scanf("%f",&peso);


if ( peso > gordo){
    gordo = peso;
    codigo = codigo;
}
}

}while(codigo != 0);

printf("o codigo % d do boi mais gordo da fazendo com peso = %.2f",codigo,gordo);


    return 0;
}