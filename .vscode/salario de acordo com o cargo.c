#include <stdio.h>

int main() {
    float salario_base, aumento_salario;
    int cargo;

    printf("Digite o seu salario base:\n");
    scanf("%f", &salario_base);

    printf("(1) Gerente\n");
    printf("(2) Engenheiro\n");
    printf("(3) Tecnico\n");
    printf("(4) Auxiliar\n");

    printf("Digite o seu cargo: ");
    scanf("%d", &cargo);

    switch(cargo){

        case 1:
        aumento_salario = salario_base * 0.1;
        break;

        case 2:
        aumento_salario = salario_base * 0.2;
        break;
        
        case 3:
        aumento_salario = salario_base * 0.3;
        break;

        case 4:
        aumento_salario = salario_base * 0.4;
        
        default:
        aumento_salario = 0;

    }

    printf("o seu novo salario e %.2f",aumento_salario + salario_base);


    return 0;
}
