#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


calc (int num1,int num2,int num3){
    int media = (num1 + num2 + num3) / 3;
    return media;
}

int main (){

int num1,num2,num3,medias;


printf("digite suas tres notas e obtenha a sua media:\n");
    scanf("%d %d %d",&num1,&num2,&num3);

    medias = calc (num1,num2,num3);

    printf("aqui esta a sua media: %d",medias);

    return 0;
}