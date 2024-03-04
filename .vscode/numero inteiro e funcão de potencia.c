#include <stdio.h>
#include <math.h>

int potencia(double num,double expoente){
   return pow(num,expoente);
}

int main() {
  
double resultado,expoente,num;

    printf("digite um numero inteiro:\n");
        scanf("%lf",&num);

    printf("digite um expoente qualquer:\n");
        scanf("%lf",&expoente);

     resultado = potencia(num,expoente);

     printf("aqui esta a potenciacao que voce deseja: %.2lf\n",resultado);   

    return 0;
}
