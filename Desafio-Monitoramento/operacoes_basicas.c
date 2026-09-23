#include <stdio.h>
#include "operacoes.h"

float soma(float a, float b)
{
    return a+b;
}
float subtracao(float a, float b)
{
    return a-b;
}
float multiplicacao(float a, float b)
{
    return a*b;
}
float divisao(float a, float b)
{
    if (b==0.0) //Tratamento de erro.
    {
        printf("Erro! Divisão por zero!\n");
        return 0;
    }
    else
    {
    return a/b;
    }
}
int resto_divisao(int a, int b)
{
    return a%b;
}
float porcentagem(float total, float percentual)
{
    return(total*percentual)/100.0;
}