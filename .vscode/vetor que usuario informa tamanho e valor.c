

#include <stdio.h>


int main(){


int  tamanhovetor1; //// variavel para informar o tamanho do vetor
int  tamanhovetor2;


printf("digite o tamanho do vetor 1:\n");
scanf("%d",&tamanhovetor1);


printf("digite o tamanho do vetor 2:\n");
scanf("%d",&tamanhovetor2);


    if (tamanhovetor1 == tamanhovetor2){  //// se os vetores tiverem tamanhos iguais

        int vetor1[tamanhovetor1];  /// vetor com tamanho informado pelo usuario

        int vetor2[tamanhovetor2];

        int vetorSoma[tamanhovetor1];  // vetor soma contendo o mesmo tamanho dos outros vetores


        printf("informe os elementos do vetor 1:\n");
        
        for(int i = 0; i < tamanhovetor1; i++){

            scanf("%d",&vetor1[i]);              ///// lendo os valores informados pelo usuario para preencher o vetor
        }

        printf("informe os elementos do vetor 2:\n");

        for (int i = 0; i < tamanhovetor2; i++){

            scanf("%d",&vetor2[i]);          ///// lendo os valores informados pelo usuario para preencher o vetor
        }


        for (int i = 0; i < tamanhovetor1; i++){

            vetorSoma[i] = vetor1[i] + vetor2[i];   //// vetor soma somando o valor dos dois vetores

            printf(" a soma dos elementos dos dois vetores foi de: %d\n",vetorSoma[i]); //// informando a soma
        }

    } else {   /// se os vetores nao tiverem nomes iguais

        printf(" o valor dos vetores sao diferentes\n");
    }


    return 0;
}