#include <stdio.h>

int main() {
    // Variáveis
    char estado1[50], estado2[50];
    char codigoCarta1[4], codigoCarta2[4];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pibcidade1, pibcidade2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadepop1, densidadepop2;
    int comparacao1, comparacao2;

    // Entrada de dados para a 1ª cidade
    printf("DADOS DA PRIMEIRA CIDADE: \n\n");
    printf("Estado: ");
    scanf(" %[^\n]s", estado1);
    printf("Nome da 1ª cidade: ");
    scanf(" %[^\n]s", nomeCidade1);
    printf("Código da carta (EX: A02): ");
    scanf(" %[^\n]s", codigoCarta1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (km²): ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pibcidade1);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);

    // Entrada de dados para a 2ª cidade
    printf("\n\nDADOS DA SEGUNDA CIDADE: \n\n");
    printf("Estado: ");
    scanf(" %[^\n]s", estado2);
    printf("Nome da 2ª cidade: ");
    scanf(" %[^\n]s", nomeCidade2);
    printf("Código da carta (EX: A02): ");
    scanf(" %[^\n]s", codigoCarta2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (km²): ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pibcidade2);
    printf("Pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);

    // Cálculo da densidade populacional
    densidadepop1 = populacao1 / area1;
    densidadepop2 = populacao2 / area2;

    // Escolha dos atributos para comparação
    printf("\n\nESCOLHA DOS ATRIBUTOS! \n");
    printf("1. População\n2. Área\n3. PIB\n4. Pontos turísticos\n5. Densidade populacional\n");

    // Escolha do primeiro atributo
    printf("Escolha o 1º atributo: ");
    scanf("%d", &comparacao1);

    // Escolha do segundo atributo
    printf("Escolha o 2º atributo (diferente do primeiro): ");
    scanf("%d", &comparacao2);

    // Se os atributos forem iguais, escolhe o segundo atributo automaticamente
    if (comparacao1 == comparacao2) {
        printf("Erro: O segundo atributo deve ser diferente do primeiro!\n");
        if (comparacao2 < 5) {
            comparacao2 += 1;
        } else {
            comparacao2 -= 1;
        }
    }

    // Obtendo os valores dos atributos escolhidos
    float valor1, valor2, valor3, valor4;
    switch (comparacao1) {
        case 1: valor1 = populacao1; valor2 = populacao2; break;
        case 2: valor1 = area1; valor2 = area2; break;
        case 3: valor1 = pibcidade1; valor2 = pibcidade2; break;
        case 4: valor1 = pontosTuristicos1; valor2 = pontosTuristicos2; break;
        case 5: valor1 = densidadepop1; valor2 = densidadepop2; break;
    }

    switch (comparacao2) {
        case 1: valor3 = populacao1; valor4 = populacao2; break;
        case 2: valor3 = area1; valor4 = area2; break;
        case 3: valor3 = pibcidade1; valor4 = pibcidade2; break;
        case 4: valor3 = pontosTuristicos1; valor4 = pontosTuristicos2; break;
        case 5: valor3 = densidadepop1; valor4 = densidadepop2; break;
    }

    // Soma dos atributos
    float soma1 = valor1 + valor3;
    float soma2 = valor2 + valor4;

    // Exibição dos resultados
    printf("\n----------------------------------------\n");
    printf("Comparação entre %s e %s\n", nomeCidade1, nomeCidade2);
    printf("----------------------------------------\n");

    // Exibe valores dos atributos
    printf("1º Atributo: %.2f ( %s ) vs %.2f ( %s )\n", valor1, nomeCidade1, valor2, nomeCidade2);
    printf("2º Atributo: %.2f ( %s ) vs %.2f ( %s )\n", valor3, nomeCidade1, valor4, nomeCidade2);

    // Determinar vencedores de cada atributo
    if (valor1 == valor2) {
        printf("Empate no 1º atributo!\n");
    } else if ((comparacao1 == 5 && valor1 < valor2) || (comparacao1 != 5 && valor1 > valor2)) {
        printf("Vencedor do 1º atributo: %s\n", nomeCidade1);
    } else {
        printf("Vencedor do 1º atributo: %s\n", nomeCidade2);
    }

    if (valor3 == valor4) {
        printf("Empate no 2º atributo!\n");
    } else if ((comparacao2 == 5 && valor3 < valor4) || (comparacao2 != 5 && valor3 > valor4)) {
        printf("Vencedor do 2º atributo: %s\n", nomeCidade1);
    } else {
        printf("Vencedor do 2º atributo: %s\n", nomeCidade2);
    }

    // Exibe as somas
    printf("\nSoma dos atributos: \n");
    printf("%s: %.2f\n", nomeCidade1, soma1);
    printf("%s: %.2f\n", nomeCidade2, soma2);

    // Definição do vencedor final
    if (soma1 == soma2) {
        printf("\nRESULTADO FINAL: EMPATE!\n");
    } else if (soma1 > soma2) {
        printf("\nVENCEDOR: %s\n", nomeCidade1);
    } else {
        printf("\nVENCEDOR: %s\n", nomeCidade2);
    }

    return 0;
}
