/*

Ler um conjunto de matrícula e notas dos alunos de uma turma e imprima a matricula dos alunos de
tiveram nota acima da média das notas da turma.

*/

#include <stdio.h>

int main(){

int alunos;


printf("informe o numero de alunos:\n");
scanf("%d",&alunos);

int matriculas[alunos];
float notas[alunos];


for (int i = 0; i < alunos; i++){

printf("informe a matricula do aluno:\n");
scanf("%d",&matriculas[i]);

printf("digite a nota do aluno:\n");
scanf("%f",&notas[i]);

}

float somanotas = 0;

for(int i = 0; i < alunos; i++){

    somanotas += notas[i];

}

float mediaturma = somanotas / alunos;


printf("matricula dos alunos com nota acima da media:\n");

for(int i = 0; i < alunos; i++){

if (notas[i] > mediaturma ){

    printf("matricula:%d\n",matriculas[i]);

}

}  

    return 0;
}