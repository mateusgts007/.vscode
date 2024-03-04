#include <stdio.h>

int divisao(int num1, int num2) {
    if (num2 == 0) {
        return 0;
    }
    return (num1 % num2 == 0); // Retorna 1 se for divisível, 0 caso contrário
}

int main() {
    int num1, num2;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    printf("Digite outro numero (diferente de 0): ");
    scanf("%d", &num2);

    if (divisao(num1, num2)) {
        printf("%d eh divisivel por %d\n", num1, num2);
    } else {
        printf("%d nao eh divisivel por %d\n", num1, num2);
    }

    return 0;
}
