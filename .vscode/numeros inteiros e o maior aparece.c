#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

int x,y;

printf("digite um numero inteiro (0) para sair:\n");
    scanf("%d",&x);


printf("digite um outro numero inteiro (0) para sair :\n");
    scanf("%d",&y);


do{

    if (x > y){

    printf("%d",x);

    }

    else if(y > x){

    printf("%d",y);

    scanf("%d",&x);
    scanf("%d",&y);

    }
   

}while(x != 0);




    return 0;
}