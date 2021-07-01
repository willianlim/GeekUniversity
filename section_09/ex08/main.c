#include <stdio.h>
#include <math.h>

void    hipotenusa(float x, float y)
{
    float result;

    result = sqrt(pow(x, 2) + pow(y, 2));

    printf("A hipotenus desse triângulo: %f\n", result);
}

int main()
{
    float a;
    float b;

    printf("Informe os catetos de um triângulo.\n");
    printf("Primeiro: ");
    scanf("%f", &a);
    printf("Segundo: ");
    scanf("%f", &b);

    hipotenusa(a, b);

    return (0);
}
