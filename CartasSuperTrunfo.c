#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Sugestão: Defina variáveis separadas para cada atributo da cidade.
// Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
int main() {
    int quantas_cidades = 1;
    int escolha = 1;

    printf("Bem vindo ao jogo Super Trunfo, escolha umas das opções:\n");
    printf("1 - Criar cartas do jogo\n2 - Entender como jogar\n3 - Sair do jogo\n");
    scanf("%d", &escolha);

    switch (escolha)
    {
    case 1:
        cartas();
        break;
    case 2:
        printf("O jogo tem 32 cartas de cidades classificadas com codigos de A a H com numeração de 01 a 04\nVoce precisa cadastrar
        as cartas para poder começar\nCada cidade terá algumas caracteristicas que serão depois comparadas\n
        Apos o cadastro das cartas voce poderá rodar a escolha da carta de cada jogador e assim saber quem ganhou\n\n\n");
        
        printf("Escolha umas das opções:\n");
        printf("1 - Criar cartas do jogo\n2 - Entender como jogar\n3 - Sair do jogo\n");
        scanf("%d", &escolha);
        
        break;
    case 3:
        exit(0);
        break;
    default:
        printf("Escolha um número entre 1 e 3");
        break;
    }
    printf("Quantas cidades voce quer cadastrar?\n");
    scanf("%d", &quantas_cidades);


}
void cartas(void){
    int posicao_matriz = 0;
    char nome_da_cidade [quantas_cidades][50] = {"0", "Acre"};
    char codigo_da_cidade [quantas_cidades][4] = {"0", "A01"};
    float populacao [quantas_cidades];
    float area [quantas_cidades];
    float pib [quantas_cidades];
    int numero_de_pontos_turisticos [quantas_cidades];
    float densidade [quantas_cidades];
    float per_capita [quantas_cidades];

    for(posicao_matriz=0; posicao_matriz<31; posicao_matriz++){
        printf("Entre com o nome da cidade: \n");
        scanf("%s", &nome_da_cidade[posicao_matriz]);

        printf("Entre com o codigo da cidade: \n");
        scanf("%s", &codigo_da_cidade[posicao_matriz]);
    
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
