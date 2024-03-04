#include <stdio.h>
#include <stdlib.h>

int main(){
    int I;
    float A, B, C;

    printf("Digite (1) para imprimir os valores em ordem crescente:\n");
    printf("Digite (2) para imprimir os valores em ordem crescente:\n");
    
    scanf("%d", &I);

    printf("Digite tres numeros reais:\n");
    scanf("%f %f %f", &A, &B, &C);

    switch(I){
        case 1:
            if (A <= B && A <= C) {
                if (B <= C) {
                    printf("%.0f %.0f %.0f\n", A, B, C);
                } else {
                    printf("%.0f %.0f %.0f\n", A, C, B);
                }
            } else if (B <= A && B <= C) {
                if (A <= C) {
                    printf("%.0f %.0f %.0f\n", B, A, C);
                } else {
                    printf("%.0f %.0f %.0f\n", B, C, A);
                }
            } else {
                if (A <= B) {
                    printf("%.0f %.0f %.0f\n", C, A, B);
                } else {
                    printf("%.0f %.0f %.0f\n", C, B, A);
                }
            }


           case 2:
           if (A >= B && A >= C) {
                if (B >= C) {
                    printf("%.0f %.0f %.0f\n", A, B, C);
                } else {
                    printf("%.0f %.0f %.0f\n", A, C, B);
                }

               } else if (B >= A && B >= C) {
                if (A >= C) {
                    printf("%.0f %.0f %.0f\n", B, A, C);
                } else {
                    printf("%.0f %.0f %.0f\n", B, C, A);
                }

                } else {
                if (A >= B) {
                    printf("%.0f %.0f %.0f\n", C, A, B);
                } else {
                    printf("%.0f %.0f %.0f\n", C, B, A);
                }
                    break;
                }
    }

    return 0;
}
