#include <stdio.h>

int main()
{
    float k;
    float m;

    printf("Digite uma distância em quilômetros: ");
    scanf("%f", &k);

    m = k / 1.61;

    printf("Essa mesma distância em milhas: %f\n", m);

    return (0);
}
