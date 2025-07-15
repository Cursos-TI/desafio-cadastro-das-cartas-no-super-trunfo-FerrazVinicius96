# Super Trunfo de Cidades — Desafio Nível Mestre

Bem-vindo ao desafio final do projeto Super Trunfo! Neste nível, você colocará duas cartas para competir entre si, implementando lógica de comparação, cálculo de atributos derivados e a introdução do "Super Poder".

---

## 🧠 O Que o Programa Faz

- Lê os dados de **duas cartas** via entrada padrão.
- Calcula **Densidade Populacional** e **PIB per Capita**.
- Calcula o **Super Poder** somando atributos numéricos, incluindo o **inverso da densidade populacional**.
- Compara as cartas atributo por atributo, exibindo qual venceu em cada critério.

---

## 📌 Atributos Lidos para Cada Carta

- Estado (`char`)
- Código da Carta (`char[]`)
- Nome da Cidade (`char[]`)
- População (`unsigned long int`)
- Área (em km²) (`float`)
- PIB (`float`)
- Número de Pontos Turísticos (`int`)

---

## 📊 Atributos Calculados

- **Densidade Populacional** = população / área
- **PIB per Capita** = PIB / população
- **Super Poder** = população + área + PIB + pontos turísticos + PIB per capita + (1 / densidade populacional)

*Nota: O Super Poder é armazenado como `float` e exige conversões de tipo apropriadas.*

---

## 🧪 Critérios de Comparação

| Atributo                 | Vencedor           |
|--------------------------|--------------------|
| População                | Maior valor        |
| Área                     | Maior valor        |
| PIB                      | Maior valor        |
| Pontos Turísticos        | Maior valor        |
| Densidade Populacional   | **Menor valor**    |
| PIB per Capita           | Maior valor        |
| Super Poder              | Maior valor        |

---

## 🖥️ Exemplo de Saída

```
Comparação de Cartas:

População: Carta 1 venceu (1)
Área: Carta 2 venceu (0)
PIB: Carta 1 venceu (1)
Pontos Turísticos: Carta 1 venceu (1)
Densidade Populacional: Carta 2 venceu (0)
PIB per Capita: Carta 1 venceu (1)
Super Poder: Carta 1 venceu (1)
```

---

## 🧑‍💻 Como Compilar e Executar

### 💾 Pré-requisitos

- Compilador C instalado (ex: `gcc`)

### 🔧 Compilação

No terminal, execute:

```
gcc super_trunfo_mestre.c -o super_trunfo_mestre
```

### ▶️ Execução

```
./super_trunfo_mestre
```

---

## ✅ Requisitos Funcionais

- Leitura completa das duas cartas.
- Cálculo correto dos atributos derivados.
- Comparação precisa com exibição legível.

## 🛠️ Requisitos Não Funcionais

- Código legível e bem comentado.
- Nomes de variáveis descritivos.
- Eficiência e corretude garantidas.

---

Desenvolvido para fins educacionais. Ideal para alunos de programação em C que estão desenvolvendo habilidades com operadores, tipos de dados e entrada/saída formatada.
