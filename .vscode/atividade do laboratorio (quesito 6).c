/*
Construa um algoritmo que leia um conjunto de 20 números inteiros e mostre qual foi o maior e o menor valor fornecido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

   
    int numeros;
    int contador = 0;
    int maiorNumero = 0,menorNumero ;

    
   
  do{
            printf("digite numeros inteiros:\n");
                scanf("%d",&numeros);

                if(numeros > maiorNumero){
                   maiorNumero = numeros;
                }

                else if (numeros < menorNumero){
                   menorNumero = numeros;
                }
        
          
               contador++;
         
          } while(contador < 20);
     
        printf("o maior numero foi :%d\n",maiorNumero);
        printf("o menor numero foi:%d\n",menorNumero);
          

    return 0;
}