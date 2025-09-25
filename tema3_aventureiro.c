#include <stdio.h>
#include <string.h>

int main() {
    // Definindo as variáveis para a Carta 1
    char estado1[10];
    char codigo1[5];
    char cidade1[20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float percapita1;

    // Definindo as variáveis para a Carta 2
    char estado2[10];
    char codigo2[5];
    char cidade2[20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float percapita2;

    int escolha_atributo;

    // --- CADASTRO DAS CARTAS ---
    // Carta 1
    printf("--- Cadastro da Carta 1 ---\n");
    printf("Estado (ex: SP): ");
    scanf("%s", estado1);
    printf("Codigo da carta (ex: C1): ");
    scanf("%s", codigo1);
    printf("Nome da cidade: ");
    scanf("%s", cidade1);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib1);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosturisticos1);

    printf("\n--- Cadastro da Carta 2 ---\n");
    printf("Estado (ex: RJ): ");
    scanf("%s", estado2);
    printf("Codigo da carta (ex: C2): ");
    scanf("%s", codigo2);
    printf("Nome da cidade: ");
    scanf("%s", cidade2);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &pib2);
    printf("Pontos turisticos: ");
    scanf("%d", &pontosturisticos2);

    // --- CÁLCULOS ---
    densidade1 = populacao1 / area1;
    percapita1 = (pib1 * 1000000000) / populacao1;
    densidade2 = populacao2 / area2;
    percapita2 = (pib2 * 1000000000) / populacao2;

    // --- MENU INTERATIVO ---
    printf("\n--- Escolha o atributo para a disputa ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. PIB per capita\n");
    printf("Digite o numero da sua escolha: ");
    scanf("%d", &escolha_atributo);
    printf("\n");

    // --- LÓGICA DE COMPARAÇÃO COM SWITCH ---
    printf("--- Resultado da Comparacao ---\n");

    switch (escolha_atributo) {
        case 1: // População
            printf("Atributo: Populacao\n");
            printf("Carta 1 (%s): %lu\n", cidade1, populacao1);
            printf("Carta 2 (%s): %lu\n", cidade2, populacao2);
            if (populacao1 > populacao2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (populacao2 > populacao1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 2: // Área
            printf("Atributo: Area\n");
            printf("Carta 1 (%s): %.2f km2\n", cidade1, area1);
            printf("Carta 2 (%s): %.2f km2\n", cidade2, area2);
            if (area1 > area2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (area2 > area1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 3: // PIB
            printf("Atributo: PIB\n");
            printf("Carta 1 (%s): %.2f bilhoes\n", cidade1, pib1);
            printf("Carta 2 (%s): %.2f bilhoes\n", cidade2, pib2);
            if (pib1 > pib2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pib2 > pib1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 4: // Pontos Turísticos
            printf("Atributo: Pontos Turisticos\n");
            printf("Carta 1 (%s): %d pontos\n", cidade1, pontosturisticos1);
            printf("Carta 2 (%s): %d pontos\n", cidade2, pontosturisticos2);
            if (pontosturisticos1 > pontosturisticos2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (pontosturisticos2 > pontosturisticos1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        case 5: // Densidade Demográfica (menor valor vence)
            printf("Atributo: Densidade Demografica\n");
            printf("Carta 1 (%s): %.2f hab/km2\n", cidade1, densidade1);
            printf("Carta 2 (%s): %.2f hab/km2\n", cidade2, densidade2);
            if (densidade1 < densidade2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (densidade2 < densidade1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;
            
        case 6: // PIB per capita
            printf("Atributo: PIB per capita\n");
            printf("Carta 1 (%s): R$ %.2f\n", cidade1, percapita1);
            printf("Carta 2 (%s): R$ %.2f\n", cidade2, percapita2);
            if (percapita1 > percapita2) {
                printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
            } else if (percapita2 > percapita1) {
                printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
            } else {
                printf("Resultado: Empate!\n");
            }
            break;

        default:
            printf("Opcao invalida. Por favor, escolha um numero entre 1 e 6.\n");
            break;
    }

    return 0;
}