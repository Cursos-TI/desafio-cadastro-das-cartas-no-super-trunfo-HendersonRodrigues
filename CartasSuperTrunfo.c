#include <stdio.h>
#include <stdlib.h>

void cartas(int quantas_cidades);

int main() {
    int quantas_cidades;
    int escolha;

    do {
        printf("Bem vindo ao jogo Super Trunfo, escolha uma das opções:\n");
        printf("1 - Criar cartas do jogo\n2 - Entender como jogar\n3 - Sair do jogo\n");
        scanf("%d", &escolha);

        switch (escolha) {
        case 1:
            printf("Quantas cidades você quer cadastrar? (máximo 32)\n");
            scanf("%d", &quantas_cidades);
            
            // Verifica se o número de cidades está dentro do limite
            while (quantas_cidades < 1 || quantas_cidades > 32) {
                printf("Por favor, insira um número entre 1 e 32.\n");
                printf("Quantas cidades você quer cadastrar? (máximo 32)\n");
                scanf("%d", &quantas_cidades);
            }
            
            cartas(quantas_cidades);
            break;
        case 2:
            printf("O jogo tem 32 cartas de cidades classificadas com códigos de A a H com numeração de 01 a 04.\nVocê precisa cadastrar as cartas para poder começar.\nCada cidade terá algumas características que serão depois comparadas.\nApós o cadastro das cartas, você poderá rodar a escolha da carta de cada jogador e assim saber quem ganhou.\n");
            break;
        case 3:
            printf("Até a próxima!\n");
            exit(0);
            break;
        default:
            printf("Escolha um número entre 1 e 3\n");
            break;
        }
    } while (escolha != 3); // Continua até que o usuário escolha sair

    return 0;
}

void cartas(int quantas_cidades) {
    int posicao_matriz;
    char nome_da_cidade[quantas_cidades][50];
    char codigo_da_cidade[quantas_cidades][4];
    float populacao[quantas_cidades];
    float area[quantas_cidades];
    float pib[quantas_cidades];
    int numero_de_pontos_turisticos[quantas_cidades];
    float densidade[quantas_cidades];
    float per_capita[quantas_cidades];

    for (posicao_matriz = 0; posicao_matriz < quantas_cidades; posicao_matriz++) {
        printf("\nEntre com o nome da cidade: \n");
        scanf("%s", nome_da_cidade[posicao_matriz]);

        printf("Entre com o código da cidade: \n");
        scanf("%s", codigo_da_cidade[posicao_matriz]);

        printf("Entre com a população da cidade em mil habitantes: \n");
        scanf("%f", &populacao[posicao_matriz]);

        printf("Entre com a área da cidade em km²: \n");
        scanf("%f", &area[posicao_matriz]);

        printf("Entre com o PIB da cidade em reais: \n");
        scanf("%f", &pib[posicao_matriz]);

        printf("Entre com o número de pontos turísticos da cidade: \n");
        scanf("%d", &numero_de_pontos_turisticos[posicao_matriz]);

        densidade[posicao_matriz] = populacao[posicao_matriz] / area[posicao_matriz];
        per_capita[posicao_matriz] = pib[posicao_matriz] / populacao[posicao_matriz];
    }

    for (posicao_matriz = 0; posicao_matriz < quantas_cidades; posicao_matriz++) {
        printf("\nA cidade %s cadastrada foi: %s\n", codigo_da_cidade[posicao_matriz], nome_da_cidade[posicao_matriz]);
        printf("A população da cidade %s cadastrada foi: %.0f\n", codigo_da_cidade[posicao_matriz], populacao[posicao_matriz]);
        printf("A área da cidade %s cadastrada foi: %.0f\n", codigo_da_cidade[posicao_matriz], area[posicao_matriz]);
        printf("O PIB da cidade %s cadastrado foi: %.0f\n", codigo_da_cidade[posicao_matriz], pib[posicao_matriz]);
        printf("O número de pontos turísticos da cidade %s cadastrados foi: %d\n", codigo_da_cidade[posicao_matriz], numero_de_pontos_turisticos[posicao_matriz]);
        printf("A densidade populacional da cidade %s é: %.2f\n", codigo_da_cidade[posicao_matriz], densidade[posicao_matriz]);
        printf("A renda per cápita da cidade %s é: %.2f\n", codigo_da_cidade[posicao_matriz], per_capita[posicao_matriz]);
    }
}