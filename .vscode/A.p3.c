/*
3.	Uma empresa prestadora de serviços armazena informações sobre os serviços prestados. 
Sabe-se que a empresa pode realizar no máximo 3 serviços diariamente.
 A empresa realiza quatro tipos de serviços:

1) pintura; 
2) jardinagem; 
3) faxina 
4) reforma em geral. 

 Cada serviço realizado dever ser cadastrado com as seguintes informações: número de serviço, valor do serviço, código do serviço e código do cliente.
  Cadastre os quatro  tipos de serviços(código e descrição) que a empresa poderá realizar.
   Para isso, utilize um vetor de quatro posições. 
  O programa deverá mostrar o seguinte menu de opções:
a.	Cadastrar os tipos de serviços
b.	Cadastrar os serviços prestados
c.	Mostrar os serviços prestados em um determinado dia.

*/


struct Servico {
    int numero;
    float valor;
    int codigoServico;
    int codigoCliente;
    char data[20];
};



#include <stdio.h>





int main() {
    int escolha;
    int contadorServicos = 0;
    const int maxServicos = 3;
    char tiposServicos[4][20]; 
    char dataConsulta[20];
    
    struct Servico servicosPrestados[maxServicos];


do {

      printf("\n\t\tOs servicos que podem ser prestados estao abaixo:\n");
      printf("1) Pintura\n");
      printf("2) Jardinagem\n");
      printf("3) Faxina\n");
      printf("4) Reforma Geral\n");
      printf("Selecione uma opcao:\n");
      printf("1 - Cadastrar tipos de Servicos\n");
      printf("2 - Cadastrar os Servicos Prestados\n");
      printf("3 - Mostrar os Servicos Prestados em um determinado dia\n");
      printf("0 - Sair\n");
        
        scanf("%d", &escolha);

        switch (escolha) {

            case 1:

                printf("\n\tCADASTRAR TIPOS DE SERVIÇOS\n");

                for (int i = 0; i < 4; i++) {

                    printf("Digite a descricao do servico %d: ", i + 1);

                    scanf("%s", tiposServicos[i]);
                }

                break;

            case 2:

                if (contadorServicos < maxServicos) {

                  printf("Digite o numero do servico: ");
                    servicosPrestados[contadorServicos].numero = contadorServicos + 1;

                    printf("Digite o valor do servico: ");
                    scanf("%f", &servicosPrestados[contadorServicos].valor);

                    printf("Digite o codigo do servico (1-4): ");
                    scanf("%d", &servicosPrestados[contadorServicos].codigoServico);

                    printf("Digite o codigo do cliente: ");
                    scanf("%d", &servicosPrestados[contadorServicos].codigoCliente);

                    printf("Digite a data do servico (dd/mm/yyyy): ");
                    scanf("%s", servicosPrestados[contadorServicos].data);


                  
                    printf("Serviço registrado com sucesso.\n");

                    contadorServicos++;

                } else {

                    printf("Numero maximo de servicos atingido.\n");
                }
                break;


            case 3:

    

                printf("Digite a data para consultar os servicos (dd/mm/yyyy): ");

                scanf("%s", dataConsulta);

                printf("\nServicos prestados na data %s:\n", dataConsulta);

                for (int i = 0; i < contadorServicos; i++) {

                    if (strcmp(servicosPrestados[i].data, dataConsulta) == 0) {
                        printf("Numero do servico: %d\n", servicosPrestados[i].numero);
                        printf("Valor do servico: %.2f\n", servicosPrestados[i].valor);
                        printf("Codigo do servico: %d\n", servicosPrestados[i].codigoServico);
                        printf("Codigo do cliente: %d\n", servicosPrestados[i].codigoCliente);
                        printf("\n");
                    }
                }



                break;

            case 0:

                printf("Saindo do programa.\n");

                break;

            default:

                printf("Opcao invalida. Tente novamente.\n");

        }
    } while (escolha != 0 && contadorServicos < maxServicos);


    return 0;
}






