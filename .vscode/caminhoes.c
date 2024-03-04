#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){


/*
Um determinado posto rodoviário faz a apreensão de caminhões com carga superior ao permitido
fazendo a pesagem dos caminhões que passam por uma rodovia. 

O posto obtém o peso da carga do caminhão a partir da seguinte formula: Peso Carga = Peso Final - Peso inicial onde, Peso inicial é o peso
do caminhão antes de ser colocada a carga em Toneladas, Quilos e Gramas.

Peso Final é o peso do caminhão após a carga ser colocada em toneladas, quilos e gramas. 

Assim, fazer um programa que leia para um caminhão: o peso inicial (toneladas, quilos e gramas), o peso final (toneladas, quilos e gramas) e a carga
máxima permitida. Se a carga for superior ao permitido escrever a mensagem: "Carga superior ao
permitido" e a quantidade que passou do permitido. Caso contrário escrever "Carga OK!".

Exemplo: Peso Inicial: 1 ton. 10 kg. e 100 g.
Peso Final : 2 ton. 9 kg. e 400 g.
Carga Maxima Permitida: 700Kg
Peso Carga: 999 Kg. 300 g.
Carga superior ao permitido. Passaram 199 Kg e 300 g.
*/


int tonInicial,quiloInicial,gramaInicial;
int toneladasFinal, quilosFinal, gramasFinal;
int cargaMaxima;


printf("Digite o peso inicial (toneladas, quilos e gramas): ");
    scanf("%d %d %d", &tonInicial, &quiloInicial, &gramaInicial);
    
    printf("Digite o peso final (toneladas, quilos e gramas): ");
    scanf("%d %d %d", &toneladasFinal, &quilosFinal, &gramasFinal);
    
    printf("Digite a carga maxima permitida (em quilos): ");
    scanf("%d", &cargaMaxima);


 int pesoInicialEmGramas = (tonInicial * 1000000) + (quiloInicial * 1000) + gramaInicial;
    int pesoFinalEmGramas = (toneladasFinal * 1000000) + (quilosFinal * 1000) + gramasFinal;
        int pesoCargaEmGramas = pesoFinalEmGramas - pesoInicialEmGramas;



 if (pesoCargaEmGramas > cargaMaxima) {
        printf("Carga superior ao permitido. Passaram %d Kg e %d g.\n", 
               (pesoCargaEmGramas - cargaMaxima) / 1000, (pesoCargaEmGramas - cargaMaxima) % 1000);
    } else {
        printf("Carga OK!\n");
    }







    return 0;
}