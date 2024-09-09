#include <stdio.h>
#include <stdlib.h>

void cartas(int quantas_cidades, char nome_da_cidade[][50], char codigo_da_cidade[][4], float densidade[], float pib[], float area[], float populacao[], float pib_per_capita[]);
void comparar_cartas(int quantas_cidades, char nome_da_cidade[][50], char codigo_da_cidade[][4], float densidade[], float pib[], float area[], float populacao[], float pib_per_capita[]);

int main() {
    int quantas_cidades = 0;
    int escolha;

    // Declaração das variáveis para armazenar as cartas
    char nome_da_cidade[32][50]; // Máximo de 32 cidades
    char codigo_da_cidade[32][4]; // Máximo de 32 cidades
    float populacao[32];
    float area[32];
    float pib[32];
    float densidade[32];
    float pib_per_capita[32]; // Array para PIB per capita

    do {
        printf("\nBem-vindo ao jogo Super Trunfo!\n");
        printf("Escolha uma das opções:\n");
        printf("1 - Criar cartas do jogo\n");
        printf("2 - Entender como jogar\n");
        printf("3 - Sair do jogo\n");
        scanf("%d", &escolha);

        switch (escolha) {
        case 1:
            printf("Quantas cidades você quer cadastrar? (máximo 32)\n");
            scanf("%d", &quantas_cidades);
            
            // Verifica se o número de cidades está dentro do limite
            while (quantas_cidades < 1 || quantas_cidades > 32) {
                printf("Por favor, insira um número entre 1 e 32.\n");
                scanf("%d", &quantas_cidades);
            }
            
            cartas(quantas_cidades, nome_da_cidade, codigo_da_cidade, densidade, pib, area, populacao, pib_per_capita);
            
            // Pergunta se o usuário deseja jogar após criar as cartas
            char jogar;
            printf("Você gostaria de jogar agora? (s/n)\n");
            scanf(" %c", &jogar);
            if (jogar == 's' || jogar == 'S') {
                comparar_cartas(quantas_cidades, nome_da_cidade, codigo_da_cidade, densidade, pib, area, populacao, pib_per_capita);
            } else {
                printf("Você pode jogar mais tarde. Volte sempre!\n");
            }
            break;
        case 2:
            printf("O jogo tem 32 cartas de cidades classificadas com códigos de A a H com numeração de 01 a 04.\nVocê precisa cadastrar as cartas para poder começar.\nCada cidade terá algumas características que serão depois comparadas.\nApós o cadastro das cartas, você poderá rodar a escolha da carta de cada jogador e assim saber quem ganhou.\n");
            break;
        case 3:
            printf("Até a próxima!\n");
            exit(0);
            break;
        default:
            printf("Escolha um número válido.\n");
            break;
        }
    } while (escolha != 3); // Continua até que o usuário escolha sair

    return 0;
}

void cartas(int quantas_cidades, char nome_da_cidade[][50], char codigo_da_cidade[][4], float densidade[], float pib[], float area[], float populacao[], float pib_per_capita[]) {
    for (int posicao_matriz = 0; posicao_matriz < quantas_cidades; posicao_matriz++) {
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

        densidade[posicao_matriz] = populacao[posicao_matriz] / area[posicao_matriz];
        pib_per_capita[posicao_matriz] = pib[posicao_matriz] / populacao[posicao_matriz]; // Cálculo do PIB per capita
    }

    for (int posicao_matriz = 0; posicao_matriz < quantas_cidades; posicao_matriz++) {
        printf("\nA cidade %s cadastrada foi: %s\n", codigo_da_cidade[posicao_matriz], nome_da_cidade[posicao_matriz]);
        printf("A população da cidade %s cadastrada foi: %.0f\n", codigo_da_cidade[posicao_matriz], populacao[posicao_matriz]);
        printf("A área da cidade %s cadastrada foi: %.0f\n", codigo_da_cidade[posicao_matriz], area[posicao_matriz]);
        printf("O PIB da cidade %s cadastrado foi: %.0f\n", codigo_da_cidade[posicao_matriz], pib[posicao_matriz]);
        printf("A densidade populacional da cidade %s é: %.2f\n", codigo_da_cidade[posicao_matriz], densidade[posicao_matriz]);
        printf("O PIB per capita da cidade %s é: %.2f\n", codigo_da_cidade[posicao_matriz], pib_per_capita[posicao_matriz]);
    }
}

