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

    // --- CADASTRO DAS CARTAS ---
     printf("Carta 1 \n");
    printf("Digite seu Estado da PRIMEIRA CARTA: \n");
    scanf("%s", &estado1);

    printf("Digite o código da sua carta: \n");
    scanf("%s", &codigo1);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &cidade1);

    printf("Digite total de habitantes: \n");
    scanf("%lu", &populacao1);

    printf("Digite a área da sua cidade em km2: \n");
    scanf("%f", &area1);

    printf("Digite o valor do PIB da sua cidade: \n");
    scanf("%f", &pib1);

    printf("Digite quantidade de pontos turisticos de sua cidade: \n");
    scanf("%d", &pontosturisticos1);

   
    printf("Carta 2! \n");
    printf("Digite seu Estado da SEGUNDA CARTA: \n");
    scanf("%s", &estado2);

    printf("Digite o código da sua carta: \n");
    scanf("%s", &codigo2);

    printf("Digite o nome da sua cidade: \n");
    scanf("%s", &cidade2);

    printf("Digite total de habitantes: \n");
    scanf("%lu", &populacao2);

    printf("Digite a área da sua cidade em km2: \n");
    scanf("%f", &area2);

    printf("Digite o valor do PIB da sua cidade: \n");
    scanf("%f", &pib2);

    printf("Digite quantidade de pontos turisticos de sua cidade: \n");
    scanf("%d", &pontosturisticos2);

    // --- CÁLCULOS ---
    densidade1 = (float)populacao1 / area1;
    percapita1 = (float)pib1 / populacao1;

    densidade2 = (float)populacao2 / area2;
    percapita2 = (float)pib2 / populacao2;
    
    
    // Exibição dos dados das cartas
    printf("\n--- Dados das Cartas ---\n");
    
    printf("\nCarta 1: %s (%s)\n", cidade1, estado1,codigo1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %0.f km2\n", area1);
    printf("PIB: %0.f bilhoes de reais\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per capita: R$ %.2f\n", percapita1);

    printf("\nCarta 2: %s (%s)\n", cidade2, estado2, codigo2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %0.f km2\n", area2);
    printf("PIB: %0.f bilhoes de reais\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per capita: R$ %.2f\n", percapita2);

    // Cálculo do Super Poder
    float superpoder1 = (float)populacao1 + area1 + pib1 + pontosturisticos1 + percapita1 + (1 / densidade1);
    float superpoder2 = (float)populacao2 + area2 + pib2 + pontosturisticos2 + percapita2 + (1 / densidade2);

    // Comparações
    int vpopulacao = populacao1 > populacao2;
    int varea = area1 > area2;
    int vpib = pib1 > pib2;
    int vpontos = pontosturisticos1 > pontosturisticos2;
    int vdensidade = densidade1 < densidade2; // menor vence
    int vpercapita = percapita1 > percapita2;
    int vsuperpoder = superpoder1 > superpoder2;

      // Exibição das Comparações
    printf("\nComparação de Cartas:\n");
    printf("População: Carta 1 venceu (%d)\n", vpopulacao);
    printf("Área: Carta 1 venceu (%d)\n", varea);
    printf("PIB: Carta 1 venceu (%d)\n", vpib);
    printf("Pontos Turísticos: Carta 1 venceu (%d)\n", vpontos);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", vdensidade);
    printf("PIB per Capita: Carta 1 venceu (%d)\n", vpercapita);
    printf("Super Poder: Carta 1 venceu (%d)\n", vsuperpoder);


    // --- COMPARAÇÃO ---
    printf("\n--- Resultado da Comparacao ---\n");
    // O atributo de comparacao foi definido como "Populacao" diretamente no código.
    printf("Comparacao de cartas (Atributo: Populacao)\n\n");
    
    // Exibe os valores do atributo de comparação
    printf("Carta 1 - %s (%s): %lu\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %lu\n", cidade2, estado2, populacao2);
    
    // Lógica para determinar o vencedor
    if (populacao1 > populacao2) {
        printf("Resultado: Carta 1 (%s) venceu!\n", cidade1);
    } else if (populacao2 > populacao1) {
        printf("Resultado: Carta 2 (%s) venceu!\n", cidade2);
    } else {
        printf("Resultado: Empate!\n");
    }

    return 0;
}