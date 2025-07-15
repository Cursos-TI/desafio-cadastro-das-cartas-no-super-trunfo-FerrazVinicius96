#include <stdio.h>

#define TAM_CODIGO 5
#define TAM_NOME 100

// Funções de I/O
void ler_carta(char *estado, char *codigo, char *nome_da_cidade, int *populacao, float *area, float *pib, int *pontos_turisticos);
void exibir_carta(int numero, char estado, char *codigo, char *nome_da_cidade, int populacao, float area, float pib, int pontos_turisticos);

int main() {
    // Variáveis da Carta 1
    char estado1, codigo1[TAM_CODIGO], nome_da_cidade1[TAM_NOME];
    int populacao1, pontos_turisticos1;
    float area1, pib1;

    // Variáveis da Carta 2
    char estado2, codigo2[TAM_CODIGO], nome_da_cidade2[TAM_NOME];
    int populacao2, pontos_turisticos2;
    float area2, pib2;

    // Ler cartas
    printf("=====> CARTA 01 <===== \n");
    ler_carta(&estado1, codigo1, nome_da_cidade1, &populacao1, &area1, &pib1, &pontos_turisticos1);

    printf("=====> CARTA 02 <===== \n");
    ler_carta(&estado2, codigo2, nome_da_cidade2, &populacao2, &area2, &pib2, &pontos_turisticos2);


    // Exibir informações
    printf("=====> INFORMAÇÕES DAS CARTAS <===== \n");
    exibir_carta(1, estado1, codigo1, nome_da_cidade1, populacao1, area1, pib1, pontos_turisticos1);
    exibir_carta(2, estado2, codigo2, nome_da_cidade2, populacao2, area2, pib2, pontos_turisticos2);

    return 0;
}

// Definições das funções auxiliares

float densidade_populacional(int populacao, float area) {
    return populacao / area;
}

float pib_per_capita(int populacao, float pib) {
    return pib / populacao;
}

float super_poder(int populacao, int pontos_turisticos, float area, float pib, float pib_pc, float densidade) {
    return populacao + pontos_turisticos + area + pib + pib_pc + densidade;
}

// Função para ler uma carta
void ler_carta(char *estado, char *codigo, char *nome_da_cidade, int *populacao, float *area, float *pib, int *pontos_turisticos) {
    printf("Insira a letra que representa o estado ('A' - 'H'): \n");
    scanf(" %c", estado);

    printf("Insira o código da carta[01 - 04]: \n");
    scanf("%s", codigo);

    while (getchar() != '\n'); // Limpa buffer

    printf("Insira o nome da cidade: \n");
    fgets(nome_da_cidade, TAM_NOME, stdin);

    printf("Insira a populacao: \n");
    scanf("%d", populacao);

    printf("Insira a area da cidade em km2: \n");
    scanf("%f", area);

    printf("Insira o PIB da cidade: \n");
    scanf("%f", pib);

    printf("Insira o número de pontos turisticos: \n");
    scanf("%d", pontos_turisticos);
}

// Função para exibir uma carta
void exibir_carta(int numero, char estado, char *codigo, char *nome_da_cidade, int populacao, float area, float pib, int pontos_turisticos) {
    printf("=====> CARTA %d <===== \n", numero);
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da Cidade: %s", nome_da_cidade); // fgets já inclui o '\n'
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
}