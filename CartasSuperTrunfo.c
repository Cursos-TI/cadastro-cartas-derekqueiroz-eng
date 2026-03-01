#include <stdio.h>

int main()
{
    int pontos_turisticos1, pontos_turisticos2;
    char carta1, carta2;
    char estado1[20], estado2[20];
    char nome_cidade1[20], nome_cidade2[20];
    
	float populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float pib_per_capita1, pib_per_capita2;

    // ===== PRIMEIRO ESTADO =====
    printf("===== CARTA 1 =====\n");

    printf("Digite o estado: ");
    scanf("%s", estado1);

    printf("Digite o codigo da carta (uma letra): ");
    scanf(" %c", &carta1);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a populacao: ");
    scanf("%f", &populacao1);

    printf("Digite a area (km2): ");
    scanf("%f", &area1);

    printf("Digite o PIB: ");
    scanf("%f", &pib1);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos1);

    // ===== SEGUNDO ESTADO =====
    printf("\n===== CARTA 2 =====\n");

    printf("Digite o estado: ");
    scanf("%s", estado2);

    printf("Digite o codigo da carta (uma letra): ");
    scanf(" %c", &carta2);

    printf("Digite o nome da cidade: ");
    scanf("%s", nome_cidade1);

    printf("Digite a populacao: ");
    scanf("%f", &populacao2);

    printf("Digite a area (km2): ");
    scanf("%f", &area2);

    printf("Digite o PIB: ");
    scanf("%f", &pib2);

    printf("Digite o numero de pontos turisticos: ");
    scanf("%d", &pontos_turisticos2);

    // ===== CÁLCULOS =====
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    pib_per_capita1 = pib1 / populacao1;
    pib_per_capita2 = pib2 / populacao2;

    printf("\nCadastro realizado com sucesso!\n");

    // ===== EXIBIÇÃO DOS RESULTADOS =====
    printf("\n\n===== DADOS DAS CARTAS =====\n");

    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %c\n", carta1);
    printf("Cidade: %s\n", nome_cidade1);
    printf("Populacao: %.2f\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("PIB per Capita: %.2f\n", pib_per_capita1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %c\n", carta2);
    printf("Cidade: %s\n", nome_cidade2);
    printf("Populacao: %.2f\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
    printf("PIB per Capita: %.2f\n", pib_per_capita2);
	
	    return 0;

} 

} 
