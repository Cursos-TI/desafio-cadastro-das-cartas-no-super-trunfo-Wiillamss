#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
// Prática Willams Gomes

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.

    printf(" *** Desafio Super Trunfo: Países ***\n");

    // Vai ser criado 2 países Brasil e Argentina
    // Dados abaixo se referente ao País Brasil
    char estado /*São Paulo*/ = 'A';
    char codigodacidade[5]; // Código que vai representar a cidade
    char cidade[20]; // Cidade do Estado
    int populacao; // Quantidade total de pessoas
    float area; // Área total em km² da cidade
    float pib; // PIB da cidade
    int turisticos; // Número de pontos turísticos
    float densidadepopulacional; // População dividida pela área da cidade
    float pibpercapita; // PIB total dividido pela população

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

    printf("Digite o código que representa a cidade: \n");
    scanf("%s", &codigodacidade);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a quantidade total da população: \n");
    scanf("%d", &populacao);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos);

    densidadepopulacional = (float) populacao / area;
    pibpercapita = (int) pib / populacao;


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("A letra que representa o estado de São Paulo é: %c\n", estado);
    printf("O código que representa a carta é: %s\n", codigodacidade);
    printf("O nome da cidade é: %s\n", cidade);
    printf("A quantidade de população é: %d\n", populacao);
    printf("A área total é: %.2f Km²\n", area);
    printf("O PIB que representa a cidade é: %.2f Bilhões de reais\n", pib);
    printf("A quantidade de pontos turísticos é: %d\n", turisticos);
    printf("A densidade populacional é: %.f pessoas por km²\n", pibpercapita);
    printf("O PIB per capita por pessoa é: %d reais\n", densidadepopulacional);

    return 0;
}