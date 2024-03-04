#include <stdio.h>
#include <stdlib.h>

int main() {
   
float lata_refri ;                              //////////// 2.00
float pizza_pequena = 1;                         ///////////  8.0;
float pizza_media = 2;                             ////////  12.00;
float pizza_grande = 3;                              ///// 16.00
float valor_conta;
float quantidade_pizza,tipo_pizza;
float pessoas_mesa;
float calculo,valor_por_pessoa_a_pagar;



printf("quantas pessoas vao sentar na mesa?:\n");
    scanf("%f",&pessoas_mesa);

printf("quantas latas de refri vao querer?:\n");
    scanf("%f",&lata_refri);

printf("(1) pizza pequena\n");
printf("(2) pizza media\n");                      
printf("(3) pizza grande\n");       ////////////////////////////////// opçoes de pizza

printf("qual pizza vao querer?:\n");
    scanf("%f",&tipo_pizza);

printf("quantas pizza vao querer?:\n");
    scanf("%f",&quantidade_pizza);


if(tipo_pizza == 1 && lata_refri > 0){
    calculo = (quantidade_pizza * 8.00 ) + 2.00 ;
    printf("o valor das pizzas pequenas com latas de refri deu:(R$) %.2f\n",calculo);

} 

else if(tipo_pizza == 1 && lata_refri == 0){
    calculo = quantidade_pizza * 8.00 ;
    printf("o valor das pizzas pequenas deu:(R$) %.2f\n",calculo); /////////////////////// pizza pequena com ou sem refri

}

else if(tipo_pizza == 2 && lata_refri > 0){
    calculo = (quantidade_pizza * 12.00) + 2.00;
    printf("o valor das pizzas medias com latas de refri deu:(R$) %.2f\n",calculo);

} 

else if(tipo_pizza == 2 && lata_refri == 0){
    calculo = quantidade_pizza * 12.00 ;
    printf("o valor das pizzas medias deu:(R$) %.2f\n",calculo); //////////////////////////////// pizza media com ou sem refri

}

else if(tipo_pizza == 3 && lata_refri > 0){
    calculo = (quantidade_pizza * 16.00) + 2.00;
    printf("o valor das pizzas grandes com latas de refri deu:(R$) %.2f\n",calculo);

} 

else if(tipo_pizza == 3 && lata_refri == 0){
    calculo = quantidade_pizza * 16.00 ;
    printf("o valor das pizzas grandes deu:(R$) %.2f\n",calculo); ////////////////////////////////// pizza grande com ou sem refri

}



if(pessoas_mesa >=2){

    valor_por_pessoa_a_pagar = calculo / pessoas_mesa;

    printf("o valor que cada pessoa deve pagar individualmente e:(R$)%.2f\n",valor_por_pessoa_a_pagar);



    valor_conta = (calculo / pessoas_mesa) * 0.1;

    printf("o valor total da conta dividida igualmente entre as pessoas da mesa com os 10 %% do garcom foi de:(R$) %.3f\n",valor_conta);

}

else {

    printf("o valor da conta deu:(R$) %.2f",calculo);
}


return 0;
}







  

