/*
Desenvolva uma função que recebe as três notas do aluno como parâmetro e
retorne a sua média.
*/


#include <stdio.h>


float func(float nota1, float nota2, float nota3){

    float media = (nota1 + nota2 + nota3) / 3;

    return media;
}



int main (){

float nota1,nota2,nota3,medias;

printf("informe as tres notas para descobrir a sua media:\n");
    scanf("%f %f %f",&nota1,&nota2,&nota3);

medias = func(nota1,nota2,nota3);

printf("a media das notas foi: %.2f\n",medias);

    return 0;
}