#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h> /////////// para utilizar a manipulação de caractere


int main (){

int opcao;
float n1,n2;

do{

printf ("escolha a operacao de calculo:\n");

printf("(1) soma\n");
printf("(2) subtrair\n");
printf("(3) multiplicar\n");
printf("(4) divisao\n");
printf("(0) sair\n");

scanf("%d",&opcao);

if (opcao >= 1 && opcao <= 4){

printf("digite dois numeros:\n");
scanf("%f%f",&n1,&n2);


if (opcao == 1){
    printf("%.1f + %.1f = %.1f\n",n1,n2,n1+n2);
}

if (opcao == 2){
    printf("%.1f - %.1f = %.1f\n",n1,n2, n1-n2);
}

if ( opcao == 3){
    printf("%.1f * %.1f = %.1f\n",n1,n2, n1*n2);
}

if ( opcao == 4){
    printf("%.1f / %.1f = %.1f\n",n1,n2, n1/n2);
}

} if(opcao > 5) {

    printf (" opcao invalida\n");
}

}


}while(opcao!=0);




    return  0;
}