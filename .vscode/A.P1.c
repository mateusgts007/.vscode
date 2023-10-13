/*
	Uma organizadora de concursos deseja implementar um sistema que possua um menu com as seguintes opções: 
 
a. Caso seja escolhida a opção 1 o sistema deve: Ler nota e nomes de 15 candidatos e armazenar em um vetor; 
b. Caso seja escolhida a opção 2 o sistema deve: Exibir média geral de todos os candidatos; 
c. Caso seja escolhida a opção 3 o sistema deve: Exibir o nome do candidato que teve a maior e menor nota; 
d. Caso seja escolhida a opção 0 o sistema deve: finalizar sua execução.

*/

#include <stdio.h>
#include <stdio.h>
#include <string.h>


void lernotasEnomes (float notas[15],char nomes[15][20]){ ///// função para ler nome e nota de 15 alunos


    for(int i = 0; i < 15; i ++){  ////// preencher o vetor de notas

        printf("informe a nota do aluno %d\n",i+1); /// "i+1" para informar qual é a nota daquele aluno, por exemplo: nota aluno1, nota aluno2.....

            scanf("%f",&notas[i]);
    }

    
    for(int i = 0; i < 15; i ++){ ///// preencher o vetor nomes

    printf("informe o nome do aluno %d\n",i+1); /// "i+1" para informar qual é o nome daquele aluno, por exemplo: nome aluno 1, nome aluno 2.......

        scanf("%s",&nomes[i]);

    }

} //// fim da função 1


float mediaGeralAlunos (float notas[15]){ /// função para mostrar a media geral dos alunos

    float soma = 0.0; /// 0.0 pois o valor é em float

    for (int i = 0; i < 15; i++){

        soma += notas[i]; /// variavel soma vai receber o valor que esta dentro do vetor notas e somar com o proximo valor dentro do vetor notas
    }

    return soma / 15.0; //// dividido por 15 que é o total de alunos

} /// fim da função 2


char exibirNomeComMaiorEMenorNota(char nomes[15][20],float notas[15]){ //// função para exibir o nome do candidato com maior e menor nota

    float maiornota = 999999999.999999;
    float menornota = 0.0;
    char maiornotanome[20];
    char menornotanome[20];

    for (int i = 0; i < 15; i++){ /// início do for

        if( notas[i] < maiornota){ /// condição que guarda a maior nota do vetor notas dentro de uma variavel float

            maiornota = notas[i];

            strcpy(maiornotanome,nomes[i]); //// o nome que está dentro do vetor nomes vai para a variavel maiornotanome
        }

        if (notas[i] > menornota){ /// condição que guarda a menor nota dentro de uma variavel float

            menornota = notas[i];

            strcpy(menornotanome,nomes[i]);  //// o nome que está dentro do vetor nomes vai para a variavel menornotanome
        }

    } /// fim do for

} ///// fim da função 3



int main (){

int escolha; /// função 1
char nomes[15][20]; //// função 1
float notas[15]; /// função 1

float media; /// função 2

float maiornota = 999999999.999999; /// função 3
float menornota = 0.0; /// função 3
char maiornotanome[20]; /// função 3
char menornotanome[20]; /// função 3




    do{ //// inicio do do-while

printf("(1) Ler nota e nome de 15 alunos\n");
printf("(2) Exibir a media geral dos alunos\n");
printf("(3) Exibir nome do candidato com maior e menor nota\n");
printf("(0) Sair\n");
scanf("%d",&escolha);


switch(escolha){ /// início do switch

case 1:

lernotasEnomes(notas,nomes);
    break;



case 2:

    media = mediaGeralAlunos(notas);

    printf("A media geral dos alunos foi de: %.2f\n",media);

    break;



case 3:


exibirNomeComMaiorEMenorNota (nomes,notas);

printf("O aluno com maior nota foi: %s\n",maiornotanome);
printf("O aluno com menor nota foi: %s\n",menornotanome);

    break;

case 0:

    printf("saindo do programa\n");
    
return 0; /// para sair do programa


default:

printf("Opcao invalida\n");


} //// fim do switch

    }while(escolha != 0); //// fim do do-while


    return 0;
}