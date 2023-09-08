#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

int sexo,opniao_filme,idade;
int pessoas = 0;
int total_mulheres = 0;
float media_idade_mulheres = 0;
int soma_idades_mulheres = 0;
int total_homens = 0;
float percentual_homens_nao_gostaram_filme = 0;
int quantidade_pessoas_esperava_mais = 0;


do{
   

    printf("escolha seu sexo:\n");
    printf("(1)feminino\n");
    printf("(2)masculino\n");
        scanf("%d",&sexo);           /// idade do participante

    printf("digite a sua idade:\n");
        scanf("%d",&idade);          /// idade do participante


    printf("qual foi a sua opniao sobre o filme:\n");
    printf("(1) nao gostei\n");
    printf("(2) esperava mais\n");
    printf("(3) vale o ingresso\n");
    printf("(4) excelente\n");
        scanf("%d",&opniao_filme);                  ///// opnião do filme

        if(sexo == 1 && opniao_filme == 4){
            
                total_mulheres++ ;                   ///// incrementa +1 ao total de mulheres

                    soma_idades_mulheres += idade;    /// atribui e soma a idade das mulheres
            
        }
                
            if(sexo == 2 && opniao_filme == 1){ 

                total_homens++;             /// incrementa +1 a quantidade de homens

        }

            if(pessoas > 0 && opniao_filme == 2){

                quantidade_pessoas_esperava_mais ++;

                    printf("a quantidade de pessoas que esperavam mais do filme foi:%d\n",quantidade_pessoas_esperava_mais); // quantidade de pessoas que esperavam mais
                }
                


                    pessoas++;           // incrementa +1 a pessoas

                }while(pessoas < 15);   ////////////// fim do loop while 


            if (total_mulheres > 0){

                media_idade_mulheres = soma_idades_mulheres /  total_mulheres;

                    printf("aqui esta  a media da idade das mulheres: %.2f \n",media_idade_mulheres); ////// media da idade das mulheres

            }   

            
            if (total_homens > 0){
                
                percentual_homens_nao_gostaram_filme = total_homens / pessoas * 100;  ////////// percentual de homens que não gostaram do filme

                    printf("o percentual de homens que nao gostaram do filme foi de : %.2f%%",percentual_homens_nao_gostaram_filme);

            }


    return 0;
}