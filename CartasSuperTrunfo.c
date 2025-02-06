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
    char estado = 'a';
    char codigodacidade[01];
    char cidade[5];
    int populacao; // Quantidade total de pessoas
    float area; // Area total em km² da cidade
    float pib; // pib da cidade
    int turisticos; // número de pontos turísticos

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.

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

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("A letra que representa o estado é: %c\n", estado);
    printf("O código que representa a carta é: %s\n", codigodacidade);
    printf("O nome da cidade é: %s\n", cidade);
    printf("A quantidade de população é: %d\n", populacao);
    printf("A área total é: %f - Area por Km²\n", area);
    printf("O PIB que representa a cidade é: %.2f - Bilhões de reais\n", pib);
    printf("A quantidade de pontos turísticos é: %d\n", turisticos);

    return 0;
}