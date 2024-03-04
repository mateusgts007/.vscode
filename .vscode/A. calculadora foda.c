
/*
crie um menu interativo das operações matemáticas, e 0 para sair;
*/

#include <stdio.h>


int main (){

int escolha;
int num1,num2,resultado;


do{ ///// inicia o do while

printf("escolha uma operacao matematica\n");
printf("(1) soma\n");
printf("(2) subtracao\n");
printf("(3) multiplicacao\n");
printf("(4) divisao\n");
printf("(0) sair\n");
scanf("%d",&escolha);



switch(escolha){ ///// inicia o switch

case 1:

    
printf("informe dois numeros para fazer a operacao:\n");
scanf("%d %d",&num1,&num2);

    resultado = num1 + num2;

    printf("a soma de %d + %d = %d\n",num1,num2,resultado);

    break;

case 2:


printf("informe dois numeros para fazer a operacao:\n");
scanf("%d %d",&num1,&num2);

    resultado = num1 - num2;

    printf("a subtracao de %d - %d = %d\n",num1,num2,resultado);

    break;


case 3:


printf("informe dois numeros para fazer a operacao:\n");
scanf("%d %d",&num1,&num2);

    resultado = num1 * num2;

    printf("a multiplicacao de %d * %d = %d\n",num1,num2,resultado);

    break;



case 4:


printf("informe dois numeros para fazer a operacao:\n");
scanf("%d %d",&num1,&num2);

    resultado = num1 / num2;

    printf("a divisao de %d / %d = %d\n",num1,num2,resultado);    

    break;


default:

printf("saindo da calculadora\n");

} /////// finaliza o switch

}while(escolha != 0); ////// finaliza o do while




    return 0;
}

