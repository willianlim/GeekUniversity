#include <stdio.h>

int main()
{
    float m;
    float j;

    printf("Digite um valor de comprimento em metros: ");
    scanf("%f", &m);

    j = m / 0.91;

    printf("Esse mesmo valor em jardas: %.3f\n", j);

    return (0);
}
