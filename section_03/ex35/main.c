#include <stdio.h>
#include <math.h>

int main()
{
    float h;
    float a;
    float b;

    printf("Digite os valores dos catetos de um triângulo.\n");
    printf("Primeiro: ");
    scanf("%f", &a);
    printf("Segundo: ");
    scanf("%f", &b);

    h = sqrt(pow(a, 2) + pow(b, 2));

    printf("A hipotenusa desse triângulo: %f\n", h);

    return (0);
}
