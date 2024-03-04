#include <stdio.h>
#include <stdlib.h>

int main(){


int x;

printf("digite um numero para que a contagem regressiva comece:\n");
scanf("%d",&x);


while (x>0){
    printf("%d\n",x);
    x--;


if (x == 0){

    printf("\ncontagem regressiva acabou\n");

}

}



    return 0;
}