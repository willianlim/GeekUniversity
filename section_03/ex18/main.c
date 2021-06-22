#include <stdio.h>

int main()
{
    float m;
    float l;

    printf("Digite um valor de volume em metros cúbicos: ");
    scanf("%f", &m);

    l = 1000 * m;

    printf("Esse mesmo valor em litros: %.3f\n", l);

    return (0);
}
