#include <stdio.h> ///// declaração de bibliotecas usadas
#include <stdlib.h>
#include <string.h>
#include <unistd.h> 

typedef struct  { ///////// estrutura para o programa de estoque

    char nomeProduto[50];
    float preco;
    char unidade[10];
    int quantidade_estoque;

    int confirmarInclusao; ///// usado no menu de inclusao
    int novaInclusao;  ///////// usado no menu de inclusao

    int confirmarAlteracao; /// usado no menu de alteração
    int novaAlteracao; //// usado no menu de alteração

    int novaConsulta; //// usado no menu de consulta

    int confirmarExclusao; //// usado no menu de exclusão
    int novaExclusao; ///// usado no menu de exclusão /////////////

    int confirmarEntrada; /// usado no menu de entrada de produto *****
    int quantidadeEntrada; /// usado no menu de entrada de produto ****
    int quantidadeAtual; //// usado no menu de entrada de produto ////
    int quantidadeFinal; ///// usado no menu de entrada de produto *****
    int novaEntrada; /// usado no menu de entrada de produto ******

    int confirmarSaida; //// usado no menu de saida de produto ******
    int novaSaida; ///// usado no menu de saida de produto

    float percentualReajuste; /// usado no menu de reajuste de preços
    int confirmarReajuste; //// usado no menu de reajuste de preços
    int novoReajuste; /// usado no menu de reajuste de preços
    FILE *arquivo; ///// usado no reajuste

} estoque;


void inclusaoProduto(estoque *produto){ /////////////////////////////////////// inicio da função de incluir produtos
 
int novaInclusao; ////// variavel para o loop de inclusao

    FILE *arquivo = fopen("estoque.txt", "a"); ////// abrindo o arquivo para modo de escrita
    if(arquivo == NULL){
        printf("Erro ao abrir o arquivo para escrita.\n");
        return;
    }

do{ ////// inicio do loop infinito de nova inclusao, parando apenas quando o usuário nao quiser incluir mais nenhum produto

   printf("Nome do Produto: ");        ////// solicitando nome do produto
   fflush(stdin);                     ////// limpa o buffer de entrada
   fgets(produto->nomeProduto, sizeof(produto->nomeProduto), stdin);  ////// fgets caso o nome do produto tenha espaços
    produto->nomeProduto[strcspn(produto->nomeProduto, "\n")] = '\0'; ////// Remove a quebra de linha se presente

   printf("Preco: ");             ///// solicitando preço do produto
   scanf("%f", &produto->preco); 

   if(produto->preco <=0){   ///// se o preço for menor ou igual a 0 ele exibe uma mensagem de erro
    printf("Erro: O preco deve ser maior que zero.\n");
    fclose(arquivo);  ///////  fecha o arquivo se o preço for menor ou igual a 0
    break;
   }

   printf("Unidade: ");    ///// solicitando  a unidade do produto, ex: kg.
   fflush(stdin);          ///// limpa oo buffer de entrada
    fgets(produto->unidade, sizeof(produto->unidade), stdin); /// fgets caso a descrição da unidade tiver espaços 
    produto->unidade[strcspn(produto->unidade, "\n")] = '\0'; /// elimina a quebra de linha se tiver

    printf("Quantidade em Estoque: ");     ////// solicitando a quantidade em estoque do produto
    scanf("%d", &produto->quantidade_estoque);  

    if(produto->quantidade_estoque < 0){   ////// se a quantidade do estoque for menor que 0 ele exibe uma mensagem de erro
        printf("Erro: A quantidade no estoque deve ser igual ou superior a 0.\n");
        fclose(arquivo); /////// fecha o arquivo se a quantidade for menor do que 0
        break;
    }

    printf("Confirmar Inclusao (1-Sim/0-Nao)"); ////// solicitando a confirmação da inclusao 
    scanf("%d", &produto->confirmarInclusao);   

    if(produto->confirmarInclusao == 1){     ////// se a inclusao for confirmada ele grava os dados no arquivo estoque.txt

    fprintf(arquivo, "%s;%.2f;%s;%d\n", produto->nomeProduto, produto->preco, produto->unidade, produto->quantidade_estoque); /// gravando dados no arquivo
    printf("Produto Incluido com sucesso!!!\n");

    } else {
        printf("inclusao cancelada\n");    ////// se a opção escolhida for 0, ele cancela a inclusao
    } 

    printf("Nova Inclusao (1-Sim/0-Nao)"); ////// solicitando a nova inclusao
    scanf("%d", &novaInclusao);

} while(novaInclusao == 1);         ////// loop infinito de nova inclusao, parando apenas quando o usuário nao quiser incluir mais nenhum produto

fclose(arquivo); ////// fechando o arquivo

} //////////////////*************// fim da função de incluir dados /////////////****************//


