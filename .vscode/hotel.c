/*
Fazer um programa para um hotel que possui 20 quarto, 15 tipo Standard e 5 tipo Luxo. Para cada
hóspede serão lidos os seguintes dados: Código, Nome, Região de Origem (1-Nordeste, 2-Sudeste, 3-Sul,
4-Outros), Motivo da Viagem (1-lazer, 2-trabalho, 3-outros), Sexo, Tipo de Quarto Desejado(1-Standard,
2-Luxo) e Quantidade de dias. O programa irá calcular o valor pago pelo hospede. No final deve ser
impresso o relatório com os dados de todos os hóspedes, além do relatório estatístico.

O cálculo do valor a ser pago pelo hóspede segue as regras abaixo:
• Se o quarto for do tipo 1, a diária custa R$ 100,00.
• Se o quarto for do tipo 2 a diária custa R$ 130,00.

Relatório Final:
o Quantidade de homens em quarto de luxo
o percentual de homens que viajam a trabalho
o quantidades de mulheres provenientes da região Sudeste
o total arrecadado pelo hotel
A quantidade de hospede é desconhecida.
OBS: Verificar se o tipo de quarto que o hóspede deseja está disponível.

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>



struct hotel{
    int standard;
    int luxo;

};


struct hospede{
    int codigo;
    char nome[50];    
    int quantidade_dias;
   
};

int main (){


int regiao_origem;
int motivo_viajem;
int tipo_quarto;








    return 0;
}