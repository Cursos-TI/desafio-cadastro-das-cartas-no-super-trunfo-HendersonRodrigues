#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
int main() {
    int posicao_matriz = 1;
    char nome_da_cidade [32][50] = {0, "Acre"};
    char codigo_da_cidade [32][4] = {0, "A01"};
    float populacao [32];
    float area [32];
    float pib [32];
    int numero_de_pontos_turisticos [32];
    float densidade [32];
    float per_capita [32];

    for(posicao_matriz=1; posicao_matriz<32; posicao_matriz++){
        printf("Entre com o nome da cidade: \n");
        fgets(nome_da_cidade[posicao_matriz], 50, stdin);                   // Corrige a entrada com espaço

        printf("Entre com o codigo da cidade: \n");
        scanf("%s", codigo_da_cidade[posicao_matriz]);
    
        printf("Entre com a população da cidade em mil habitantes: \n");
        scanf("%f", &populacao[posicao_matriz]);
    
        printf("Entre com a área da cidade em km2: \n");
        scanf("%f", &area[posicao_matriz]);
    
        printf("Entre com o PIB da cidade em reais: \n");
        scanf("%f", &pib[posicao_matriz]);

        printf("Entre com o numero de pontos turisticos da cidade: \n");
        scanf("%d", &numero_de_pontos_turisticos[posicao_matriz]);
        
        densidade[posicao_matriz] = populacao[posicao_matriz]/area[posicao_matriz];
        per_capita[posicao_matriz] = pib[posicao_matriz]/populacao[posicao_matriz];

    }
    
    for(posicao_matriz=1; posicao_matriz<32;posicao_matriz++){
        printf("A cidade %s cadastrada foi: %s", codigo_da_cidade[posicao_matriz], nome_da_cidade[posicao_matriz]);
        printf("A população da cidade %s cadastrada foi: %.0f\n", codigo_da_cidade[posicao_matriz], populacao[posicao_matriz]);
        printf("A area da cidade %s cadastrada foi: %.0f\n", codigo_da_cidade[posicao_matriz], area[posicao_matriz]);
        printf("O PIB da cidade %s cadastrado foi: %.0f\n", codigo_da_cidade[posicao_matriz], pib[posicao_matriz]);
        printf("O número de pontos turisticos da cidade %s cadastrados foi: %d\n", codigo_da_cidade[posicao_matriz], numero_de_pontos_turisticos[posicao_matriz]);
        printf("A densidade populacional da cidade %s é: %.2f\n", codigo_da_cidade[posicao_matriz], densidade[posicao_matriz]);
        printf("A renda per cápita da cidade %s é: %.2f\n", codigo_da_cidade[posicao_matriz], per_capita[posicao_matriz]);

    }

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