int alteracaoProduto(estoque *novoProduto) { ////////////////////////////////// inicio da função alteração produtos //////////////////////

    FILE *arquivo = fopen("estoque.txt", "r"); ////// abre o arquivo em modo leitura
    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo para alteracao\n");
        return 0;
    }

    char linha[1000]; ////// vetor para armazenar os dados 
    int produtoEncontrado = 0; /// variavel que serve para contar se o produto foi enocntrado

    printf("Nome do Produto a ser alterado:");// Solicitação de informações do produto a ser alterado
    fflush(stdin);
    fgets(novoProduto->nomeProduto, sizeof(novoProduto->nomeProduto), stdin);
    novoProduto->nomeProduto[strcspn(novoProduto->nomeProduto, "\n")] = '\0';  // Remover a quebra de linha, se presente

    printf("Novo Preco:");
    scanf("%f", &novoProduto->preco); //// solicitando o novo preço

    printf("Nova Quantidade:");
    scanf("%d", &novoProduto->quantidade_estoque); //// solicitando a nova quantidade

    printf("Nova Unidade:"); //// solicitando a nova unidade
    fflush(stdin);
    fgets(novoProduto->unidade, sizeof(novoProduto->unidade), stdin);
    novoProduto->unidade[strcspn(novoProduto->unidade, "\n")] = '\0';  // Remover a quebra de linha, se presente

    printf("Confirmar Alteracao (1-Sim/0-Nao): ");
    int confirmarAlteracao;
    scanf("%d", &confirmarAlteracao);

    if (confirmarAlteracao == 1) {
        
        while (fgets(linha, sizeof(linha), arquivo)) { // Loop de leitura e alteração no arquivo
            char produtoAtual[50];
            float precoAtual;
            char unidadeAtual[10];
            int quantidadeAtual;

            if (sscanf(linha, "%[^;];%f;%[^;];%d", produtoAtual, &precoAtual, unidadeAtual, &quantidadeAtual) != 4) { /// "4" é o número de informações que eu preciso, não pode ser diferente disso
                continue;
            }

            if (strcmp(novoProduto->nomeProduto, produtoAtual) == 0) { //// compara os nomes armazenados e o nome informado 
                produtoEncontrado = 1;

                fseek(arquivo, -strlen(linha), SEEK_CUR); /// ponteiro fica atras da linha que vou modificar

                fflush(arquivo); /// garante que as alterações nao sejam prejudicadas

                fclose(arquivo); /// fecha o arquivo de leitura

                FILE *arquivo = fopen("estoque.txt", "r+"); //// abre o arquivo em modo escrita e leitura
                if(arquivo == NULL){
                    printf("Erro ao reabrir o arquivo.\n");
                }

                fprintf(arquivo, "%s;%.2f;%s;%d\n", novoProduto->nomeProduto, novoProduto->preco, //// gravando e sobrescrevendo as informações no arquivo
                        novoProduto->unidade, novoProduto->quantidade_estoque);

                fseek(arquivo, 0, SEEK_END); //// move o ponteiro para o final para as novas alterações sejam feitas no final do arquivo

                break;
            }
        }
        if (produtoEncontrado == 1) {
            printf("Produto alterado com sucesso.\n");

        } else {
            printf("Produto nao encontrado.\n");
        }
    } else {

        printf("Alteracao cancelada.\n");
    }
    
    fclose(arquivo); //// fecha o arquivo

    return produtoEncontrado;

}// ********* fim da função alteração produtos // ******* //
   

int consultaProdutoPorNome(estoque *produtoEncontrado){ //// inicio da função para consultar produtos

    FILE *arquivo = fopen("estoque.txt", "r");  ///// abre o arquivo em modo leitura
    if(arquivo == NULL){  /////// verifica se o arquivo foi aberto
        printf("Erro ao abrir o arquivo\n");
        return 0;
    }

    int encontrado = 0; //// variavel para contar se o item foi encontrado

    char linha[1000]; ////// array para armazenar cada linha do arquivo
    char nomeProduto[50];
    float preco;
    char unidade[10];
    int quantidade_estoque;

    char nomePesquisado[50];
    printf("Nome do produto para consulta no Estoque: "); ///// solicitando o nome do produto
    fflush(stdin);                                        ////// limpando o buffer de entrada
    fgets(nomePesquisado, sizeof(nomePesquisado), stdin);
    nomePesquisado[strcspn(nomePesquisado, "\n")] = '\0';  // Remover a quebra de linha, se presente

    while (fgets(linha, sizeof(linha), arquivo)) {   ///// lê cada linha do arquivo

        sscanf(linha, "%49[^;];%f;%9[^;];%d", nomeProduto, &preco, unidade, &quantidade_estoque); //// pega as informações armazenadas no vetor

        if (strcmp(nomeProduto, nomePesquisado) == 0) { //// comparando o nome informado e o nome do produto no estoque

            encontrado = 1; ///// variavel iniciada com 0 passa a ser 1 quando a comparação dos nomes se torna verdadeira

            strcpy(produtoEncontrado->nomeProduto, nomeProduto);
            produtoEncontrado->preco = preco;
            strcpy(produtoEncontrado->unidade, unidade);
            produtoEncontrado->quantidade_estoque = quantidade_estoque;

            break;

        }  /////// fim da comparação dos nomes

    }   ///////// fim do while para ler o arquivo

    if(encontrado == 1) { ///// se a variavel encontrado for igual a 1, exibe os dados do produto 

        printf("Produto encontrado!!!\n");
        printf("Nome: %s\n", produtoEncontrado->nomeProduto);
        printf("Preco: %.2f\n", produtoEncontrado->preco);
        printf("Unidade: %s\n", produtoEncontrado->unidade);
        printf("Quantidade em Estoque: %d\n", produtoEncontrado->quantidade_estoque);

    } else {

        printf("Produto nao encontrado.\n");
    }

    fclose(arquivo); //////////// fecha o arquivo

    return encontrado; ///// retorna o valor da variavel encontrado

} //// fim da função para consultar produtos


