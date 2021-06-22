#include <stdio.h>

int main()
{
    float m;
    float h;

    printf("Digite um valor em metros quadrados: ");
    scanf("%f", &m);

    h = m * 0.0001;

    printf("Esse mesmo valor em hectares: %.3f\n", h);

    return (0);
}
