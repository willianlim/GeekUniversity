#include <stdio.h>

int main()
{
    float m;
    float a;

    printf("Digite um valor de área em metros quadrados: ");
    scanf("%f", &m);

    a = m * 0.000247;

    printf("Esse mesmo valor em acres: %.3f\n", a);

    return (0);
}