void excluirProduto(int *totalProdutos, estoque *produto) {/////////////////////// inicio da funcao de excluir produtos

    FILE *arquivo = fopen("estoque.txt", "r+"); ///// abre o arquivo para modo escrita e leitura
    if (arquivo == NULL) { ///// se o arquivo nao abrir mostra uma mensagem de erro
        printf("Erro ao abrir o arquivo para exclusao\n");
        return;
    }

    while (getchar() != '\n');  // Limpa o buffer caso aja quebra de linha anterior
    char nomeProdutoAExcluir[50]; ////// variavel para solicitar o nome do produto

    printf("Digite o nome do produto a ser excluido: "); ///// solicitando o nome
    fgets(nomeProdutoAExcluir, sizeof(nomeProdutoAExcluir), stdin);
    nomeProdutoAExcluir[strcspn(nomeProdutoAExcluir, "\n")] = '\0'; //// limpando o buffer se tiver quebra de linha ou espaço

    int produtoExcluido = 0;
    int confirmarExclusao = 0;
    long posicaoAtual = ftell(arquivo);  // Armazena a posição atual no arquivo
    long posicaoInicial = posicaoAtual;  // Armazena a posição inicial para possível reescrita

    while (fscanf(arquivo, "%49[^;];%f;%9[^;];%d", produto->nomeProduto, &produto->preco, produto->unidade, &produto->quantidade_estoque) == 4) { /// puxa as informações do arquivo

        if (strcmp(produto->nomeProduto, nomeProdutoAExcluir) == 0) { ///// compara se o nome informado é o mesmo do nome armazenado no sistema

            printf("Produto a ser excluido:\n"); //////////// mostrando as informações do produto que será excluido
            printf("Nome: %s\n", produto->nomeProduto);
            printf("Preco: %.2f\n", produto->preco);
            printf("Unidade: %s\n", produto->unidade);
            printf("Quantidade em Estoque: %d\n", produto->quantidade_estoque);

            printf("Confirmar Exclusao (1-Sim/0-Nao): "); //// pede a confirmação da exclusao
            scanf("%d", &confirmarExclusao);

            if (confirmarExclusao == 1) {
                (*totalProdutos)--; /// decrementa a quantidade do total de produtos

                produtoExcluido = 1;

                posicaoInicial = posicaoAtual;               // Mantém a posição inicial para possível reescrita

            } else {
                printf("Exclusao cancelada.\n");
            }

            fseek(arquivo, posicaoAtual, SEEK_SET); // Move o ponteiro para a posição final do registro excluído
            fseek(arquivo, strlen(produto->nomeProduto) + sizeof(float) + strlen(produto->unidade) + sizeof(int), SEEK_CUR); /// o calculo representa o tamanho do registro atual com os dados, movendo o ponteiro para depois da exclusao para escrever novos dados

        } else {
            // Mantém a posição atual
            posicaoAtual = ftell(arquivo);
        }
    }

    if (produtoExcluido) {

        fseek(arquivo, posicaoInicial, SEEK_SET);// Move para a posição inicial para possível reescrita
       
        fseek(arquivo, 0, SEEK_END); // Move para a posição final do arquivo

        ftruncate(fileno(arquivo), posicaoAtual); /// ftruncate para remover a parte que nao é mais valida apos a posicao atual
        *totalProdutos -= 1;  // Atualiza o total de produtos

        printf("Produto excluido com sucesso.\n");

    } else {
        printf("Produto nao encontrado ou exclusao cancelada.\n");
    }

    fclose(arquivo); ////// fecha o arquivo

}////////////////////////// fim da função de excluir produtos
      

