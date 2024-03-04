#include <stdio.h>
#include <stdlib.h>

int main(){

int tabuada;

    printf("digite um numero para descobrir a sua tabuada:\n");
        scanf("%d",&tabuada);



            for(int x = 1; x<=10; ++x){
                printf("%d x %d = %d\n",x,tabuada, x * tabuada);

            }




    return 0;
}