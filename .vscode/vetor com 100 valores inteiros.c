#include <stdio.h>


int main(){

int num[10]; 
int par = 0;
int impar = 0;


for (int i = 1; i <= 100; i++){

printf("digite numeros impares e par:\n");
    scanf("%d",&num[i]);                            

}
    for (int i = 1; i <= 100; i++){

        if (num[i] % 2 == 0){      
            par++;                                 

        } else {
            impar++;
        }

    }

    printf("a quantidade de numeros pares foi de: %d\n",par);
    printf("a quantidade de numeros impares foi de : %d\n",impar);

    return 0;
}