void entradaProduto(estoque *produto) {////////////////// Inicio Função movimentação entrada de produto

    FILE *arquivo = fopen("estoque.txt", "r"); //// abre o arquivo para modo de escrita e leitura
    if (arquivo == NULL) { //// se nao conseguir abrir o arquivo mostra a mensagem de erro
        printf("Erro ao abrir o arquivo para entrada de produtos\n");
        return;
    }

    int continuarEntrada = 1; //// variavel para decidir se ocorrerá outras entradas

    while (continuarEntrada) { //// loop para continuar fazendo entradas 

        rewind(arquivo);    ////// reposiciona o ponteiro para o inicio a cada nova entrada 
        int produtoEncontrado = 0; //// variavel para informar se o produto foi encontrado

        char nomeProdutoLido[50];
        int quantidadeAdicionadaLida; /// usada para armazenar a quantidade de produtos adicionada

        printf("Nome do Produto: "); //// solicitando o nome do produto
        fflush(stdin); ///// limpando o buffer de entrada
        fgets(nomeProdutoLido, sizeof(nomeProdutoLido), stdin);
        nomeProdutoLido[strcspn(nomeProdutoLido, "\n")] = '\0'; // Remover a quebra de linha

        while (fscanf(arquivo, "%[^;];%f;%[^;];%d\n", produto->nomeProduto, &produto->preco, produto->unidade, &produto->quantidade_estoque) == 4){ 

            if (strcmp(produto->nomeProduto, nomeProdutoLido) == 0) { /// compara o nome informado e o nome guardado no sistema
                produtoEncontrado++;

                printf("Produto encontrado!\n"); // Exibir dados do produto
                printf("Nome: %s\n", produto->nomeProduto);
                printf("Quantidade Atual: %d\n", produto->quantidade_estoque);

                do {// Ler quantidade de entrada até que seja válida

                    printf("Quantidade de entrada: ");

                    if (scanf("%d", &quantidadeAdicionadaLida) != 1 || quantidadeAdicionadaLida <= 0) { //// só pode ser valo positivo 

                        while (getchar() != '\n');    // Limpar o buffer caso tenha quebra de linha ou espaço do teclado
                        printf("Erro: A quantidade de entrada deve ser um número inteiro maior que zero.\n");

                    } else {
                        break; // Saia do loop se a entrada for válida
                    }

                } while (1); //// lê a quantidade de entrada ate ser valida

                produto->quantidade_estoque += quantidadeAdicionadaLida; // adicionar quantidade

                printf("\nInformacoes apos a entrada:\n");
                printf("Quantidade Final: %d\n", produto->quantidade_estoque);

                printf("Confirmar Entrada (1-Sim/0-Nao): "); // Confirmar entrada
                scanf("%d", &produto->confirmarEntrada);

                if (produto->confirmarEntrada == 1) {

                    fclose(arquivo); //// fecha o arquivo antes de gravar as informações
                    FILE *arquivo = fopen("estoque.txt", "r+"); //// abre o arquivo em modo leitura e escrita
                    if(arquivo == NULL){
                        printf("Erro ao abrir o arquivo.\n");
                        return ;
                    }

                    // Atualizar o arquivo com os novos dados
                    fseek(arquivo, -strlen(produto->nomeProduto) - 4 * sizeof(int), SEEK_CUR); //// move o ponteiro para o inicio

                    fprintf(arquivo, "%s;%.2f;%s;%d\n", produto->nomeProduto, produto->preco, produto->unidade, produto->quantidade_estoque);  //// grava as novas informações no arquivo

                    printf("Deseja fazer outra entrada? (1-Sim/0-Nao): "); // Solicitar nova entrada
                    scanf("%d", &continuarEntrada);

                    if (continuarEntrada == 0) {

                        break; // Saindo do loop externo se não quiser fazer outra entrada
                    }
                } else {
                    printf("Operacao cancelada.\n");
                    break; // Saindo do loop interno se a entrada não for confirmada
                }
            }
        }

        if (!produtoEncontrado) {
            printf("Produto nao encontrado.\n");
        }
    }

    fclose(arquivo);  ////// fecha o arquivo

}///////////////Fim Função movimentação entrada de produto


void saidaProduto(estoque *produto) {/////////////////Função movimentação saida de produto

    FILE *arquivo = fopen("estoque.txt", "r"); //// abre o arquivo para leitura e escrita
    if (arquivo == NULL) { //// se nao for possivel abrir o arquivo mostra a mensagem de erro
        printf("Erro ao abrir o arquivo para saida de produtos\n");
        return;
    }

    int continuarSaida = 1; /// variavel para decidir se ocorrerá outras saídas

    while (continuarSaida) {
        rewind(arquivo);        //// move o ponteiro para o inicio a cada nova saida de produtos

        int produtoEncontradoSaida = 0; //// variavel que informa se o produto foi encontrado 
        char nomeProdutoSaida[50];
        int quantidadeSaidaLida;        //// armazena a quantidade que deverá sair

        printf("Nome do Produto: ");   //// solicita o nome do produto
        fflush(stdin);                //// limpa o buffer de entrada
        fgets(nomeProdutoSaida, sizeof(nomeProdutoSaida), stdin);
        nomeProdutoSaida[strcspn(nomeProdutoSaida, "\n")] = '\0'; // Remover a quebra de linha

        while (fscanf(arquivo, "%49[^;];%f;%9[^;];%d\n", produto->nomeProduto, &produto->preco, produto->unidade, &produto->quantidade_estoque) == 4) {
            if (strcmp(produto->nomeProduto, nomeProdutoSaida) == 0) { //// compara os nomes informados pelo usuario e o nome guardado no sistema
                produtoEncontradoSaida++; 

                printf("Produto encontrado!\n");// Exibir dados do produto
                printf("Nome: %s\n", produto->nomeProduto);
                printf("Quantidade Atual: %d\n", produto->quantidade_estoque);

                do {// Ler quantidade de saída até que seja válida

                    printf("Quantidade de saida: ");
                    if (scanf("%d", &quantidadeSaidaLida) != 1 || quantidadeSaidaLida <= 0 || quantidadeSaidaLida > produto->quantidade_estoque) { //// saida tem que ser um valor superior a 0

                        while (getchar() != '\n');// Limpar o buffer caso tenha quebra de linha ou espaços

                        printf("Erro: Quantidade de saida invalida.\n");
                    } else {

                        break; // Saia do loop se a entrada for válida
                    }

                } while (1); /// lê a quantidade de saida ate que seja valida

                produto->quantidade_estoque -= quantidadeSaidaLida; // subtrair quantidade

                printf("\nInformacoes apos a saida:\n");
                printf("Quantidade Final: %d\n", produto->quantidade_estoque);

                printf("Confirmar Saida (1-Sim/0-Nao): ");// Confirmar saída
                scanf("%d", &produto->confirmarSaida);

                if (produto->confirmarSaida == 1) {

                    fclose(arquivo); //// fecha o arquivo antes de gravar as informações

                    FILE *arquivo = fopen("estoque.txt", "r+"); //// abre o arquivo em modo leitura e escrita
                    if(arquivo == NULL){
                        printf("Erro ao abrir o arquivo.\n");
                    }

                    // Atualizar o arquivo com os novos dados
                    fseek(arquivo, -strlen(produto->nomeProduto) - 4 * sizeof(int), SEEK_CUR); /// move o ponteiro para o inicio

                    fprintf(arquivo, "%s;%.2f;%s;%d\n", produto->nomeProduto, produto->preco, produto->unidade, produto->quantidade_estoque); /// atualiza as informações

                    printf("Deseja fazer outra saida? (1-Sim/0-Nao): ");// Solicitar nova saída
                    scanf("%d", &continuarSaida);

                    if (continuarSaida == 0) {

                        break; // Sai do loop externo se não quiser fazer outra saída
                    }

                } else {
                    printf("Operacao cancelada.\n");
                    break; // Sai do loop interno se a saída não for confirmada
                }
            }
        }
        if (!produtoEncontradoSaida) {

            printf("Produto nao encontrado.\n");
           
            printf("Deseja continuar a saida de produto? (1-Sim/0-Nao): "); // Pergunta se deve continuar fazendo a saida de produtos
            scanf("%d", &continuarSaida);

            if (continuarSaida == 0) {
                break; // Sai do loop externo se não quiser fazer outra saída
            }
        }
    }
    fclose(arquivo);  ///// fecha o arquivo

}//////////////////Fim da função saída movimentação de produtos


