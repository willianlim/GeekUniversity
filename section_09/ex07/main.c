#include <stdio.h>

int conversion(int w)
{
    float f;

    f = w * (9.0 / 5.0) + 32;

    return (f);
}

int main()
{
    float c;
    float result;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &c);

    result = conversion(c);

    printf("Essa mesma temperatura em Fahrenheit: %f\n", result);

    return (0);
}
