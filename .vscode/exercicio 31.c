

#include <stdio.h>
#include <string.h>


struct aluno{

        char nome[50];
        float nota1;
        float nota2;
        float media;
};

int main (){

int escolha;
struct aluno alunos [5];
int numAlunos = 0;
float mediaGeral = 0.0;

do{


printf("\n escolha uma opcao\n");
printf("(1) guardar nomes e notas\n");
printf("(2) exibir media geral de todos os alunos\n");
printf("(3) exibir lista com o nome e as notas de todos os alunos\n");
printf("(4) exibir lista com nome e as medias de todos os alunos\n");
printf("(0) para sair\n");
scanf("%d",&escolha);
printf("\n");


    switch (escolha){
    
        case 1:

                if (numAlunos < 5){

                        printf("informe o nome do aluno\n");
                            scanf("%s",alunos[numAlunos].nome);
                        
                                printf("informe as notas do aluno %s\n",alunos[numAlunos].nome);
                                    scanf("%f %f",&alunos[numAlunos].nota1, &alunos[numAlunos].nota2);


                                        alunos[numAlunos].media = (alunos[numAlunos].nota1 + alunos[numAlunos].nota2) / 2.0;

                                numAlunos++;

                        } else{

                        printf("numero de alunos maximo atingido\n");
                    }
                        break;




        case 2:

        mediaGeral = 0.0;

        for (int i = 0; i < numAlunos; i++){

            mediaGeral += alunos[numAlunos].media;

        }

        if (numAlunos > 0){

            mediaGeral /= numAlunos;
        }

        printf("a media geral de todos os alunos foi de: %.2f\n",mediaGeral);

        break;


        case 3:
        
                printf (" nome e notas de todos os alunos:\n");

                    for (int i = 0; i < numAlunos; i++) {

                        printf("Nome: %s, Notas: %.2f %.2f\n", alunos[i].nome, alunos[i].nota1, alunos[i].nota2);
                    }

                    break;

            case 4:

                printf("Lista com nome e medias de todos os alunos:\n");

                for (int i = 0; i < numAlunos; i++) {

                    printf("Nome: %s, Media: %.2f", alunos[i].nome, alunos[i].media);

                    if (alunos[i].media >= 7.0) {

                        printf(" (Aprovado)\n");

                    } else {

                        printf(" (Reprovado)\n");
                    }
                }
                break;

            default:
                printf("Opcao invalida. Tente novamente.\n");
        }





    }while(escolha != 0);

    return 0;

}