void reajustePrecos(FILE *arquivo) {///////// inicio da função de reajuste de preços

    int opcaoReajuste; //// decidir se vai ser reajuste de 1 ou todos os produtos
    float percentualReajuste; /// calculo de percentual

    printf("\nXYZ COMERCIO DE PRODUTOS LTDA.\n");
    printf("SISTEMA DE CONTROLE DE ESTOQUE\n\n");
    printf("REAJUSTE DE PRECOS\n\n");
    printf("Escolha a opcao de reajuste:\n");
    printf("1 - Reajustar um unico produto\n");
    printf("2 - Reajustar todos os produtos\n");
    printf("Opcao: ");
    scanf("%d", &opcaoReajuste);

    if (arquivo == NULL) { //// se o arquivo nao abrir mostra a mensagem de erro
        printf("Erro ao abrir o arquivo para reajuste de preços\n");
        return;
    }

    if (opcaoReajuste == 1) { ////// reajustar um único produto
        char nomeProduto[50];

        printf("Nome do Produto a ser reajustado: "); //// solicita o nome do produto
        fflush(stdin);
        fgets(nomeProduto, sizeof(nomeProduto), stdin);
        nomeProduto[strcspn(nomeProduto, "\n")] = '\0'; // Remover a quebra de linha

        fseek(arquivo, 0, SEEK_SET);  // Retorna o ponteiro ao início do arquivo

        int produtoEncontrado = 0; //// informa se o produto foi encontrado

        while (1) { /// enquanto a opcao de reajuste for de um unico produto

            char nome[50];
            float preco;
            char unidade[10];
            int quantidadeEstoque;
            long int posicaoAtual = ftell(arquivo); //// guarda a posicao atual do ponteiro

            if (fscanf(arquivo, "%49[^;];%f;%9[^;];%d\n", nome, &preco, unidade, &quantidadeEstoque) != 4) { /// pegou as informações do arquivo
                break;  // Sai do loop quando não há mais linhas no arquivo
            }

            if (strcmp(nome, nomeProduto) == 0) { //// comparou os nomes
                produtoEncontrado = 1;

                printf("\nREAJUSTE INDIVIDUAL\n"); //// mostrou as informações do produto
                printf("PRODUTO      : %s\n", nome);
                printf("UNIDADE      : %s\n", unidade);
                printf("PRECO ATUAL  : %.2f\n", preco);
                printf("\nPERCENTUAL DE REAJUSTE : "); //// solicitou o percentual de reajuste
                scanf("%f", &percentualReajuste);

                preco += (preco * percentualReajuste / 100.0); ///// calculando o novo preço

                    printf("\nREAJUSTE APLICADO\n");
                    printf("NOVO PRECO   : %.2f\n", preco);

                fseek(arquivo, posicaoAtual, SEEK_SET);// Move o cursor para a posição do produto no arquivo

                fprintf(arquivo, "%s;%.2f;%s;%d\n", nome, preco, unidade, quantidadeEstoque);//// grava as novas informações no arquivo
                break;  // Sai do loop após o reajuste
            }
        }

        if (!produtoEncontrado) {
            printf("Produto nao encontrado.\n");
        } else {
            printf("Reajuste aplicado com sucesso.\n");
        }

} else if (opcaoReajuste == 2) { ///// reajuste geral de todos os produtos

    printf("\nREAJUSTE GERAL\n");
    printf("Percentual de Reajuste para todos os produtos: "); //// solicita o percentual do reajuste
    scanf("%f", &percentualReajuste);

    fseek(arquivo, 0, SEEK_SET);  // Retorna o ponteiro ao início do arquivo

    while (1) { 

        long int posicaoAtual = ftell(arquivo); /// guarda a posição do ponteiro no arquivo
        char nome[50];
        float preco;
        char unidade[10];
        int quantidadeEstoque;

        if (fscanf(arquivo, "%49[^;];%f;%9[^;];%d\n", nome, &preco, unidade, &quantidadeEstoque) != 4) {
            break;  // Sai do loop quando já pegou todas as 4 informações
        }

        float novoPreco = preco + (preco * percentualReajuste / 100.0); ///// calculo do novo preço de reajuste

        fseek(arquivo, posicaoAtual, SEEK_SET); //// volta a posiçao inicial antes de gravar as informações

        fprintf(arquivo, "%s;%.2f;%s;%d\n", nome, novoPreco, unidade, quantidadeEstoque); /// grava as informações

        fseek(arquivo, 0, SEEK_CUR);// Avança para o próximo registro
    }
    printf("Reajuste aplicado a todos os produtos com sucesso.\n");

} else {
    printf("Opcao invalida.\n");
}

fclose(arquivo); ///// fecha o arquivo

}//////////// FIM DA FUNÇÃO DE REAJUSTE


