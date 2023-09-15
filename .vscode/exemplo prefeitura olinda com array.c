#include <stdio.h>

int main() {
    int vetorSalario[1000]; 
    int somaSalarios = 0;

    int vetorFilho[1000]; 
    int mediaFi = 0;
    int variosFilhos = 0; 

    int menorSalario = 0;
    int maiorSalario = 0;

    for (int i = 1; i <= 1000; i++) { 
        printf("Digite o salario da populacao %d:\n", i);
        scanf("%d", &vetorSalario[i]);
        somaSalarios += vetorSalario[i]; 

        if (vetorSalario[i] > maiorSalario) {
            maiorSalario = vetorSalario[i];
        }
        
        if (vetorSalario[i] < menorSalario || menorSalario == 0) { 
            menorSalario = vetorSalario[i];
        }
    }

    for (int i = 1; i <= 1000; i++) { 
        printf("Digite o numero de filhos da populacao %d:\n", i);
        scanf("%d", &vetorFilho[i]);
        mediaFi += vetorFilho[i];

        if (vetorFilho[i] > 2) { 
            variosFilhos++;
        }
    }

    float porcentagem = (variosFilhos * 100.0) / 1000.0; 
    int mediaSalario = somaSalarios / 1000; 
    int mediaFilho = mediaFi / 1000; 

    printf("Aqui esta a media de filhos: %d\n", mediaFilho);
    printf("Aqui esta a porcentagem de habitantes com mais de dois filhos: %.2f%%\n", porcentagem);
    printf("Aqui esta a media dos salarios dessa populacao: %d\n", mediaSalario); 
    printf("O maior salario foi: %d\n", maiorSalario);
    printf("O menor salario foi: %d\n", menorSalario);

    return 0;
}
