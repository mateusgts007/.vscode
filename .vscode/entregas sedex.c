#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main(){

    float peso_encomenda, calculo_valor;

    int regiao, norte, nordeste, centro_oeste, sudeste, sul;

    int  tipo_entrega,sedex, sedex_10;


    
    printf("escolha o tipo de entrega:\n"); ////////////////// tipo de entrega********************
       
    printf("(1) sedex\n");     
    scanf("%d", &sedex);

    printf("(2) sedex 10\n");
    scanf("%d", &sedex_10);


    printf("onde deve ser entregue?\n"); ///////////////////////// onde deve ser entregue******************
    printf("(1) norte\n");
    printf("(2) nordeste\n");
    printf("(3) centro_oeste\n");
    printf("(4) sudeste\n");
    printf("(5) sul\n");

        scanf("%d", &norte);
        scanf("%d", &nordeste);                    /////////////////// lendo as regioes
        scanf("%d", &centro_oeste);
        scanf("%d", &sudeste);
        scanf("%d", &sul);


    printf("qual o peso da encomenda em (kg)?");                                 ////////***** qual o peso da encomenda *********************
        scanf("%f",&peso_encomenda);


if(peso_encomenda <= 1 && tipo_entrega == sedex && regiao == norte ){           ////////////////////////// regioes ////////////////////////
    calculo_valor = (peso_encomenda * 5.00) + 9.00 + 3.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda <= 1 && tipo_entrega == sedex && regiao == nordeste ){
    calculo_valor = (peso_encomenda * 5.00) + 9.00 + 2.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda <= 1 && tipo_entrega == sedex && regiao == centro_oeste ){
    calculo_valor = (peso_encomenda * 5.00) + 9.00 + 6.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda <= 1 && tipo_entrega == sedex && regiao == sudeste ){
    calculo_valor = (peso_encomenda * 5.00) + 9.00 + 5.00;
        printf("aqui esta o valor: %f",calculo_valor);
}
else if(peso_encomenda <= 1 && tipo_entrega == sedex && regiao == sul ){
    calculo_valor = (peso_encomenda * 5.00) + 9.00 + 7.00;
        printf("aqui esta o valor: %f",calculo_valor);
}  



else if(peso_encomenda <= 1 && tipo_entrega == sedex_10 && regiao == norte ){ ////////////////////////// tipo de entrega**************///////////////////
    calculo_valor = (peso_encomenda * 5.00) + 11.00 + 3.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda <= 1 && tipo_entrega == sedex_10 && regiao == nordeste ){
    calculo_valor = (peso_encomenda * 5.00) + 11.00 + 2.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda <= 1 && tipo_entrega == sedex_10 && regiao == centro_oeste ){
    calculo_valor = (peso_encomenda * 5.00) + 11.00 + 6.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda <= 1 && tipo_entrega == sedex_10 && regiao == sudeste ){
    calculo_valor = (peso_encomenda * 5.00) + 11.00 + 5.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda <= 1 && tipo_entrega == sedex_10 && regiao == sul ){
    calculo_valor = (peso_encomenda * 5.00) + 11.00 + 7.00;
        printf("aqui esta o valor: %f",calculo_valor);
}        //////////////*****************************************************************tipo de entrega sendo sedex ou sedex_10**********/////////////////////


else if(peso_encomenda >=1 && peso_encomenda <= 5 && tipo_entrega == sedex && regiao == norte ){ 
    calculo_valor = (peso_encomenda * 10.00) + 9.00 + 3.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda <= 1 && peso_encomenda <= 5 && tipo_entrega == sedex && regiao == nordeste ){
    calculo_valor = (peso_encomenda * 10.00) + 9.00 + 2.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda <= 1 && peso_encomenda <= 5 &&  tipo_entrega == sedex && regiao == centro_oeste ){
    calculo_valor = (peso_encomenda * 10.00) + 9.00 + 6.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda <= 1 && peso_encomenda <= 5 && tipo_entrega == sedex && regiao == sudeste ){
    calculo_valor = (peso_encomenda * 10.00) + 9.00 + 5.00;
        printf("aqui esta o valor: %f",calculo_valor);
}
else if(peso_encomenda <= 1 && peso_encomenda <= 5 && tipo_entrega == sedex && regiao == sul ){
    calculo_valor = (peso_encomenda * 10.00) + 9.00 + 7.00;
        printf("aqui esta o valor: %f",calculo_valor);
}   ///////////////////////////////////////////////////////////////////////////////////////// peso da encomenda sendo de 1 a 5 kg *********************


else if(peso_encomenda > 5 && tipo_entrega == sedex && regiao == norte ){ ////////////////// peso da encomenda superior a 5 kg ////////////////
    calculo_valor = (peso_encomenda * 15.00) + 9.00 + 3.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda > 5 && tipo_entrega == sedex && regiao == nordeste ){
    calculo_valor = (peso_encomenda * 10.00) + 9.00 + 2.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda > 5 &&  tipo_entrega == sedex && regiao == centro_oeste ){
    calculo_valor = (peso_encomenda * 10.00) + 9.00 + 6.00;
        printf("aqui esta o valor: %f",calculo_valor);
}

else if(peso_encomenda > 5 && tipo_entrega == sedex && regiao == sudeste ){
    calculo_valor = (peso_encomenda * 10.00) + 9.00 + 5.00;
        printf("aqui esta o valor: %f",calculo_valor);
}
else if(peso_encomenda > 5 && tipo_entrega == sedex && regiao == sul ){
    calculo_valor = (peso_encomenda * 10.00) + 9.00 + 7.00;
        printf("aqui esta o valor: %f",calculo_valor);
}   




    return 0;
}