🃏 Desafio: Criando as Cartas do Super Trunfo (Nível Novato)
=============================================================

Nível: Novato  
Linguagem: C  
Conceito-chave: Leitura de dados, variáveis, entrada e saída padrão, strings

📑 Tabela de Conteúdo
----------------------
- [🎯 Objetivo](#🎯-objetivo)
- [📌 O que você vai fazer](#📌-o-que-você-vai-fazer)
- [✅ Requisitos Funcionais](#✅-requisitos-funcionais)
- [🚫 Requisitos Não Funcionais](#🚫-requisitos-não-funcionais)
- [🎯 Simplificações](#🎯-simplificações)
- [📤 Exemplo de Saída Esperada](#📤-exemplo-de-saída-esperada)
- [⚙️ Como Compilar e Executar](#⚙️-como-compilar-e-executar)
- [💡 Dica Final](#💡-dica-final)

🎯 Objetivo
-----------
Construir um programa simples em C para cadastrar e exibir duas cartas do Super Trunfo de Cidades Brasileiras, utilizando entrada padrão (teclado) e variáveis básicas.

📌 O que você vai fazer
------------------------
Criar um programa que leia e armazene os seguintes dados para **duas cartas**:

- **Estado** (letra de A a H) → `char`
- **Código da Carta** (ex: A01) → `char[]`
- **Nome da Cidade** → `char[]`
- **População** → `int`
- **Área (em km²)** → `float`
- **PIB (em bilhões de reais)** → `float`
- **Número de Pontos Turísticos** → `int`

Após o cadastro, o programa deve exibir todas as informações de cada carta, uma por linha, com descrições claras.

✅ Requisitos Funcionais
-------------------------
- Ler corretamente os dados de duas cartas a partir da entrada do usuário.
- Armazenar os dados em variáveis apropriadas.
- Exibir os dados de forma **organizada, formatada e legível**.

🚫 Requisitos Não Funcionais
-----------------------------
- O programa deve ser fácil de usar, com mensagens claras ao usuário.
- Código bem indentado e comentado.
- Nomes de variáveis significativos.
- Sem erros de compilação ou execução.

🎯 Simplificações
------------------
- Apenas duas cartas devem ser cadastradas.
- Não é necessário fazer comparações entre cartas.
- Não usar estruturas de repetição (`for`, `while`) ou decisão (`if`, `else`).
- O código deve ser uma **sequência linear de comandos**.

📤 Exemplo de Saída Esperada
-----------------------------

```
Carta 1:
Estado: A
Código: A01
Nome da Cidade: São Paulo
População: 12325000
Área: 1521.11 km²
PIB: 699.28 bilhões de reais
Número de Pontos Turísticos: 50

Carta 2:
Estado: B
Código: B02
Nome da Cidade: Rio de Janeiro
População: 6748000
Área: 1200.25 km²
PIB: 300.50 bilhões de reais
Número de Pontos Turísticos: 30
```

⚙️ Como Compilar e Executar
----------------------------
1. Salve o código como `super_trunfo_cartas.c`
2. Compile com:
   gcc super_trunfo_cartas.c -o trunfo
3. Execute:
   ./trunfo

💡 Dica Final
-------------
Use `scanf` para capturar as entradas do usuário e `printf` para formatar a saída.
Evite lógica condicional e repetições — mantenha o código simples e linear.

Boa sorte construindo suas primeiras cartas! 🧠📇
