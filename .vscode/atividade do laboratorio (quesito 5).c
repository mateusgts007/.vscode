/*
Altere o algoritmo anterior para que ele considere apenas a soma dos ímpares que estejam entre 100 e 200.
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

          if(numeros %2 !=0 && numeros > 100 && numeros < 200){
            
            somaImpares += numeros;

          }

               contador++;
         
          } while(contador < 50);
     

            printf("a soma dos impares foi de: %d",somaImpares);

    return 0;
}