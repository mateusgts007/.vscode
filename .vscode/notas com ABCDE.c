#include <stdio.h>
#include <stdlib.h>

int main(){

float nota1,nota2,nota3,media;
char matricula ;


    printf("digite sua matricula :\n");
        scanf("%c",&matricula);

            fflush(stdin);
        
    printf("digite sua primeira nota:\n");
        scanf("%f",&nota1);
                
    printf("digite sua segunda nota:\n");
        scanf("%f",&nota2);
                
    printf("digite sua terceira nota:\n");
        scanf("%f",&nota3);


    media = (nota1 + nota2 + nota3) / 3;

    if (media >= 9.0){

        printf("seu conceito e >>> A <<<\n");

            printf("aprovado");
    }

            else if (media >= 7.5 && media <9.0){

                printf("seu conceito e >>> B <<<\n");

                    printf("aprovado");
    }

                 else if (media >= 6.0 && media <7.5){

                    printf("seu conceito e >>> C <<<\n");

                        printf("aprovado");
    }

                    else if (media >= 4.0 && media <6.0){
                        printf("seu conceito e >>> D <<<\n ");

                            printf("reprovado");
    }

                             else if (media< 4.0){

                                    printf("seu conceito e >>> E <<<\n");

                                        printf("reprovado");
    }


    return 0;
}