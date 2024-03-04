#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main(){

 int total_prestacoes, total_pagas, valor_atual_prestacao, prestacoes_a_pagar;

float saldo_devedor;

    printf("digite o total de prestacoes:\n");
        scanf("%d",&total_prestacoes);

    printf("digite o total de prestacoes pagas:\n");
        scanf("%d",&total_pagas);

    printf("digite o valor atual da prestacao:\n");
        scanf("%d",&valor_atual_prestacao);

            prestacoes_a_pagar = total_prestacoes - total_pagas;

            saldo_devedor = valor_atual_prestacao * (total_prestacoes - total_pagas);



    printf("aqui esta a quantidade de parcelas a pagar: %d\n ",prestacoes_a_pagar);

    printf("aqui esta o saldo devedor: %.2f \n",saldo_devedor);




    return 0;
}