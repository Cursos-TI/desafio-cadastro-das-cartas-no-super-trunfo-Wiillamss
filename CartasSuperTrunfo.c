#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Prática Willams Gomes

int main() {
    
    printf(" *** Desafio Super Trunfo: Países ***\n");

    /* O objetivo é criar 8 estados, representados por letras
    de A à H, e cada estado vai ter 4 cidades, acompanhando a letra do estado e um número,
    exemplo: A01, A02, B01, B02. */

    char estado1 = 'A'; // Letra que representa o estado
    char codigodacidade1[5], codigodacidade2[5], codigodacidade3[5], codigodacidade4[5]; // Código que vai representar a cidade
    char cidade1[10], cidade2[10], cidade3[10], cidade4[10]; // Cidade do Estado
    int populacao1, populacao2, populacao3, populacao4; // Quantidade total de pessoas
    float area1, area2, area3, area4; // Área total em km² da cidade
    float pib1, pib2, pib3, pib4; // PIB da cidade
    int turisticos1, turisticos2, turisticos3, turisticos4; // Número de pontos turísticos
    float densidadepopulacional1, densidadepopulacional2, densidadepopulacional3, densidadepopulacional4; // População dividida pela área da cidade
    float pibpercapita1, pibpercapita2, pibpercapita3, pibpercapita4; // PIB total dividido pela população
    float superpoder1, superpoder2, superpoder3, superpoder4; // Poder de cada carta = é a soma de variaveis

    // Dados para a primeira cidade

    printf(" *** Digite os dados da primeira cidade *** \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite a quantidade total da população: \n");
    scanf("%d", &populacao1);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area1);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos1);

    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    superpoder1 = populacao1 + area1 + pib1 + turisticos1;

    // Dados da segunda cidade

    printf(" *** Digite os dados da segunda cidade *** \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite a quantidade total da população: \n");
    scanf("%d", &populacao2);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area2);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos2);

    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;
    superpoder2 = populacao2 + area2 + pib2 + turisticos2;

// Dados da terceira cidade

    printf(" *** Digite os dados da terceira cidade *** \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade3);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade3);

    printf("Digite a quantidade total da população: \n");
    scanf("%d", &populacao3);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area3);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib3);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos3);

    densidadepopulacional3 = populacao3 / area3;
    pibpercapita3 = pib3 / populacao3;
    superpoder3 = populacao3 + area3 + pib3 + turisticos3;

// Dados da quarta cidade

    printf(" *** Digite os dados da quarta cidade *** \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", &codigodacidade4);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade4);

    printf("Digite a quantidade total da população: \n");
    scanf("%d", &populacao4);

    printf("Digite a area total da cidade: \n");
    scanf("%f", &area4);

    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib4);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &turisticos4);

    densidadepopulacional4 = populacao4 / area4;
    pibpercapita4 = pib4 / populacao4;
    superpoder4 = populacao4 + area4 + pib4 + turisticos4;
    

// Comandos de exibição
    //Primeira Carta

    printf(" *** Dados da primeira carta *** \n");
    printf("A letra que representa o estado de São Paulo é: %c\n", estado1);   
    printf("O código que representa a carta é: %s\n", codigodacidade1);
    printf("O nome da cidade é: %s\n", cidade1);
    printf("A quantidade de população é: %d pessoas\n", populacao1);
    printf("A área total é: %.2f Km²\n", area1);
    printf("O PIB que representa a cidade é: %.2f Milhões de reais\n", pib1);
    printf("A quantidade de pontos turísticos é: %d\n", turisticos1);
    printf("A densidade populacional é: %.2f pessoas por km²\n", densidadepopulacional1);
    printf("O PIB per capita por pessoa é: %.2f reais\n", pibpercapita1);
    printf("O poder da carta é de: %.2f pontos\n", superpoder1);

    //Segunda Carta

    printf(" *** Dados da segunda carta *** \n");
    printf("A letra que representa o estado de São Paulo é: %c\n", estado1);
    printf("O código que representa a carta é: %s\n", codigodacidade2);
    printf("O nome da cidade é: %s\n", cidade2);
    printf("A quantidade de população é: %d pessoas\n", populacao2);
    printf("A área total é: %.2f Km²\n", area2);
    printf("O PIB que representa a cidade é: %.2f Milhões de reais\n", pib2);
    printf("A quantidade de pontos turísticos é: %d\n", turisticos2);
    printf("A densidade populacional é: %.2f pessoas por km²\n", densidadepopulacional2);
    printf("O PIB per capita por pessoa é: %.2f reais\n", pibpercapita2);
    printf("O poder da carta é de: %.2f pontos\n", superpoder2);

    // Terceira Carta

    printf(" *** Dados da terceira carta *** \n");
    printf("A letra que representa o estado de São Paulo é: %c\n", estado1);
    printf("O código que representa a carta é: %s\n", codigodacidade3);
    printf("O nome da cidade é: %s\n", cidade3);
    printf("A quantidade de população é: %d pessoas\n", populacao3);
    printf("A área total é: %.2f Km²\n", area3);
    printf("O PIB que representa a cidade é: %.2f Milhões de reais\n", pib3);
    printf("A quantidade de pontos turísticos é: %d\n", turisticos3);
    printf("A densidade populacional é: %.2f pessoas por km²\n", densidadepopulacional3);
    printf("O PIB per capita por pessoa é: %.2f reais\n", pibpercapita3);
    printf("O poder da carta é de: %.2f pontos\n", superpoder3);

    // Quarta Carta

    printf(" *** Dados da quarta carta *** \n");
    printf("A letra que representa o estado de São Paulo é: %c\n", estado1);
    printf("O código que representa a carta é: %s\n", codigodacidade4);
    printf("O nome da cidade é: %s\n", cidade4);
    printf("A quantidade de população é: %d pessoas\n", populacao4);
    printf("A área total é: %.2f Km²\n", area4);
    printf("O PIB que representa a cidade é: %.2f Milhões de reais\n", pib4);
    printf("A quantidade de pontos turísticos é: %d\n", turisticos4);
    printf("A densidade populacional é: %.2f pessoas por km²\n", densidadepopulacional4);
    printf("O PIB per capita por pessoa é: %.2f reais\n", pibpercapita4);
    printf("O poder da carta é de: %.2f pontos\n", superpoder4);

    // Comparação entre cartas
    printf("A comparação entre as Cartas se A01 <= A04: %f\n, superpoder1 <= superpoder4");

return 0;
}