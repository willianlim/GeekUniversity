#include <stdio.h>

int main()
{
    float j;
    float m;

    printf("Digite um valor de comprimento em jardas: ");
    scanf("%f", &j);

    m = 0.91 * j;

    printf("Esse mesmo valor em metros: %.3f\n", m);

    return (0);
}
