/*
Faça um programa que realize o cadastro de contas bancárias com as seguintes informações: número da conta, nome do cliente e saldo. 
O banco permitirá o cadastramento de apenas 20 contas e NÃO poderá haver mais que uma conta com o mesmo número. Crie o menu de opções a seguir:
a.	Cadastrar contas
b.	Visualizar todas as contas 
c.	Exibir a conta com menor saldo

*/

#include <stdio.h>
#include <string.h>


int main(){

int escolha;
int numeroConta[20];
float saldoConta[20];
int contadorContas = 0;
float contaMenorSaldo = 999999999999;
int numeroContaMenorSaldo;
char nomeCliente[20][50];

do{

printf("(1) Cadastrar contas\n");
printf("(2) Visualizar todas as contas\n");
printf("(3) Exibir conta com menor saldo\n");
printf("(0) sair\n");
scanf("%d",&escolha);



switch(escolha){

case 1: //// cadastrar as contas

if(contadorContas < 20){

printf("informe o numero da conta bancaria %d:\n",contadorContas + 1);
    scanf("%d",&numeroConta[contadorContas]);

printf("informe o nome do cliente %d :\n", contadorContas + 1);
    scanf("%s",&nomeCliente[contadorContas]);

printf("informe o saldo da conta %d:\n",contadorContas + 1);
    scanf("%f",&saldoConta[contadorContas]);    

    contadorContas++;
}else{

    printf("limite de contas atingido (20) no maximo\n");
}

break;

case 2: //// visualizar todas as contas

for (int i = 0; i < 20; i++){

printf("numero da conta bancaria = %d\n",numeroConta[i]);
printf("nome do cliente = %s\n",nomeCliente[i]);
printf("saldo da conta = %.2f\n",saldoConta[i]);

}

break;

case 3: ///// conta com menor saldo

if(contadorContas > 0){

for(int i = 0; i < contadorContas; i++){

    if (saldoConta[i] < contaMenorSaldo){
        contaMenorSaldo = saldoConta[i];

        numeroContaMenorSaldo = numeroConta[i];
    }

}

}
printf(" a conta com o menor saldo  = %d e o saldo = %.2f\n",numeroContaMenorSaldo,contaMenorSaldo);

break;

case 0:

break;

} ///// fim do switch

} while (escolha != 0); //// fim do do-while

    return 0;
}