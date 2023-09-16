
#include <stdio.h>


int main(){

int valorvetor;  /// variavel para informar o tamanho do vetor


printf("informe o tamanho do vetor:\n");
scanf("%d",&valorvetor);

int vetor[valorvetor];   /// atribuindo o tamanho informado pelo usuario ao vetor



printf("informe os elementos do vetor:\n");

for (int i = 0; i < valorvetor; i++){

scanf("%d",&vetor[i]);   //// preenchendo o vetor com elementos informados pelo usuario

}

for(int i = 0; i < valorvetor;i++){

    if (vetor[i] %2 == 0){    //// condicao para verificar se o elemento dentro do vetor eh par

        printf("o valor par eh / sao:%d\n",vetor[i]); // imprimindo na tela o valor par
    }

    if (vetor[i] %2 == 1){   //// condicao para verificar se o elemento dentro do vetor eh impar
        
        printf("o valor impar eh / sao: %d\n",vetor[i]);  // imprimindo na tela o valor impar


    }

}

    return 0;
}