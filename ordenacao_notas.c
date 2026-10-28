#include <stdio.h>
#include <string.h>

#define TOTAL 12          


typedef struct {
    char  nome[30];
    float nota;
} Aluno;


static long comparacoes = 0;
static long trocas      = 0;


void trocar(Aluno *a, Aluno *b) {
    Aluno temp = *a;
    *a = *b;
    *b = temp;
    trocas++;
}

int vemAntes(Aluno x, Aluno y, int decrescente) {
    if (decrescente)
        return x.nota > y.nota;
    return x.nota < y.nota;
}


void imprimir(const char *titulo, Aluno v[], int n) {
    printf("\n%s\n", titulo);
    printf("----------------------------------\n");
    printf(" %-3s %-20s %s\n", "#", "Aluno", "Nota");
    printf("----------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf(" %-3d %-20s %.1f\n", i + 1, v[i].nome, v[i].nota);
    }
    printf("----------------------------------\n");
}

void bubbleSort(Aluno v[], int n, int decrescente) {
    for (int i = 0; i < n - 1; i++) {
        int houveTroca = 0;
  
        for (int j = 0; j < n - 1 - i; j++) {
            comparacoes++;
            if (vemAntes(v[j + 1], v[j], decrescente)) {
                trocar(&v[j], &v[j + 1]);
                houveTroca = 1;
            }
        }

        if (!houveTroca)   
            break;
    }
}

int particionar(Aluno v[], int inicio, int fim, int decrescente) {
    Aluno pivo = v[fim];   
    int i = inicio - 1;    

    for (int j = inicio; j < fim; j++) {
        comparacoes++;
        if (vemAntes(v[j], pivo, decrescente)) {
            i++;
            trocar(&v[i], &v[j]);
        }
    }

   
    trocar(&v[i + 1], &v[fim]);
    return i + 1;
}

void quickSort(Aluno v[], int inicio, int fim, int decrescente) {
    if (inicio < fim) {    
        int posPivo = particionar(v, inicio, fim, decrescente);

        quickSort(v, inicio, posPivo - 1, decrescente);  
        quickSort(v, posPivo + 1, fim, decrescente);     
    }
}


int main(void) {
   
    Aluno turma[TOTAL] = {
        {"Ana Souza",       8.5f},
        {"Bruno Lima",      6.0f},
        {"Carla Mendes",    9.5f},
        {"Daniel Rocha",    4.5f},
        {"Eduarda Alves",   7.5f},
        {"Felipe Costa",    10.0f},
        {"Gabriela Nunes",  5.5f},
        {"Henrique Dias",   7.5f},
        {"Isabela Martins", 3.0f},
        {"Joao Pereira",    8.0f},
        {"Karina Teixeira", 6.5f},
        {"Lucas Ribeiro",   9.0f}
    };

    int opcao;
    do {
        printf("=== RANKING DE NOTAS DA TURMA ===\n");
        printf("1 - Ordem decrescente (maior nota primeiro)\n");
        printf("2 - Ordem crescente   (menor nota primeiro)\n");
        printf("Escolha: ");
        if (scanf("%d", &opcao) != 1) {      
            int c;
            while ((c = getchar()) != '\n' && c != EOF) { }
            opcao = 0;
        }
    } while (opcao != 1 && opcao != 2);

    int decrescente = (opcao == 1);

    Aluno copiaBubble[TOTAL];
    Aluno copiaQuick[TOTAL];
    memcpy(copiaBubble, turma, sizeof(turma));
    memcpy(copiaQuick,  turma, sizeof(turma));

    imprimir("DADOS ORIGINAIS (ANTES DA ORDENACAO)", turma, TOTAL);

    
    comparacoes = 0;
    trocas = 0;
    bubbleSort(copiaBubble, TOTAL, decrescente);
    imprimir("DEPOIS DA ORDENACAO - BUBBLE SORT", copiaBubble, TOTAL);
    long compBubble  = comparacoes;
    long trocasBubble = trocas;

    
    comparacoes = 0;
    trocas = 0;
    quickSort(copiaQuick, 0, TOTAL - 1, decrescente);
    imprimir("DEPOIS DA ORDENACAO - QUICK SORT", copiaQuick, TOTAL);
    long compQuick  = comparacoes;
    long trocasQuick = trocas;

    
    printf("\nCOMPARATIVO ENTRE OS ALGORITMOS\n");
    printf("----------------------------------\n");
    printf(" %-12s %-12s %s\n", "Algoritmo", "Comparacoes", "Trocas");
    printf(" %-12s %-12ld %ld\n", "Bubble Sort", compBubble, trocasBubble);
    printf(" %-12s %-12ld %ld\n", "Quick Sort",  compQuick,  trocasQuick);
    printf("----------------------------------\n");

   
    if (decrescente) {
        printf("\nMaior nota: %s (%.1f)\n", copiaQuick[0].nome, copiaQuick[0].nota);
        printf("Menor nota: %s (%.1f)\n", copiaQuick[TOTAL - 1].nome, copiaQuick[TOTAL - 1].nota);
    } else {
        printf("\nMenor nota: %s (%.1f)\n", copiaQuick[0].nome, copiaQuick[0].nota);
        printf("Maior nota: %s (%.1f)\n", copiaQuick[TOTAL - 1].nome, copiaQuick[TOTAL - 1].nota);
    }

    return 0;
}