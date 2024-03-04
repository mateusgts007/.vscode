/*
Escreva um algoritmo que lê 50 números inteiros e em seguida mostra a soma de todos os ímpares lidos.
*/

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    int numeros;
    int contador = 0;
    int somaImpares = 0;
    
   
  do{
            printf("digite numeros inteiros:\n");
                scanf("%d",&numeros);

          if(numeros %2 !=0){
            
            somaImpares += numeros;

          }

               contador++;
         
          } while(contador < 50);
     

            printf("a soma dos impares foi de: %d",somaImpares);

    return 0;
}