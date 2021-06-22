#include <stdio.h>

int main()
{
    float h;
    float m;

    printf("Digite um valor de área em hectares: ");
    scanf("%f", &h);

    m = h * 10000;

    printf("Esse mesmo valor em metros quadrados: %.3f\n", m);

    return (0);
}
