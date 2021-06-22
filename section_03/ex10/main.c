#include <stdio.h>

int main()
{
    float k;
    float m;

    printf("Digite uma velocidade em km/h: ");
    scanf("%f", &k);

    m = k / 3.6;

    printf("Essa mesma velocidade em metros por segundos seria: %.3f\n", m);

    return (0);
}
