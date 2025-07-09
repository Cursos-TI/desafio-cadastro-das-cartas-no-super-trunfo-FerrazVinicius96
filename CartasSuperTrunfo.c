#include <stdio.h>
#define TAM_CODIGO 5
#define TAM_NOME 100

// Funções
void ler_carta(char *estado, char *codigo, char *nome_da_cidade, int *populacao, float *area, float *pib, int *pontos_turisticos);
void exibir_carta(char estado, char *codigo, char *nome_da_cidade, int populacao, float area, float pib, int pontos_turisticos, float densidade, float pib_pc);
float densidade(int populacao, float area) {
    return populacao / area;
}
float pib_pc(int populacao, float pib) {
    return pib / populacao;
}

// Função para comparação entre cada atributo
void comparacao(int populacao1, int populacao2,
                int pontos_turisticos1, int pontos_turisticos2,
                float area1, float area2,
                float pib1, float pib2,
                float densidade1, float densidade2,
                float pib_pc1, float pib_pc2); 


int main(void) {
    // Carta 1
    char estado1, codigo1[TAM_CODIGO], nome_da_cidade1[TAM_NOME];
    int populacao1, pontos_turisticos1;
    float area1, pib1, densidade1, pib_pc1;

    // Carta 2
    char estado2, codigo2[TAM_CODIGO], nome_da_cidade2[TAM_NOME];
    int populacao2, pontos_turisticos2;
    float area2, pib2, densidade2, pib_pc2;

    // Leitura
    printf("=====> CARTA 01 <===== \n");
    ler_carta(&estado1, codigo1, nome_da_cidade1, &populacao1, &area1, &pib1, &pontos_turisticos1);

    printf("=====> CARTA 02 <===== \n");
    ler_carta(&estado2, codigo2, nome_da_cidade2, &populacao2, &area2, &pib2, &pontos_turisticos2);

    // Cálculos
    densidade1 = densidade(populacao1, area1);
    pib_pc1 = pib_pc(populacao1, pib1);

    densidade2 = densidade(populacao2, area2);
    pib_pc2 = pib_pc(populacao2, pib2);

    // Exibição
    printf("=====> INFO CARTA 01 <=====\n");
    exibir_carta(estado1, codigo1, nome_da_cidade1, populacao1, area1, pib1, pontos_turisticos1, densidade1, pib_pc1);

    printf("=====> INFO CARTA 02 <=====\n");
    exibir_carta(estado2, codigo2, nome_da_cidade2, populacao2, area2, pib2, pontos_turisticos2, densidade2, pib_pc2);

    comparacao(
    populacao1, populacao2,
    pontos_turisticos1, pontos_turisticos2,
    area1, area2,
    pib1, pib2,
    densidade1, densidade2,
    pib_pc1, pib_pc2
);

    return 0;
}

void ler_carta(char *estado, char *codigo, char *nome_da_cidade, int *populacao, float *area, float *pib, int *pontos_turisticos) {
    printf("Insira a letra do estado (A-H): ");
    scanf(" %c", estado);

    printf("Insira o código da carta (01-04): ");
    scanf("%s", codigo);

    while (getchar() != '\n'); // limpar buffer

    printf("Insira o nome da cidade: ");
    fgets(nome_da_cidade, TAM_NOME, stdin);

    printf("População: ");
    scanf("%d", populacao);

    printf("Área (km²): ");
    scanf("%f", area);

    printf("PIB (milhões): ");
    scanf("%f", pib);

    printf("Número de pontos turísticos: ");
    scanf("%d", pontos_turisticos);
}

void exibir_carta(char estado, char *codigo, char *nome_da_cidade, int populacao, float area, float pib, int pontos_turisticos, float densidade, float pib_pc) {
    printf("Estado: %c\n", estado);
    printf("Código: %s\n", codigo);
    printf("Nome da cidade: %s", nome_da_cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: %.2f\n", pib_pc);
}

void comparacao(
    int populacao1, int populacao2,
    int pontos_turisticos1, int pontos_turisticos2,
    float area1, float area2,
    float pib1, float pib2,
    float densidade1, float densidade2,
    float pib_pc1, float pib_pc2
) {
    int resultado;

    printf("\n=====> COMPARAÇÃO ENTRE CARTAS <=====\n");

    // População
    resultado = (populacao1 > populacao2) ? 1 : 0;
    printf("População: %d\n", resultado);

    // Área
    resultado = (area1 > area2) ? 1 : 0;
    printf("Área: %d\n", resultado);

    // PIB
    resultado = (pib1 > pib2) ? 1 : 0;
    printf("PIB: %d\n", resultado);

    // Pontos Turísticos
    resultado = (pontos_turisticos1 > pontos_turisticos2) ? 1 : 0;
    printf("Pontos Turísticos: %d\n", resultado);

    // Densidade populacional (menor vence)
    resultado = (densidade1 < densidade2) ? 1 : 0;
    printf("Densidade Populacional: %d\n", resultado);

    // PIB per capita
    resultado = (pib_pc1 > pib_pc2) ? 1 : 0;
    printf("PIB per capita: %d\n", resultado);

    // Super Poder
    float super_poder1 = populacao1 + area1 + pib1 + pontos_turisticos1 + pib_pc1 + (1.0 / densidade1);
    float super_poder2 = populacao2 + area2 + pib2 + pontos_turisticos2 + pib_pc2 + (1.0 / densidade2);

    resultado = (super_poder1 > super_poder2) ? 1 : 0;
    printf("Super Poder: %d\n", resultado);
}