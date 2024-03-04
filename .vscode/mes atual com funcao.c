#include <stdio.h>

int mesesRestantesNoAno(int mesAtual) {
    if (mesAtual < 1 || mesAtual > 12) {
        
        printf("Mes invalido. Informe um valor entre 1 e 12.\n");
        return -1;
    }

    int mesesRestantes = 12 - mesAtual;
    return mesesRestantes;
}

int main() {
    
    int mesAtual;


    printf("Digite o numero do mes atual (1 a 12): \n");
        scanf("%d", &mesAtual);

        int mesesFaltantes = mesesRestantesNoAno(mesAtual);

            if (mesesFaltantes != -1) {

                printf("Faltam %d meses para o final do ano.\n", mesesFaltantes);
    }

    return 0;
}
