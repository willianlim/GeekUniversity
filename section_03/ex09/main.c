#include <stdio.h>

int main()
{
    float k;
    float c;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &c);

    k = c + 273.15;

    printf("Essa mesma temperatura em Kelvin: %.3f\n", k);

    return (0);
}
