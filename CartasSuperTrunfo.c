#include <stdio.h>

int main() {
    // Declaração das variáveis da primeira carta
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Declaração das variáveis da segunda carta
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Entrada dos dados da primeira carta
    printf("Carta 1:\n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao1);
    printf("Digite a area: ");
    scanf("%f", &area1);
    printf("Digite o PIB: ");
    scanf("%f", &pib1);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada dos dados da segunda carta
    printf("\nCarta 2:\n");
    printf("Digite a populacao: ");
    scanf("%d", &populacao2);
    printf("Digite a area: ");
    scanf("%f", &area2);
    printf("Digite o PIB: ");
    scanf("%f", &pib2);
    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // Exibição dos dados da primeira carta
    printf("\nDados da Carta 1:\n");
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);

    // Exibição dos dados da segunda carta
    printf("\nDados da Carta 2:\n");
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);

    return 0;
}

