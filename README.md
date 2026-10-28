# Ranking de Notas da Turma — Bubble Sort x Quick Sort

Aplicação em **linguagem C** que ordena as notas de uma turma usando dois algoritmos de ordenação (**Bubble Sort** e **Quick Sort**) e compara o desempenho de cada um.

**Autor:** Jean Emanuel Alves de Morais
**Curso:** Análise e Desenvolvimento de Sistemas — UDF

---

## 1. Objetivo

Desenvolver uma aplicação funcional em C que resolva uma situação do cotidiano escolar aplicando os algoritmos Bubble Sort e Quick Sort sobre o mesmo conjunto de dados, exibindo os resultados antes e depois da ordenação.

## 2. Situação-problema

Ao final do bimestre, o professor precisa montar o **ranking da turma** para identificar os alunos com melhor desempenho e aqueles que precisam de reforço. Organizar as notas manualmente é lento e sujeito a erros, principalmente quando há muitos alunos ou notas repetidas. A ordenação automática resolve o problema de forma rápida e confiável.

## 3. O que o programa faz

1. Cria uma lista com **12 alunos** (nome e nota), incluindo notas repetidas.
2. Pergunta se o ranking deve ser em ordem **decrescente** (maior nota primeiro) ou **crescente**.
3. Exibe os dados **antes** da ordenação.
4. Ordena uma cópia dos dados com **Bubble Sort** e outra com **Quick Sort** (ambos recebem exatamente os mesmos dados).
5. Exibe os dados **depois** da ordenação em cada algoritmo.
6. Mostra um **comparativo** com o número de comparações e de trocas de cada algoritmo, além da maior e da menor nota.

## 4. Como executar

Requisito: compilador C (GCC).

```bash
# compilar
gcc ordenacao_notas.c -o ordenacao_notas

# executar (Linux/macOS)
./ordenacao_notas

# executar (Windows)
ordenacao_notas.exe
```

Ao executar, digite `1` (decrescente) ou `2` (crescente).

### Exemplo de saída (ordem decrescente)

```
COMPARATIVO ENTRE OS ALGORITMOS
----------------------------------
 Algoritmo    Comparacoes  Trocas
 Bubble Sort  65           32
 Quick Sort   36           19
----------------------------------

Maior nota: Felipe Costa (10.0)
Menor nota: Isabela Martins (3.0)
```

## 5. Os algoritmos

### Bubble Sort

Percorre o vetor comparando **pares de vizinhos**. Se o par está fora de ordem, troca os dois. A cada passada completa, o elemento mais extremo "flutua como uma bolha" até o final do vetor. Se uma passada termina sem nenhuma troca, o vetor já está ordenado e o algoritmo para.

- Simples de entender e implementar.
- Complexidade: **O(n²)** no caso médio e no pior caso; **O(n)** se o vetor já estiver ordenado (com a otimização).
- Indicado para listas pequenas ou para fins didáticos.

### Quick Sort

Usa a estratégia **dividir para conquistar**:

1. Escolhe um **pivô** (neste projeto, o último elemento do trecho).
2. **Particiona** o vetor: os elementos que devem vir antes do pivô vão para a esquerda e os demais para a direita; o pivô fica na posição definitiva.
3. Repete o processo **recursivamente** nos dois lados.

- Complexidade: **O(n log n)** no caso médio; **O(n²)** no pior caso (pivô sempre o menor ou maior valor).
- Muito mais eficiente que o Bubble Sort em listas grandes.

### Comparativo

| Característica | Bubble Sort | Quick Sort |
|---|---|---|
| Estratégia | Troca de vizinhos | Dividir para conquistar (recursivo) |
| Caso médio | O(n²) | O(n log n) |
| Pior caso | O(n²) | O(n²) |
| Complexidade do código | Baixa | Média |
| Melhor uso | Listas pequenas / ensino | Listas grandes |

## 6. Estrutura do projeto

```
.
├── ordenacao_notas.c   # código-fonte comentado
└── README.md           # este arquivo
```

## 7. Tecnologias

- Linguagem C (padrão C99)
- GCC
- Git e GitHub
