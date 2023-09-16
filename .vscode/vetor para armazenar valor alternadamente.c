/*
Ler dois vetores e caso tenham tamanhos iguais armazene seus elementos alternadamente em um
terceiro vetor.
*/


#include <stdio.h>

int main(){

int tamanhovetor1; // variavel para definir o tamanho do vetor
int tamanhovetor2;



printf("informe o tamanho do vetor 1:\n");
scanf("%d",&tamanhovetor1);


printf("informe o tamanho do vetor 2:\n");
scanf("%d",&tamanhovetor2);



if (tamanhovetor1 == tamanhovetor2){

    int vetor1[tamanhovetor1];      
    int vetor2[tamanhovetor2];
    int vetoralternado[tamanhovetor1 * 2];   // o vetor vai possuir o dobro de armazenamento para conseguir armazenar o valor de ambos vetores

printf("informe os elementos do vetor 1:\n");

for (int i = 0; i < tamanhovetor1; i++){

scanf("%d",&vetor1[i]);   /// lendo os valores informados pelo usuario para o vetor 1

}

printf("informe os elementos do vetor 2:\n");

for(int i = 0; i < tamanhovetor2 ; i++){

    scanf("%d",&vetor2[i]);    /////lendo os valores informados pelo usuario para o vetor 1
}


int alternado = 0;    /// variavel que serve como indice para o vetor alternado

for (int i = 0; i < tamanhovetor1 ; i++){

vetoralternado[alternado++] = vetor1[i];   
vetoralternado[alternado++] = vetor2[i];     

}

printf("vetor alternado\n");


for (int i = 0; i < tamanhovetor1 * 2; i++){

    printf("o valor do vetor alternado eh de :%d\n",vetoralternado[i]);
}

} else {      //// se os vetores forem diferentes executa a instrução abaixo

    printf("os vetores tem tamanhos diferentes\n");

}

    return 0;
}