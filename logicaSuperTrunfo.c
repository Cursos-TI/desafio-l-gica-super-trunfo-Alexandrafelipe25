#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio
    char estado1 [10];
    char codigo1 [5];
    char cidade1 [20];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;
    float densidade1;
    float percapita1;
   

    char estado2 [10];
    char codigo2 [5];
    char cidade2 [20];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;
    float densidade2;
    float percapita2;

   
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

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
   
     //calculos
    densidade1 = (float)populacao1 / area1;
    percapita1 = (float)pib1 / populacao1;

    densidade2 = (float)populacao2 / area2;
    percapita2 = (float)pib2 / populacao2;
    


    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

  printf("Carta 1\n");
    printf("Estado: %s\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu\n", populacao1);
    printf("Área: %0.f km²\n", area1);
    printf("PIB: %0.f Bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n",pontosturisticos1);
    printf("Densidade Demográfica: %.2f hab/m²\n", densidade1);
    printf("PIB per Capita: %.2f reais\n", percapita1);

    printf("Carta 2\n");
    printf("Estado: %s\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu\n", populacao2);
    printf("Área: %0.f km²\n", area2);
    printf("PIB: %0.f Bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n",pontosturisticos2);
    printf("Densidade Demográfica: %.2f hab/m²\n", densidade2);
    printf("PIB per Capita: %.2f reais\n", percapita2);

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


    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    return 0;
}
