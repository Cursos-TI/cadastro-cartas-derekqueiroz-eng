#include <stdio.h>

int main() {
    int populacao; 
    int Pontos_turisticos = 150; // fixo
    float Area, PIB;
    
    char Estado [3];     // Ex: CE 
    char Cidade [30];    // Ex: Fortaleza
    char Codigo [4];     // Ex: A4

    printf("populacao: \n");
    scanf("%d", &populacao);

    printf("Áre KM²: \n");
    scanf("%f", &Area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Estado (ex:CE): \n");
    scanf("%2s", Estado);

    getchar(); // Limpa o ENTER do buffer 

    printf("Cidade (com espacos): \n");
    fgets(Cidade, 30, stdin);

    printf("Codigo da Carta: \n");
    scanf("%3s", Codigo);

    printf("\n--- DADOS DA CARTA ---\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s", Cidade); 
    printf("Codigo da Carta: %s\n", Codigo);
    printf("população: %d\n", populacao);
    printf("Área KM²: %.2f\n", Area);
    printf("PIB: %.2f\n", PIB);
    printf("Pontos_turisticos: %d\n", Pontos_turisticos);

    return 0;

}