int compararNomesRelatorioPrecos(const void *a, const void *b){ ///// função usada como argumento para 'qsort' que é uma funcionalidade para ordenar arrays
    return strcmp(((estoque *)a)->nomeProduto, ((estoque *)b)-> nomeProduto); /// faz a comparação das strings para organizar em ordem alfabetica
}


void gerarListaDePrecos(const char *nomeArquivo) {////////////////// inicio da funcao gerar lista de preços

    FILE *arquivo = fopen(nomeArquivo, "r"); /// abre o arquivo em modo de leitura 
    if (arquivo == NULL) { ///// se nao conseguir abrir o arquivo mostra a mensagem de erro
        printf("Erro ao abrir o arquivo de estoque.\n");
        return;
    }

    printf("\n");
    printf("\nXYZ COMERCIO DE PRODUTOS LTDA.\n");
    printf("SISTEMA DE CONTROLE DE ESTOQUE\n\n");
    printf("LISTA DE PRECOS\t\t\tPG 009\n\n");
    printf("%-30s %-10s %-10s\n", "PRODUTO", "PRECO", "UND");
      
    estoque *produtos = NULL;// Criar um array dinâmico (pode ser alterada a quantidade a qualquer hora) para armazenar os produtos
    int numProdutos = 0;
    int capacidade = 1000;

    produtos = (estoque *)malloc(capacidade * sizeof(estoque));

    if (produtos == NULL) {
        printf("Erro ao alocar memória.\n");
        fclose(arquivo);
        return;
    }

    while (fscanf(arquivo, "%49[^;];%f;%9[^;];%d\n", produtos[numProdutos].nomeProduto, ///// lê e armazena dados no arquivo
                  &produtos[numProdutos].preco, produtos[numProdutos].unidade,
                  &produtos[numProdutos].quantidade_estoque) == 4) {

        numProdutos++;

        // Se atingir a capacidade máxima, aumenta a capacidade armazenada
        if (numProdutos >= capacidade) {
            capacidade *= 2;
            produtos = (estoque *)realloc(produtos, capacidade * sizeof(estoque)); //// realocando a capacidade do estoque

            if (produtos == NULL) {
                printf("Erro ao realocar memória.\n");
                fclose(arquivo);
                return;
            }
        }
    }
    
    qsort(produtos, numProdutos, sizeof(estoque), compararNomesRelatorioPrecos); // Ordenar os produtos em ordem alfabética (argumento que vem da função compararNomes)

    for (int i = 0; i < numProdutos; i++) {// Exibir os produtos ordenados
        printf("%-30s %5.2f       %-15s\n", produtos[i].nomeProduto, produtos[i].preco, produtos[i].unidade);
    }

    printf("\n");

    free(produtos); // Liberar a memória alocada dinamicamente para que nao ocorra conflito de informações

    fclose(arquivo); // fecha o arquivo

}/////////////////////////// FIM DA FUNCAO GERAL LISTA DE PREÇOS


