#include <stdio.h>

int main() {
    float limite, temperatura;
    float soma = 0, maior = 0, menor = 0;
    int totalLeituras = 0;
    int leiturasAltas = 0;
    int consecutivas = 0;
    int primeiraLeitura = 1;
    char continuar;

    // Validação e definição do limite de temperatura usando do...while
    do {
        printf("Digite o limite maximo de temperatura permitido (> 0): ");
        if (scanf("%f", &limite) != 1 || limite <= 0) {
            printf("[ERRO] Limite invalido. Digite um valor numerico maior que zero.\n\n");
            // Limpa o buffer do teclado para evitar loop infinito com caracteres
            while (getchar() != '\n');
        } else {
            break;
        }
    } while (1);

    printf("\n========================================\n");
    printf("   SISTEMA DE MONITORAMENTO DE TEMPERATURA\n");
    printf("   Limite configurado: %.2f graus\n", limite);
    printf("========================================\n\n");

    // Laço principal de leituras usando do...while
    do {
        printf("Digite a temperatura da leitura %d: ", totalLeituras + 1);
        
        // Validação de entrada para evitar valores abaixo do zero absoluto ou erros de tipo
        if (scanf("%f", &temperatura) != 1 || temperatura < -273.15) {
            printf("[ERRO] Temperatura invalida ou abaixo do zero absoluto (-273.15). Tente novamente.\n\n");
            while (getchar() != '\n');
            continue; // Pula esta iteracao sem contar a leitura incorreta
        }

        // Atualiza estatísticas de maior, menor e soma
        if (primeiraLeitura) {
            maior = temperatura;
            menor = temperatura;
            primeiraLeitura = 0;
        } else {
            if (temperatura > maior) maior = temperatura;
            if (temperatura < menor) menor = temperatura;
        }

        soma += temperatura;
        totalLeituras++;

        // Verifica se a temperatura ultrapassou o limite
        if (temperatura > limite) {
            consecutivas++;
            leiturasAltas++;
            printf("[ALERTA] Temperatura acima do limite! (Consecutivas: %d/3)\n", consecutivas);
        } else {
            consecutivas = 0; // Reinicia o contador se a temperatura normalizar
        }

        // Condição de encerramento automático: 3 temperaturas consecutivas acima do limite
        if (consecutivas >= 3) {
            printf("\n[CRITICO] 3 temperaturas consecutivas acima do limite detectadas!\n");
            printf("O monitoramento foi encerrado automaticamente por seguranca.\n");
            break;
        }

        // Pergunta se deseja realizar uma nova leitura ou encerrar manualmente
        printf("Deseja inserir outra leitura? (s/n): ");
        scanf(" %c", &continuar);
        printf("\n");

        if (continuar == 'n' || continuar == 'N') {
            break;
        }

    } while (1);

    // Relatório Final Estatístico
    printf("\n========================================\n");
    printf("            RELATORIO FINAL             \n");
    printf("========================================\n");
    if (totalLeituras > 0) {
        float media = soma / totalLeituras;
        float percentualAltas = ((float)leiturasAltas / totalLeituras) * 100;

        printf("Total de leituras validas: %d\n", totalLeituras);
        printf("Temperatura media:         %.2f\n", media);
        printf("Maior temperatura:         %.2f\n", maior);
        printf("Menor temperatura:         %.2f\n", menor);
        printf("Leituras acima do limite:  %d\n", leiturasAltas);
        printf("Percentual acima do limite: %.2f%%\n", percentualAltas);
    } else {
        printf("Nenhuma leitura valida foi registrada.\n");
    }
    printf("========================================\n");

    return 0;
}