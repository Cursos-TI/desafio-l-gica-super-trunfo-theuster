#include <stdio.h>
#include <string.h> 

int main() {
    // Variáveis 
    char estado1, estado2;
    char codigoCarta1[5], codigoCarta2[5];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pibcidade1, pibcidade2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadepop1, densidadepop2;
    float pib1, pib2;
    int comparacao;

    // Entrada de dados 
    printf("\n\n--- INFORMAÇÕES DA PRIMEIRA CARTA ---\n\n");
    printf("Qual o Estado (De A a H): ");
    scanf(" %c", &estado1);
    printf("Qual o código da carta (EX: A02): ");
    scanf("%s", codigoCarta1);
    printf("Qual o nome da cidade: ");
    scanf(" %s", nomeCidade1);
    printf("Qual a população atual: ");
    scanf("%lu", &populacao1);
    printf("Qual é a área em km²: ");
    scanf("%f", &area1);
    printf("Qual o PIB: ");
    scanf("%f", &pibcidade1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos1);

    printf("\n\n--- INFORMAÇÕES DA SEGUNDA CARTA ---\n\n");
    printf("Qual o Estado (De A a H): ");
    scanf(" %c", &estado2);
    printf("Qual o código da carta (EX: A02): ");
    scanf("%s", codigoCarta2);
    printf("Qual o nome da cidade: ");
    scanf(" %s", nomeCidade2);
    printf("Qual a população atual: ");
    scanf("%lu", &populacao2);
    printf("Qual é a área em km²: ");
    scanf("%f", &area2);
    printf("Qual o PIB: ");
    scanf("%f", &pibcidade2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculos
    densidadepop1 = populacao1 / area1;
    densidadepop2 = populacao2 / area2;
    pib1 = pibcidade1 / populacao1;
    pib2 = pibcidade2 / populacao2;

    // Menu de comparação
    printf("\n*** JOGO SUPER TRUNFO - COMPARAÇÃO DE CARTAS ***\n");
    printf("Escolha o atributo para comparar:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade demográfica\n");
    printf("Opção: ");
    scanf("%d", &comparacao);

    // Comparação
    printf("\n--- RESULTADO ---\n");
    printf("Carta 1: %s | Carta 2: %s\n", nomeCidade1, nomeCidade2);

    switch (comparacao) {
        case 1: // População
            printf("Atributo: População\n");
            printf("%s: %lu hab | %s: %lu hab\n", nomeCidade1, populacao1, nomeCidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (populacao2 > populacao1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Área\n");
            printf("%s: %.2f km² | %s: %.2f km²\n", nomeCidade1, area1, nomeCidade2, area2);
            if (area1 > area2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (area2 > area1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("%s: %.2f reais | %s: %.2f reais\n", nomeCidade1, pibcidade1, nomeCidade2, pibcidade2);
            if (pibcidade1 > pibcidade2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pibcidade2 > pibcidade1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 4: // Pontos turísticos
            printf("Atributo: Pontos Turísticos\n");
            printf("%s: %d | %s: %d\n", nomeCidade1, pontosTuristicos1, nomeCidade2, pontosTuristicos2);
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Vencedor: %s\n", nomeCidade1);
            } else if (pontosTuristicos2 > pontosTuristicos1) {
                printf("Vencedor: %s\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        case 5: // Densidade demográfica (menor valor vence)
            printf("Atributo: Densidade Demográfica\n");
            printf("%s: %.2f hab/km² | %s: %.2f hab/km²\n", nomeCidade1, densidadepop1, nomeCidade2, densidadepop2);
            if (densidadepop1 < densidadepop2) {
                printf("Vencedor: %s (menor densidade)\n", nomeCidade1);
            } else if (densidadepop2 < densidadepop1) {
                printf("Vencedor: %s (menor densidade)\n", nomeCidade2);
            } else {
                printf("Empate!\n");
            }
            break;

        default:
            printf("Opção inválida!\n");
    }

    return 0;
}