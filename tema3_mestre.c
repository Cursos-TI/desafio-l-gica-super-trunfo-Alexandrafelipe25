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

    int escolha_atributo1, escolha_atributo2;
    float soma_carta1 = 0;
    float soma_carta2 = 0;
    
    // --- CADASTRO DAS CARTAS ---
    // (O código de cadastro é o mesmo dos desafios anteriores)
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
    
    // --- MENUS INTERATIVOS ---
    printf("\n--- Escolha o PRIMEIRO atributo para a disputa ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. PIB per capita\n");
    printf("Digite o numero da sua escolha: ");
    scanf("%d", &escolha_atributo1);

    printf("\n--- Escolha o SEGUNDO atributo para a disputa ---\n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade Demografica\n");
    printf("6. PIB per capita\n");
    printf("Digite o numero da sua escolha: ");
    scanf("%d", &escolha_atributo2);
    printf("\n");

    // Validação da escolha dos atributos
    if (escolha_atributo1 == escolha_atributo2) {
        printf("Erro: Voce nao pode escolher o mesmo atributo duas vezes.\n");
        return 1; 
    }

    // --- LÓGICA DE SOMA E COMPARAÇÃO ---
    // Atributo 1
    switch (escolha_atributo1) {
        case 1: // População
            soma_carta1 += populacao1;
            soma_carta2 += populacao2;
            break;
        case 2: // Área
            soma_carta1 += area1;
            soma_carta2 += area2;
            break;
        case 3: // PIB
            soma_carta1 += pib1;
            soma_carta2 += pib2;
            break;
        case 4: // Pontos Turísticos
            soma_carta1 += pontosturisticos1;
            soma_carta2 += pontosturisticos2;
            break;
        case 5: // Densidade Demográfica
            // Usa o inverso para a soma, já que menor valor vence
            soma_carta1 -= densidade1;
            soma_carta2 -= densidade2;
            break;
        case 6: // PIB per capita
            soma_carta1 += percapita1;
            soma_carta2 += percapita2;
            break;
        default:
            printf("Opcao de atributo 1 invalida.\n");
            return 1;
    }

    // Atributo 2
    switch (escolha_atributo2) {
        case 1: // População
            soma_carta1 += populacao1;
            soma_carta2 += populacao2;
            break;
        case 2: // Área
            soma_carta1 += area1;
            soma_carta2 += area2;
            break;
        case 3: // PIB
            soma_carta1 += pib1;
            soma_carta2 += pib2;
            break;
        case 4: // Pontos Turísticos
            soma_carta1 += pontosturisticos1;
            soma_carta2 += pontosturisticos2;
            break;
        case 5: // Densidade Demográfica
            // Usa o inverso para a soma, já que menor valor vence
            soma_carta1 -= densidade1;
            soma_carta2 -= densidade2;
            break;
        case 6: // PIB per capita
            soma_carta1 += percapita1;
            soma_carta2 += percapita2;
            break;
        default:
            printf("Opcao de atributo 2 invalida.\n");
            return 1;
    }
    
    // --- EXIBIÇÃO DO RESULTADO ---
    printf("--- Resultado da Comparacao ---\n");
    printf("Atributos escolhidos: %d e %d\n\n", escolha_atributo1, escolha_atributo2);
    
    // Exibe os valores dos atributos e suas somas
    printf("Carta 1 (%s): \n", cidade1);
    printf("Soma dos atributos: %.2f\n", soma_carta1);
    
    printf("Carta 2 (%s): \n", cidade2);
    printf("Soma dos atributos: %.2f\n\n", soma_carta2);

    // Lógica para determinar o vencedor
    if (soma_carta1 > soma_carta2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (soma_carta2 > soma_carta1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}