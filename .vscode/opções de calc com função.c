#include <stdio.h>
#include <math.h>

somar (int num1,int num2){  ///// criando a função para somar dois numeros inteiros /////
    int soma = num1 + num2;
    return soma;
}

subtrair (int num1, int num2){  ///// criando a função para subtrair dois numeros inteiros /////
    int subtracao = num1 - num2;
    return subtracao;
}

multiplicar (int num1,int num2){  ///// criando a função para multiplicar dois numeros inteiros /////
    int multiplicacao = num1 * num2;
    return multiplicacao;
}

dividir (int num1, int num2){  ///// criando a função para dividir dois numeros inteiros /////
    int divisao = num1 / num2;
    return divisao;
}

int main() {    ///// iniciando o algoritimo principal /////
  
int operacao;
int resultado; ///// declarando variáveis /////
int num1,num2;


do{

printf("escolha umas das operacoes abaixo\n");
printf("(1) soma\n");
printf("(2) subtracao\n");
printf("(3) multiplicacao\n");   ////// opções de calculo /////
printf("(4) divisao\n");
printf("(5) sair\n");
scanf("%d",&operacao);



switch (operacao){ 

   case 1:        ///// caso a operação escolhida seja 1 o algoritimo executara o comando abaixo

    printf("Digite dois numeros inteiros:\n");
        scanf("%d %d", &num1, &num2);
            resultado = somar(num1, num2);
                printf("Resultado da soma: %d\n", resultado);
                    break;

case 2:         ///// caso a operação escolhida seja 2 o algoritimo executara o comando abaixo


    printf("digite dois numeros inteiros:\n");
        scanf("%d %d",&num1,&num2);
            resultado = subtrair(num1,num2);
                printf("resultado da subtracao: %d\n",resultado);
                    break;

case 3:     ///// caso a operação escolhida seja 3 o algoritimo executara o comando abaixo


    printf("digite dois numeros inteiros:\n");
        scanf("%d %d",&num1, &num2);
            resultado = multiplicar(num1,num2);
                printf("resultado da multiplicacao: %d\n",resultado);

case 4:     ///// caso a operação escolhida seja 4 o algoritimo executara o comando abaixo


    printf("digite dois numeros inteiros:\n");
        scanf("%d %d", &num1,&num2);
            resultado = dividir(num1,num2);
                printf("resultado da divisao: %d\n",resultado);

case 5:     ///// caso a operação escolhida seja 5 o algoritimo executara o comando abaixo


    printf("saindo do programa\n");
        break;
        default :
        printf("opcao invalida");


}

}while(operacao!=5); ///// realiza oque estiver dentro do loop enquanto a condição operação for diferente de 5


    return 0;
}
