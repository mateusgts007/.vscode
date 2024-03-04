/*
Desenvolva uma função que receba três números inteiros como parâmetros e
retorne o menor valor.
*/

#include <stdio.h>

int menorvalor(int n1, int n2, int n3){

    if(( n1 <= n2) && (n2 <= n3)){ /// n1 menor valor

            printf("o menor valor = %d\n",n1);
    }

     if(( n2 <= n1) && (n2 <= n3)){ /// n2 menor valor

            printf("o menor valor = %d\n",n2);
    }

     if(( n3 <= n1) && (n3 <= n2)){ /// n3 menor valor

            printf("o menor valor = %d\n",n3);
    }



} // fim da função


int main (){

int n1,n2,n3;

printf("informe tres numeros inteiros:\n");
    scanf("%d %d %d",&n1,&n2,&n3);

    menorvalor(n1,n2,n3);


    return 0;
}