void gerarRelatorioDeBalanco(const char *nomeArquivo) {////////////////////// inicio da função de gerar relatório de balanço 

    FILE *arquivo = fopen(nomeArquivo, "r"); //// abre o arquivo em modo leitura
    if (arquivo == NULL) { /// confirmação de abertura do arquivo
        printf("Erro ao abrir o arquivo de estoque.\n");
        return;
    }

    printf("\nXYZ COMERCIO DE PRODUTOS LTDA.\n");
    printf("SISTEMA DE CONTROLE DE ESTOQUE\n\n");
    printf("%-30s %-4s %-15s %-4s %-15s\n", "PRODUTO", "UND", "PRECO UNITARIO", "QTDE", "PRECO TOTAL"); 
   
    estoque *produtos = NULL; // Criar um array dinâmico para armazenar os produtos
    int numProdutos = 0;
    int capacidade = 1000;

    produtos = (estoque *)malloc(capacidade * sizeof(estoque)); /// aloca memoria 

    if (produtos == NULL) { //// verifica se a locação foi bem sucedida
        printf("Erro ao alocar memória.\n");
        fclose(arquivo);
        return;
    }

    while (fscanf(arquivo, "%49[^;];%f;%9[^;];%d\n", produtos[numProdutos].nomeProduto, /// lê e armazena dados no arquivo
                  &produtos[numProdutos].preco, produtos[numProdutos].unidade,
                  &produtos[numProdutos].quantidade_estoque) == 4) {

        numProdutos++;

        if (numProdutos >= capacidade) { //// realocação de memoria se for necessário
            capacidade *= 2;
            produtos = (estoque *)realloc(produtos, capacidade * sizeof(estoque));

            if (produtos == NULL) {
                printf("Erro ao realocar memória.\n");
                fclose(arquivo);
                return;
            }
        }
    }
    qsort(produtos, numProdutos, sizeof(estoque), compararNomesRelatorioPrecos);// Ordena os produtos em ordem alfabética usando a função compararNomesRelatorio

    float valorTotal = 0.0;
    int totalItens = 0;

    for (int i = 0; i < numProdutos; i++) { //// loop para imprimir os produtos formatados
    
        float totalItem = produtos[i].preco * produtos[i].quantidade_estoque;
        printf("%-30s %-4s %010.2f       %-4d %010.2f\n", produtos[i].nomeProduto, produtos[i].unidade, produtos[i].preco, produtos[i].quantidade_estoque, totalItem);

        valorTotal += totalItem;
        totalItens += produtos[i].quantidade_estoque;
    }

    printf("===============================================================\n");
    printf("TOTAL DE ITENS NO ESTOQUE : %04d\n", totalItens);
    printf("VALOR TOTAL DO ESTOQUE   : %010.2f\n", valorTotal);

    free(produtos); /// retira memoria que foi alocada previamente -> se nao uso memoria eu descarto
    fclose(arquivo); /// fecha o arquivo

}/////////////////// FIM DA FUNCAO DE GERAR RELATORIO DE BALANÇO 

    
int main (){ //////// função principal main

int opcao0,opcao1; ////varivael para acessar telas do switch
int opcaoMovimentacao; //// variavel para acessar telas do switch
int opcaorelatorio; /// variavel para o switch de relatorio

int totalProdutos = 0; //// contador dos produtos

estoque produtoEncontrado; /// instancia de estoque

 FILE *arquivo = fopen("estoque.txt", "r+"); /// abre o arquivo em modo leitura/escrita
    if (arquivo == NULL) { ///// se o arquivo nao abrir mostra a mensagem de erro
        printf("Erro ao abrir o arquivo de estoque\n");
        return 1;
    }

do{ //// Tela principal do programa

printf("\n");
printf("\t\tXYZ COMERCIO DE PRODUTOS LTDA. \t\t\t TELA 1.0\n");
printf("\t\tSISTEMA DE CONTROLE DE ESTOQUE\n");
printf("\n");
printf("\t\tMENU PRINCIPAL\n");
printf("\n");
printf("1 - CADASTRO DE PRODUTOS\n");
printf("2 - MOVIMENTACAO\n");
printf("3 - REAJUSTE DE PRECOS\n");
printf("4 - RELATORIOS\n");
printf("\t0 - FINALIZAR\n");
printf("\n");
printf("\tOpcao:");
scanf("%d",&opcao0);
 
switch(opcao0){ ////// switch utilizado caso a opcao escolhida seja a 1 -> Cadastro de Produtos

case 1: ////// dentro do cadastramento existem 5 opções de escolha

printf("\n");
printf("\t\tXYZ COMERCIO DE PRODUTOS LTDA. \t\t\t TELA 1.1\n");
printf("\t\tSISTEMA DE CONTROLE DE ESTOQUE\n");
printf("\n");
printf("\t\tCADASTRO DE PRODUTOS\n");
printf("\n");
printf("1 - INCLUSAO\n");  /////// opções na área de cadastramento de produtos
printf("2 - ALTERACAO\n");
printf("3 - CONSULTA\n");
printf("4 - EXCLUSAO\n");
printf("\t0 - RETORNAR\n");
printf("\n");
printf("\tOpcao:");
scanf("%d",&opcao1);

switch(opcao1){ //// switch para as opções na área de cadastramento (inclusao,alteração,consulta e exclu)


    case 1: //// caso a opção escolhida seja 1 -> Incluir Produtos no sistema de estoque

printf("\n\t\tXYZ COMERCIO DE PRODUTOS LTDA. \t\t\t TELA 1.1.1\n\t\tSISTEMA DE CONTROLE DE ESTOQUE\n\n\t\tINCLUSAO DE PRODUTO\n\n");

estoque novoProduto; /// criando uma nova variavel do tipo estoque para armazenar os novos produtos

inclusaoProduto(&novoProduto); /// chamando a função de incluir produtos

break; 

    case 2: ///// caso a opçção escolhida seja 2 -> Alteração de Produtos no sistema de estoque


printf("\n\t\tXYZ COMERCIO DE PRODUTOS LTDA. \t\t\t TELA 1.1.2\n\t\tSISTEMA DE CONTROLE DE ESTOQUE\n\n\t\tALTERACAO DE PRODUTO\n\n");

 int novaAlteracao = 1;

    do {
        estoque produtoParaAlterar;

        int resultado = alteracaoProduto(&produtoParaAlterar);

        if (resultado == 0) {
            printf("Nova Alteracao (1-Sim/0-Nao): ");
            scanf("%d", &novaAlteracao);

        } else {
            novaAlteracao = 0;  // Se a alteração foi bem-sucedida, sair do loop
        }

    } while (novaAlteracao == 1);

break;


    case 3: ////// caso a opção escolhida seja 3 -> consultar produtos do sistema

printf("\n\t\tXYZ COMERCIO DE PRODUTOS LTDA. \t\t\t TELA 1.1.3\n\t\tSISTEMA DE CONTROLE DE ESTOQUE\n\n\t\tCONSULTA DE PRODUTO\n\n");

do{

estoque produtoEncontrado; 

int resultadoConsulta = consultaProdutoPorNome(&produtoEncontrado);

 if (resultadoConsulta) {

    printf("Nova Consulta (1-Sim/0-Nao): ");

    scanf("%d", &produtoEncontrado.novaConsulta);

    } else {

        produtoEncontrado.novaConsulta = 0;
    }

} while (produtoEncontrado.novaConsulta == 1); //// loop caso o usuário queira realizar varias consultas

break;

    case 4:  //// caso a opção escolhida seja 4 -> Exclusão de Produtos do sistema de estoque

printf("\n\t\tXYZ COMERCIO DE PRODUTOS LTDA. \t\t\t TELA 1.1.4\n\t\tSISTEMA DE CONTROLE DE ESTOQUE\n\n\t\tEXCLUSAO\n\n");


estoque produtoExcluir;

    excluirProduto(&totalProdutos, &produtoExcluir);  //// chamando a função de excluir

break;

}//// fim do switch das opções de cadastramento de Produtos

break ; // break para voltar para a tela 1.1 saindo de inclusao do produto para nao entrar no menu de movimentação


    case 2: ///////////////// caso a opcao escolhida seja 2 na Tela principal com as operações de cadastramento, movimentação, reajuste e relatorios

do { ///// inicio do loop de movimentação

printf("\n\t\tXYZ COMERCIO DE PRODUTOS LTDA. \t\t\t TELA 1.2\n\t\tSISTEMA DE CONTROLE DE ESTOQUE\n\n\t\tMOVIMENTACAO\n\n1 - ENTRADA\n2 - SAIDA\n\t 0 - RETORNAR\n\tOPCAO:");

scanf("%d",&opcaoMovimentacao);

switch(opcaoMovimentacao){ //// inicio do switch de movimentacao para escolher entrada ou saida


    case 1: //// caso a opcao escolhida seja 1 -> Entrada de Produtos dentro do sistema de estoque

printf("\n\t\tXYZ COMERCIO DE PRODUTOS LTDA. \t\t\t TELA 1.2.1\n\t\tSISTEMA DE CONTROLE DE ESTOQUE\n\n\t\tMOVIMENTACAO - ENTRADA DE PRODUTO\n\n");

estoque produto;

// Chamar a função entradaProduto
entradaProduto(&produto);

break;

    case 2: /// caso a opcao escolhida seja 2 -> Saida de Produtos dentro do sistema de Estoque

printf("\n\t\tXYZ COMERCIO DE PRODUTOS LTDA. \t\t\t TELA 1.2.2\n\t\tSISTEMA DE CONTROLE DE ESTOQUE\n\n\t\tMOVIMENTACAO - SAIDA DE PRODUTO\n\n");

estoque produtoSaida;

saidaProduto(&produtoSaida); //// chamando a função de saida de produto

break;

    case 0: //////// para voltar ao menu principal

break;

default : ////// caso a opcao escolhida seja invalida

printf("opcao invalida. Tente novamente.\n");

break;

} /////////////// fim do switch de movimentacao

}while(opcaoMovimentacao != 0); ///////////fim do loop de movimentação

break; ///// volta para a tela Principal

    case 3: ////////// caso a opcao na tela principal seja reajute de preços

printf("\n\t\tXYZ COMERCIO DE PRODUTOS LTDA. \t\t\t TELA 1.3\n\t\tSISTEMA DE CONTROLE DE ESTOQUE\n\n\t\tREAJUSTE DE PRECOS\n\nREAJUSTE GERAL OU DE UM PRODUTO?\n\n");

    reajustePrecos(arquivo); //// chamando a função de reajuste de preços

break;

    case 4: ////////// caso a opcao na tela principal seja Relatorios

printf("\n\t\tXYZ COMERCIO DE PRODUTOS LTDA. \t\t\t TELA 1.4\n\t\tSISTEMA DE CONTROLE DE ESTOQUE\n\n\t\tRELATORIOS\n\n1 - LISTA DE PRECOS\n2 - BALANCO FINANCEIRO\n\t 0 - RETORNAR\n\tOPCAO: ");

scanf("%d",&opcaorelatorio);

switch(opcaorelatorio){ ///////// inicio switch relatorios

    case 1: //// caso a opcao escolhida seja 1 -> listagem de preços

printf("XYZ COMERCIO DE PRODUTOS LTDA.\nSISTEMA DE CONTROLE DE ESTOQUE\n\n\tLISTA DE PRECOS \t PG 009");


 gerarListaDePrecos("estoque.txt"); //// chama a função de listagem de preços

break;

    case 2: /// caso a opção escolhida seja 2 -> gera relatorio de balanço

printf("XYZ COMERCIO DE PRODUTOS LTDA.\nSISTEMA DE CONTROLE DE ESTOQUE\n\n\tBALANCO FISICO - FINANCEIRO \t PG 009");

gerarRelatorioDeBalanco("estoque.txt"); //// chamando a função de gerar relatorio de balanço

break;

} ////////fim do switch relatorios

    case 0: ////////// finalizar o programa

break;

default: //// mensagem caso a opção seja invalida

printf("Opcao invalida. Tente Novamente.\n");

break;

} //////////////// Fim do switch principal

} while (opcao0 != 0); ////////////////// Repete o programa enquanto a opção 0 (sair do programa) nao seja digitada

printf("saindo do programa de estoque. \n");

    fclose(arquivo); //// fecha o arquivo

    return 0; ///// return do int main
    
} ////// Fim do programa de estoque