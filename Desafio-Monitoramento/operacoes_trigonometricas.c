#include <stdio.h>
#include <math.h>
#include "operacoes.h"

float seno (float angulo_graus)
{
    float angulo_radianos;
    angulo_radianos = angulo_graus * ( 3.14159265 / 180.0);
    return sin(angulo_radianos);
}
float cosseno (float angulo_graus)
{
    float angulo_radianos;
    angulo_radianos = angulo_graus * ( 3.14159265 / 180.0);
    return cos(angulo_radianos);
}
float tangente (float angulo_graus)
{
    float angulo_radianos;
    angulo_radianos = angulo_graus * ( 3.14159265 / 180.0);
    return tan(angulo_radianos);
}
float logaritmo_base10 (float a)
{
    if (a <= 0)
    {
        printf("Erro! Log de zero ou negativo.");
        return 0;
    }
    else
    {
    return log10(a);
    }
}
float logaritmo_natural (float a)
{
    if (a <= 0)
    {
        printf("Erro! Log de zero ou negativo.");
        return 0;
    }
    else
    {
    return log(a);
    }
}
float arredondar_cima (float a)
{
    return ceil(a);
}
float arredondar_baixo (float a)
{
    return floor(a);
}