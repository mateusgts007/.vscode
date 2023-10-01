
#include <stdio.h>


int func (int num){ /// função para comparar se o numero informado é divisível por 3

    if (num %3 == 1){

        printf("<%d> nao e divisivel por 3\n",num);
    }

    if( num %3 == 0){
        printf("<%d> e divisel por 3\n",num);
    }

    return 0;
}


int main (){

int num;

    while(num != 0){

        printf("informe numeros inteiros (0) para sair\n");
        scanf("%d",&num);

        func(num);

    }



    return  0;
}