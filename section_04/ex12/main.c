#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    float resultado;

    resultado = 0;
    printf("Digite um número do tipo inteiro: ");
    scanf("%f", &x);

    if (x < 0)
    {
        printf("Número inválido.\n");
    }
    else
    {
        resultado = log(x);
        printf("O log natural de %f = %f\n", x, resultado);
    }

    return (0);
}
