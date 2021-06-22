#include <stdio.h>

int main()
{
    float k;
    float c;

    printf("Digite uma temperatura em Kelvin: ");
    scanf("%f", &k);

    c = k - 273.15;

    printf("Essa temperatura convertida em graus Celsius: %f\n", c);

    return (0);
}
