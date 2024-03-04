#include <stdio.h>

int main (){

int n1,n2,troca;


printf("digite 2 numeros:\n");
scanf("%d%d",&n1,&n2);


printf (" antes da troca\n");
printf(" n1 = %d | n2 = %d",n1,n2);


troca = n1;
n1 = n2;
n2 = troca;


printf ("depois da troca\n");






    return 0;
}