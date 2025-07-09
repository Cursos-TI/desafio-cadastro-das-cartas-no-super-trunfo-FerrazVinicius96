#include <stdio.h>
// Macro utilizado para definir len das variáveis char
#define TAM_CODIGO 5
#define TAM_NOME 100

// Declaração de Função de I/O
// Essa função utiliza declaração de parâmetro por indicação através de ponteiro.
void ler_carta(char *estado, char *codigo, char *nome_da_cidade, int *populacao, float *area, float *pib, int *pontos_turisticos);
// Declaração de Função de Exibição das Cartas
void exibir_carta(char estado, char codigo, char nome_da_cidade, int populacao, float area, float pib, int pontos_turisticos);

int main(void){
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

    // Exibição das cartas
    printf("=====> INFO CARTA 01 <=====");
    exibir_carta(estado1, codigo1[TAM_CODIGO], nome_da_cidade1[TAM_NOME], populacao1, area1, pib1, pontos_turisticos1);

    printf("=====> INFO CARTA 02 <=====");
    exibir_carta(estado2, codigo2[TAM_CODIGO], nome_da_cidade2[TAM_NOME], populacao2, area2, pib2, pontos_turisticos2);

    return 0;
}


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

void exibir_carta(char estado, char codigo, char nome_da_cidade, int populacao, float area, float pib, int pontos_turisticos){

    printf("Estado: %c\n", estado);
    printf("Codigo: %c\n", codigo);
    printf("Nome da cidade: %c\n", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %f\n", area);
    printf("PIB: %f\n", pib);
    printf("Quantidade de pontos turísticos: %d\n", pontos_turisticos);
}