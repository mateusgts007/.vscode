#include <stdio.h>
#include <stdlib.h>

int main() {
    int canal, pessoas_assistindo;
    float percentualCanal;
    int maiorAudiencia = -1;  // Inicializado com -1 para representar "indefinido"
    int menorAudiencia = -1;  // Inicializado com -1 para representar "indefinido"
    int contador = 0;

    do {
        printf("Escolha o canal de TV:\n");
        printf("(1) SBT\n");
        printf("(2) Record\n");
        printf("(3) Globo\n");
        printf("(4) RedeTV\n");
        scanf("%d", &canal);

        printf("Quantas pessoas estavam assistindo:\n");
        scanf("%d", &pessoas_assistindo);

        percentualCanal = (float) pessoas_assistindo / canal * 100;

        if (percentualCanal > 25) {
            switch (canal) {
                case 1:
                    printf("Canal 1 (SBT) tem a maior audiencia: %.2f\n", percentualCanal);
                    break;
                case 2:
                    printf("Canal 2 (Record) tem a maior audiencia: %.2f\n", percentualCanal);
                    break;
                case 3:
                    printf("Canal 3 (Globo) tem a maior audiencia: %.2f\n", percentualCanal);
                    break;
                case 4:
                    printf("Canal 4 (RedeTV) tem a maior audiencia: %.2f\n", percentualCanal);
                    break;
                default:
                    printf("Canal desconhecido com audiencia: %.2f\n", percentualCanal);
            }
        }

        if (maiorAudiencia == -1 || pessoas_assistindo > maiorAudiencia) {
            maiorAudiencia = pessoas_assistindo;
        }
        if (menorAudiencia == -1 || pessoas_assistindo < menorAudiencia) {
            menorAudiencia = pessoas_assistindo;
        }

        contador++;

    } while (contador < 2);

    printf("Maior audiencia: %d\n", maiorAudiencia);
    printf("Menor audiencia: %d\n", menorAudiencia);

    return 0;
}
