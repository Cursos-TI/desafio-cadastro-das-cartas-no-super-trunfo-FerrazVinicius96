
# Super Trunfo de Países — Nível Aventureiro

Este desafio aprimora o programa desenvolvido no nível novato, adicionando cálculos de densidade populacional e PIB per capita para cada cidade cadastrada no jogo Super Trunfo.

## Objetivo

Criar um programa em C que:

- Leia os dados de duas cartas de cidades.
- Calcule a densidade populacional e o PIB per capita.
- Exiba todas as informações formatadas, incluindo os novos cálculos.

## Campos de cada carta

Cada carta deve conter os seguintes dados:

- Estado (char): Letra de 'A' a 'H'
- Código da Carta (char[]): Letra do estado + número de 01 a 04 (ex: A01)
- Nome da Cidade (char[])
- População (int)
- Área em km² (float)
- PIB em bilhões de reais (float)
- Número de Pontos Turísticos (int)
- Densidade Populacional (calculado): população / área
- PIB per Capita (calculado): PIB / população

## Exemplo de saída esperada

```
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50
Densidade Populacional: 8102.47 hab/km²
PIB per Capita: 56724.32 reais

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
Densidade Populacional: 5622.24 hab/km²
PIB per Capita: 44532.91 reais
```

## Requisitos

### Funcionais
- Ler corretamente os dados de duas cartas.
- Calcular densidade populacional e PIB per capita.
- Exibir os dados de forma clara e formatada com duas casas decimais.

### Não Funcionais
- Usabilidade: instruções claras para o usuário.
- Legibilidade: código organizado e comentado.
- Corretude e eficiência: sem erros de compilação ou execução.

## Restrições

- Não utilizar estruturas de repetição (`for`, `while`) ou decisão (`if`, `else`).
- As informações devem ser lidas diretamente do usuário.

## Compilação e Execução

### Compilando

Use o `gcc` para compilar:

```bash
gcc super_trunfo_aventureiro.c -o super_trunfo_aventureiro
```

### Executando

```bash
./super_trunfo_aventureiro
```

Certifique-se de estar no mesmo diretório do arquivo `.c` ao compilar e executar.

---

Desenvolvido para prática de conceitos básicos de entrada, saída e operações matemáticas em C.
