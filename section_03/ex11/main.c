#include <stdio.h>

int main()
{
    float m;
    float k;

    printf("Digite uma velocidade em m/s: ");
    scanf("%f", &m);

    k = m * 3.6;

    printf("Essa mesma velocidade em km/h: %.3f\n", k);

    return (0);
}
