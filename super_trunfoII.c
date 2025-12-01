#include <stdio.h>
#include <string.h>

int main() {
    char estado1[30], codigo1[10], cidade1[30];
    int populacao1, pontosTuristicos1;
    float area1, pib1;

    char estado2[30], codigo2[10], cidade2[30];
    int populacao2, pontosTuristicos2;
    float area2, pib2;

    printf("Carta 1\n");
    printf("Estado: ");
    fgets(estado1, 30, stdin);

    printf("Codigo: ");
    fgets(codigo1, 10, stdin);

    printf("Cidade: ");
    fgets(cidade1, 30, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao1);

    printf("Area: ");
    scanf("%f", &area1);

    printf("PIB: ");
    scanf("%f", &pib1);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos1);

    getchar();

    printf("\nCarta 2\n");
    printf("Estado: ");
    fgets(estado2, 30, stdin);

    printf("Codigo: ");
    fgets(codigo2, 10, stdin);

    printf("Cidade: ");
    fgets(cidade2, 30, stdin);

    printf("Populacao: ");
    scanf("%d", &populacao2);

    printf("Area: ");
    scanf("%f", &area2);

    printf("PIB: ");
    scanf("%f", &pib2);

    printf("Pontos turisticos: ");
    scanf("%d", &pontosTuristicos2);

    float densidade1 = populacao1 / area1;
    float densidade2 = populacao2 / area2;

    float pibPerCapita1 = pib1 / populacao1;
    float pibPerCapita2 = pib2 / populacao2;

    char atributo[] = "PIB per capita";

    printf("\nComparacao de cartas (Atributo: %s)\n", atributo);
    printf("Carta 1 - %s: %.2f\n", cidade1, pibPerCapita1);
    printf("Carta 2 - %s: %.2f\n", cidade2, pibPerCapita2);

    if (pibPerCapita1 > pibPerCapita2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (pibPerCapita2 > pibPerCapita1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}