void comparar_cartas(int quantas_cidades, char nome_da_cidade[][50], char codigo_da_cidade[][4], float densidade[], float pib[], float area[], float populacao[], float pib_per_capita[]) {
    int carta1, carta2;
    int pontos_carta1 = 0, pontos_carta2 = 0;

    printf("Escolha a primeira carta (0 a %d): ", quantas_cidades - 1);
    scanf("%d", &carta1);
    printf("Escolha a segunda carta (0 a %d): ", quantas_cidades - 1);
    scanf("%d", &carta2);

    if (carta1 < 0 || carta1 >= quantas_cidades || carta2 < 0 || carta2 >= quantas_cidades) {
        printf("Escolhas inválidas. Tente novamente.\n");
        return;
    }

    printf("Comparando as cartas:\n");
    printf("Cidade 1: %s\n", nome_da_cidade[carta1]);
    printf("Cidade 2: %s\n", nome_da_cidade[carta2]);

    // Comparação de Densidade Populacional
    if (densidade[carta1] < densidade[carta2]) {
        printf("A carta %s vence com densidade populacional %.2f\n", nome_da_cidade[carta1], densidade[carta1]);
        pontos_carta1++;
    } else if (densidade[carta1] > densidade[carta2]) {
        printf("A carta %s vence com densidade populacional %.2f\n", nome_da_cidade[carta2], densidade[carta2]);
        pontos_carta2++;
    } else {
        printf("Empate em densidade populacional: %.2f\n", densidade[carta1]);
    }

    // Comparação de PIB
    if (pib[carta1] > pib[carta2]) {
        printf("A carta %s vence com PIB %.2f\n", nome_da_cidade[carta1], pib[carta1]);
        pontos_carta1++;
    } else if (pib[carta1] < pib[carta2]) {
        printf("A carta %s vence com PIB %.2f\n", nome_da_cidade[carta2], pib[carta2]);
        pontos_carta2++;
    } else {
        printf("Empate em PIB: %.2f\n", pib[carta1]);
    }

    // Comparação de PIB per capita
    if (pib_per_capita[carta1] > pib_per_capita[carta2]) {
        printf("A carta %s vence com PIB per capita %.2f\n", nome_da_cidade[carta1], pib_per_capita[carta1]);
        pontos_carta1++;
    } else if (pib_per_capita[carta1] < pib_per_capita[carta2]) {
        printf("A carta %s vence com PIB per capita %.2f\n", nome_da_cidade[carta2], pib_per_capita[carta2]);
        pontos_carta2++;
    } else {
        printf("Empate em PIB per capita: %.2f\n", pib_per_capita[carta1]);
    }

    // Comparação de Área
    if (area[carta1] > area[carta2]) {
        printf("A carta %s vence com área %.2f\n", nome_da_cidade[carta1], area[carta1]);
        pontos_carta1++;
    } else if (area[carta1] < area[carta2]) {
        printf("A carta %s vence com área %.2f\n", nome_da_cidade[carta2], area[carta2]);
        pontos_carta2++;
    } else {
        printf("Empate em área: %.2f\n", area[carta1]);
    }

    // Comparação de População
    if (populacao[carta1] > populacao[carta2]) {
        printf("A carta %s vence com população %.2f\n", nome_da_cidade[carta1], populacao[carta1]);
        pontos_carta1++;
    } else if (populacao[carta1] < populacao[carta2]) {
        printf("A carta %s vence com população %.2f\n", nome_da_cidade[carta2], populacao[carta2]);
        pontos_carta2++;
    } else {
        printf("Empate em população: %.2f\n", populacao[carta1]);
    }

    // Exibição do placar final
    printf("\nPlacar Final:\n");
    printf("Carta %s: %d pontos\n", nome_da_cidade[carta1], pontos_carta1);
    printf("Carta %s: %d pontos\n", nome_da_cidade[carta2], pontos_carta2);

    // Resultado final
    if (pontos_carta1 > pontos_carta2) {
        printf("A carta %s é a vencedora!\n", nome_da_cidade[carta1]);
    } else if (pontos_carta1 < pontos_carta2) {
        printf("A carta %s é a vencedora!\n", nome_da_cidade[carta2]);
    } else {
        printf("Houve um empate geral!\n");
    }
}