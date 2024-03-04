#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main() {

/*
Faça um programa para ler a base e a altura de um retângulo, a base e a altura de um triângulo e o raio
de uma circunferência e mostrar qual a maior área.
*/


float base,altura,retangulo;
float base_triangulo,altura_triangulo,triangulo;
float raio,circunferencia;


    printf("digite a base e a altura do retangulo:\n");
        scanf("%f%f",&base,&altura);

    printf("digite a base e a altura do triangulo:\n");
        scanf("%f%f",&base_triangulo,&altura_triangulo);

    printf("digite o raio de uma circunferencia:\n");
        scanf("%f",&raio);


    retangulo = base * altura;

    triangulo = (base_triangulo * altura_triangulo) / 2;

    circunferencia = raio * 3.14;


    if (retangulo > triangulo && retangulo > circunferencia){

        printf("a maior area foi do retangulo : %.0f(cm) ",retangulo);
    }
        else if( triangulo > retangulo && triangulo > circunferencia){

            printf("a maior area foi do triangulo: %.0f(cm)",triangulo);
    }
        
            else if(circunferencia > retangulo && circunferencia > triangulo){

                printf("a maior area foi da circunferencia: %.2f(cm)",circunferencia);

            }

    return 0;
}
