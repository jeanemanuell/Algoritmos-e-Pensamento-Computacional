#include <stdio.h>
#include <locale.h> //Inclui a função setlocale para definir caracteres.
#include "operacoes.h" //Inclui as funções criadas anteriormente em outra linha de código.
#include <stdlib.h>  //Inclui funções para pausar o código e limpar o terminal.

int main()
{
    setlocale(LC_ALL,".UTF8"); //Configura para que o compilador aceite acentos e "ç".
    setlocale(LC_NUMERIC, "C"); //Força os números a aceitarem tanto "." como "," nas operações.
    float numero1, numero2;
    int executando, operador;
    executando = 1; //Declarando variáveis e definindo que executando é = 1 para manter o while ativo.

    printf("======================================================\n");
    printf("CALCULADORA EM C\n");
    printf("======================================================\n");
    printf("DIGITE O VALOR DO PRIMEIRO NÚMERO: ");
    scanf("%f", &numero1);
    while (executando == 1) //Define que o menu reapareça após cada operação.
    {
        printf("======================================================\n");
        printf("  SELECIONE UMA OPERAÇÃO (DIGITE O NÚMERO)\n");
        printf("======================================================\n");
        printf("[ OPERAÇÕES BÁSICAS ]\n");
        printf("  1.SOMA  2.SUBTRAÇÃO  3.MULTIPLICAÇÃO\n");
        printf("  4.DIVISÃO  5.RESTO/DIVISÃO \n\n");
        printf("[ OPERAÇÕES AVANÇADAS ]\n");
        printf("  6.PORCENTAGEM  7.POTENCIAÇÃO  8.RAÍZ QUADRADA\n");
        printf("  9.VALOR ABSOLUTO  10.QUADRADO  11.CUBO\n");
        printf("  12.INVERSO  13.MÉDIA DOIS NÚMEROS\n\n");
        printf("[ OPERAÇÕES TRIGONOMÉTRICAS ]\n");
        printf("  14.SENO  15.COSSENO  16.TANGENTE\n");
        printf("  17.LOG(10)  18.LOG  19.ARREDONDAR/CIMA  20.ARREDONDAR/BAIXO.\n\n");
        printf("[ 21.ENCERRAR. ]\n");
        printf("  VALOR ATUAL: %g\n", numero1);
        scanf("%d", &operador);
        switch (operador)
        {
        case 1:
            printf("DIGITE O VALOR DO SEGUNDO NÚMERO: ");
            scanf("%f", &numero2);
            system("cls");
            printf("%g + %g = %g \n", numero1, numero2, soma(numero1,numero2));
            numero1 = soma(numero1,numero2);
            break;
        case 2:
            printf("DIGITE O VALOR DO SEGUNDO NÚMERO: ");
            scanf("%f", &numero2);
            system("cls");
            printf("%g - %g = %g \n", numero1, numero2, subtracao(numero1,numero2));
            numero1 = subtracao(numero1,numero2);
            break;
        case 3:
            printf("DIGITE O VALOR DO SEGUNDO NÚMERO: ");
            scanf("%f", &numero2);
            system("cls");
            printf("%g x %g = %g \n", numero1, numero2, multiplicacao(numero1,numero2));
            numero1 = multiplicacao(numero1,numero2);
            break;
        case 4:
            printf("DIGITE O VALOR DO SEGUNDO NÚMERO: ");
            scanf("%f", &numero2);
            system("cls");
            printf("%g / %g = %g \n", numero1, numero2, divisao(numero1,numero2));
            numero1 = divisao(numero1,numero2);
            break;
        case 5:
            printf("DIGITE O VALOR DO SEGUNDO NÚMERO: ");
            scanf("%f", &numero2);
            system("cls");
            printf("%g %% %g = %d \n", numero1, numero2, resto_divisao((int)numero1,(int)numero2));
            numero1 = resto_divisao((int)numero1,(int)numero2);
            break;
        case 6:
            printf("DIGITE O PERCENTUAL DO SEGUNDO NÚMERO: ");
            scanf("%f", &numero2);
            system("cls");
            printf("%g%% de %g = %g \n", numero2, numero1, porcentagem(numero1,numero2));
            numero1 = porcentagem(numero1,numero2);
            break;
        case 7:
            printf("DIGITE O VALOR DO NÚMERO EXPOENTE: ");
            scanf("%f", &numero2);
            system("cls");
            printf("%g elevado á %g = %g \n", numero1, numero2, potencia(numero1,numero2));
            numero1 = potencia(numero1,numero2);
            break;
        case 8:
            system("cls");
            printf("A raíz quadrada de %g é = %g \n", numero1, raiz_quadrada(numero1));
            numero1 = raiz_quadrada(numero1);
            break;
        case 9:
            system("cls");
            printf("O valor absoluto de %g é = %g \n", numero1, valor_absoluto(numero1));
            numero1 = valor_absoluto(numero1);
            break;
        case 10:
            system("cls");
            printf("%g ao quadrado é = %g \n", numero1, quadrado(numero1));
            numero1 = quadrado(numero1);
            break;
        case 11:
            system("cls");
            printf("%g ao cubo é = %g \n", numero1, cubo(numero1));
            numero1 = cubo(numero1);
            break;
        case 12:
            system("cls");
            printf("O inverso de %g é = %g \n", numero1, inverso(numero1));
            numero1 = inverso(numero1);
            break;
        case 13:
            printf("DIGITE O VALOR DO SEGUNDO NÚMERO: ");
            scanf("%f", &numero2);
            system("cls");
            printf("A média de %g e %g é = %g \n", numero1, numero2, media_dois(numero1,numero2));
            numero1 = media_dois(numero1,numero2);
            break;
        case 14:
            system("cls");
            printf("O Seno de %g° é = %g° \n", numero1, seno(numero1));
            numero1 = seno(numero1);
            break;
        case 15:
            system("cls");
            printf("O Cosseno de %g° é = %g° \n", numero1, cosseno(numero1));
            numero1 = cosseno(numero1);
            break;
        case 16:
            system("cls");
            printf("O Tangente de %g° é = %g° \n", numero1, tangente(numero1));
            numero1 = tangente(numero1);
            break;
        case 17:
            system("cls");
            printf("O log10 de %g é %g \n", numero1, logaritmo_base10(numero1));
            numero1 = logaritmo_base10(numero1);
            break;
        case 18:
            system("cls");
            printf("O Log Natural de %g é = %g \n", numero1, logaritmo_natural(numero1));
            numero1 = logaritmo_natural(numero1);
            break;
        case 19:
            system("cls");
            printf("%g arredondado para cima é = %g \n", numero1, arredondar_cima(numero1));
            numero1 = arredondar_cima(numero1);
            break;
        case 20:
            system("cls");
            printf("%g arredondado para baixo é = %g \n", numero1, arredondar_baixo(numero1));
            numero1 = arredondar_baixo(numero1);
            break;
        case 21:
            printf("PROGRAMA ENCERRADO\n");
            return 0; //Funciona como uma parada obrigatória para o algoritimo.
        default:
            printf("DIGITE UM NÚMERO VÁLIDO\n"); //Tratamento de erro.
            break;
        }
        printf("\n");
        system("pause"); //Pausa o laço while forçando o usuário a interagir para prosseguir com o código.
        system("cls"); //Limpa o terminal.
    }
    
}