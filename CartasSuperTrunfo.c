#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
int main() {
    char nome_da_cidade [50] = "Acre";
    char codigo_da_cidade [4] = "A01";
    float populacao = 1;
    float area = 1;
    float pib = 0;
    int numero_de_pontos_turisticos = 0;
    float densidade;
    float per_capita;

    printf("Entre com o nome da primeira cidade: \n");
    fgets(nome_da_cidade, 50, stdin);                   // Corrige a entrada com espaço

    printf("Entre com o codigo da primeira cidade: \n");
    scanf("%s", codigo_da_cidade);
  
    printf("Entre com a população da primeira cidade em mil habitantes: \n");
    scanf("%f", &populacao);
  
    printf("Entre com a área da primeira cidade em km2: \n");
    scanf("%f", &area);
 
    printf("Entre com o PIB da primeira cidade em reais: \n");
    scanf("%f", &pib);

    printf("Entre com o numero de pontos turisticos da primeira cidade: \n");
    scanf("%d", &numero_de_pontos_turisticos);

    densidade = populacao/area;
    per_capita = pib/populacao;

    printf("A cidade cadastrada foi: %s", nome_da_cidade);
    printf("O codgio cadastrado foi: %s\n", codigo_da_cidade);
    printf("A população cadastrada foi: %.0f\n", populacao);
    printf("A area cadastrada foi: %.0f\n", area);
    printf("O PIB cadastrado foi: %.0f\n", pib);
    printf("O número de pontos turisticos cadastrados foi: %d\n", numero_de_pontos_turisticos);
    printf("A densidade populacional é: %.2f\n", densidade);
    printf("A renda per cápita é: %.2f\n", per_capita);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
