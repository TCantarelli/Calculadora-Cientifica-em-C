#include <stdio.h>
#include "grausParaRad.h"
void grausParaRad()
{
    int graus;
    printf("Digite o valor em graus:\n");
    scanf("%d", &graus);
    int cima, baixo =180;
    cima = graus;
    int n, d, a, b, resto, mdc;
    a = cima;
    b = baixo;
    while (b != 0) {
        resto = a % b;
        a = b;
        b = resto;
    }
    mdc = a;

    n = cima / mdc;
    d = baixo / mdc;
    if(n == 1)
    {
        printf("Resultado: pi/%d\n", d);
    }
    else
        printf("Resultado: %dpi/%d\n", n, d);
    return;
}
