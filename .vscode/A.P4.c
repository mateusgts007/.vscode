/*
Faça um programa que efetue reserva de passagens aéreas de determinada companhia. O
programa deverá ler os números dos aviões e o número de lugares disponíveis em cada
um.Utilize um vetor de quatro posições, no qual cada posição representa um avião, e outro vetor
também de quatro posições para armazenar os lugares disponíveis.O programa deverá mostrar
o seguinte menu de opções:
a. Cadastrar os números dos aviões
b. Cadastrar o número de lugares disponíveis em cada avião
c. Reservar passagem
d. Consultar por passageiro
e. Consultar por avião


*/


#include <stdio.h>
#include <string.h>

#define NUM_AVIOES 4

// Estrutura para armazenar informações de reservas
struct Reserva {
    char passageiro[50];
    int aviao;
    int assento;
};

int main() {
    int escolha;
    int numerosAvioes[NUM_AVIOES];
    int lugaresDisponiveis[NUM_AVIOES];
    struct Reserva reservas[100]; // Pode armazenar até 100 reservas
    int numReservas = 0;

    for (int i = 0; i < NUM_AVIOES; i++) {
        printf("Digite o número do avião %d: ", i + 1);
        scanf("%d", &numerosAvioes[i]);
        printf("Digite o número de lugares disponíveis no avião %d: ", i + 1);
        scanf("%d", &lugaresDisponiveis[i]);
    }

    do {
        printf("\n\t\tMenu de Opções:\n");
        printf("a. Cadastrar os números dos aviões\n");
        printf("b. Cadastrar o número de lugares disponíveis em cada avião\n");
        printf("c. Reservar passagem\n");
        printf("d. Consultar por passageiro\n");
        printf("e. Consultar por avião\n");
        printf("0. Sair\n");

        scanf(" %c", &escolha);

        switch (escolha) {
            case 'a':
                for (int i = 0; i < NUM_AVIOES; i++) {
                    printf("Digite o número do avião %d: ", i + 1);
                    scanf("%d", &numerosAvioes[i]);
                }
                break;
            case 'b':
                for (int i = 0; i < NUM_AVIOES; i++) {
                    printf("Digite o número de lugares disponíveis no avião %d: ", i + 1);
                    scanf("%d", &lugaresDisponiveis[i]);
                }
                break;
            case 'c':
                if (numReservas < 100) {
                    char nome[50];
                    int aviao, assento;

                    printf("Digite o nome do passageiro: ");
                    scanf("%s", nome);

                    printf("Digite o número do avião: ");
                    scanf("%d", &aviao);

                    printf("Digite o número do assento: ");
                    scanf("%d", &assento);

                    if (aviao >= 1 && aviao <= NUM_AVIOES && assento >= 1 && assento <= lugaresDisponiveis[aviao - 1]) {
                        strcpy(reservas[numReservas].passageiro, nome);
                        reservas[numReservas].aviao = aviao;
                        reservas[numReservas].assento = assento;
                        numReservas++;
                        printf("Reserva efetuada com sucesso!\n");
                    } else {
                        printf("Avião ou assento inválido.\n");
                    }
                } else {
                    printf("Limite de reservas atingido.\n");
                }
                break;
            case 'd':
                printf("Digite o nome do passageiro para consultar: ");
                char nomeConsulta[50];
                scanf("%s", nomeConsulta);
                printf("Reservas para o passageiro %s:\n", nomeConsulta);
                for (int i = 0; i < numReservas; i++) {
                    if (strcmp(reservas[i].passageiro, nomeConsulta) == 0) {
                        printf("Avião: %d, Assento: %d\n", reservas[i].aviao, reservas[i].assento);
                    }
                }
                break;
            case 'e':
                printf("Digite o número do avião para consultar: ");
                int aviaoConsulta;
                scanf("%d", &aviaoConsulta);
                printf("Reservas para o avião %d:\n", aviaoConsulta);
                for (int i = 0; i < numReservas; i++) {
                    if (reservas[i].aviao == aviaoConsulta) {
                        printf("Passageiro: %s, Assento: %d\n", reservas[i].passageiro, reservas[i].assento);
                    }
                }
                break;
            case '0':
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != '0');

    return 0;
}
