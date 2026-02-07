#include <stdio.h>

int main() {
    int populacao; 
    int Pontos_turisticos = 50; // definido fixo
    float Area, PIB;
    char Estado [3], Cidade [30], Codigo [4];

    printf("populacao: \n");
    scanf("%d", &populacao);

    printf("Áre KM²: \n");
    scanf("%f", &Area);

    printf("PIB: \n");
    scanf("%f", &PIB);

    printf("Estado (ex:RN) \n");
    scanf("%2s", Estado);

    getchar(); // Limpa o buffer do fgets

    printf("Cidade (com espacos) \n");
    fgets(Cidade, 30, stdin);

    printf("Codigo da Carta: \n");
    scanf("%3s", Codigo);

    printf("Pontos_turisticos: \n");
    scanf("%d", &Pontos_turisticos);

printf("Estado: %s\n", Estado);
printf("Cidade: %s\n", Cidade); // fgets ja traz o \n
printf("Codigo da Carta: %s\n", Codigo);
printf("população: %d\n", populacao);
printf("Área KM²: %.2f\n", Area);
printf("PIB: %.2f\n", PIB);
printf("Pontos_turisticos: %d\n", Pontos_turisticos);
    


    return 0;

} 
