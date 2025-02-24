#include <stdio.h>

int main() {
    // Definindo as variáveis para os dados da Carta 1
    char estado1;
    char codigo1[5];
    char cidade1[50];
    unsigned long int populacao1;
    float area1, pib1;
    int pontos_turisticos1;

    // Definindo as variáveis para os dados da Carta 2
    char estado2;
    char codigo2[5];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontos_turisticos2;

    // Entrada dos dados para a Carta 1
    printf("Insira os dados da Carta 1:\n");
    printf("Estado: ");
    scanf(" %c", &estado1);
    printf("Código da Carta: ");
    scanf("%s", codigo1);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade1);
    printf("População: ");
    scanf("%lu", &populacao1);
    printf("Área (em km²): ");
    scanf("%f", &area1);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib1);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos1);

    // Entrada dos dados para a Carta 2
    printf("\nInsira os dados da Carta 2:\n");
    printf("Estado: ");
    scanf(" %c", &estado2);
    printf("Código da Carta: ");
    scanf("%s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]", cidade2);
    printf("População: ");
    scanf("%lu", &populacao2);
    printf("Área (em km²): ");
    scanf("%f", &area2);
    printf("PIB (em bilhões de reais): ");
    scanf("%f", &pib2);
    printf("Número de Pontos Turísticos: ");
    scanf("%d", &pontos_turisticos2);

    // Calcular a densidade populacional e o PIB per capita para a Carta 1
    float densidade_populacional1 = populacao1 / area1;
    float pib_per_capita1 = pib1 * 1e9 / populacao1;

    // Calcular a densidade populacional e o PIB per capita para a Carta 2
    float densidade_populacional2 = populacao2 / area2;
    float pib_per_capita2 = pib2 * 1e9 / populacao2;

    // Calcular o Super Poder para a Carta 1
    float super_poder1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + pib_per_capita1 + (1 / densidade_populacional1);
    
    // Calcular o Super
}