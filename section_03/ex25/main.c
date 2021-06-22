#include <stdio.h>

int main()
{
    float a;
    float m;

    printf("Digite um valor de área em acres: ");
    scanf("%f", &a);

    m = a * 4048.58;

    printf("Esse mesmo valor convertido em metros quadrados: %.3f\n", m);

    return (0);
}
