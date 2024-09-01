#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char nome_da_cidade [50] = "Acre";
    char Codigo_da_cidade [4] = "A01";
    int populacao = 1;
    int area = 1;
    int pib = 1;

    printf("Entre com o nome da primeira cidade: \n");
    scanf("%s", &nome_da_cidade);

    printf("Entre com o codigo da primeira cidade: \n");
    scanf("%s", &Codigo_da_cidade);
  
    printf("Entre com a população da primeira cidade em mil habitantes: \n");
    scanf("%d", &populacao);
  
    printf("Entre com a área da primeira cidade em m2: \n");
    scanf("%d", &area);
 
    printf("Entre com o PIB da primeira cidade em reais: \n");
    scanf("%d", &pib);

    printf("A cidade cadastrada foi: %s\n", nome_da_cidade);
    printf("O codgio cadastrado foi: %s\n", Codigo_da_cidade);
    printf("A população cadastrada foi: %d\n", populacao);
    printf("A area cadastrada foi: %d\n", area);
    printf("O PIB cadastrado foi: %d\n", pib);


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.



    return 0;
}
