#include <stdio.h>

int main()
{
    float c;
    float f;

    printf("Digite uma temperatura em graus Fahrenheit: ");
    scanf("%f", &f);

    c = 5.0 * (f - 32.0) / 9.0;

    printf("Essa temperatura convertida em graus Celsius: %f", c);

    return (0);
}
