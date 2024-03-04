#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (){

float salario_funcionario,percentual_reajuste,salario_reajustado;

printf("digite o salario do funcionario:\n");
scanf("%f",&salario_funcionario);

printf("digite o percentual de reajuste:\n");
scanf("%f",&percentual_reajuste);


salario_reajustado = salario_funcionario * (1 + percentual_reajuste/100);

printf("aqui esta o salario reajustado: %.2f",salario_reajustado);




    return 0;
}