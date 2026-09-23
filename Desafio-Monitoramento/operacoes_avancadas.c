#include <stdio.h>
#include <math.h>
#include "operacoes.h"

float potencia (float base, float expoente)
{
    return pow(base, expoente);
}
float raiz_quadrada (float a)
{
    return sqrt(a);
}
float valor_absoluto (float a)
{
    return fabs(a);
}
float quadrado (float a)
{
    return pow(a, 2);
}
float cubo (float a)
{
    return pow(a, 3);
}
float inverso (float a)
{
    if (a==0) //Tratamento de erro.
    {
        printf("Erro! Divisão por zero!\n");
        return 0;
    }
    else
    {
        return 1.0/a;
    }
}
float media_dois (float a, float b)
{
    return (a+b)/2.0;
}