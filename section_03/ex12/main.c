#include <stdio.h>

int main()
{
    float m;
    float k;

    printf("Digite uma distância em milhas: ");
    scanf("%f", &m);

    k = 1.61 * m;

    printf("Essa mesma distância em quilômetros: %f\n", k);

    return (0);
}
