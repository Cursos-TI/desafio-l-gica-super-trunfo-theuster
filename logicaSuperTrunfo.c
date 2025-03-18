#include <stdio.h>

int main() {
    // Variáveis para armazenar os dados das cartas
    char estado1[50], estado2[50];
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pibcidade1, pibcidade2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadepop1, densidadepop2;
    float pib1, pib2;

    // Entrada de dados para a primeira carta
    printf("\n\n--- INFORMAÇÕES DA PRIMEIRA CARTA ---\n\n");
    printf("Qual o Estado (De A a H): ");
    scanf(" %c", &estado1);
    printf("Qual o código da carta (EX: A02): ");
    scanf("%s", codigoCarta1);
    printf("Qual o nome da cidade: ");
    scanf(" %s", nomeCidade1);
    printf("Qual a população atual: ");
    scanf(" %lu", &populacao1);
    printf("Qual é a área em km²: ");
    scanf(" %f", &area1);
    printf("Qual o PIB: ");
    scanf(" %f", &pibcidade1);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos1);

    // Entrada de dados para a segunda carta
    printf("\n\n--- INFORMAÇÕES DA SEGUNDA CARTA ---\n\n");
    printf("Qual o Estado (De A a H): ");
    scanf(" %c", &estado2);
    printf("Qual o código da carta (EX: A02): ");
    scanf("%s", codigoCarta2);
    printf("Qual o nome da cidade: ");
    scanf(" %s", nomeCidade2);
    printf("Qual a população atual: ");
    scanf(" %lu", &populacao2);
    printf("Qual é a área em km²: ");
    scanf(" %f", &area2);
    printf("Qual o PIB: ");
    scanf(" %f", &pibcidade2);
    printf("Número de Pontos Turísticos: ");
    scanf(" %d", &pontosTuristicos2);

    // Cálculo dos atributos comparáveis
    densidadepop1 = populacao1 / area1;
    densidadepop2 = populacao2 / area2;
    pib1 = pibcidade1 / populacao1;
    pib2 = pibcidade2 / populacao2;

    // Exibir cálculos
    printf("\nDensidade Populacional da Carta 1: %.2f hab/km²\n", densidadepop1);
    printf("PIB per capita da Carta 1: %.2f reais\n", pib1);
    printf("\nDensidade Populacional da Carta 2: %.2f hab/km²\n", densidadepop2);
    printf("PIB per capita da Carta 2: %.2f reais\n\n", pib2);

    // Comparação baseada no PIB per capita
    printf("\n\n----- Comparacão de cartas (Atributo: PIB per capita) -----\n\n");
    printf("Carta 1 - %s: %.2f\n", nomeCidade1, pib1);
    printf("Carta 2 - %s: %.2f\n", nomeCidade2, pib2);

    if (pib1 > pib2) {
        printf("Resultado: A carta 1 - %s (%s) é a vencedora!\n", nomeCidade1, estado1);
    } else {
        if (pib2 > pib1) {
            printf("Resultado: A carta 2 - %s (%s) é a vencedora!\n", nomeCidade2, estado2);
        } else {
            printf("Resultado: Empate!\n");
        }
    }
    return 0;
}