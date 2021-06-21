#include <stdio.h>

int main()
{
    float c;
    float f;

    printf("Digite uma temperatura em graus Celsius: ");
    scanf("%f", &c);

    f = c * (9.0/5.0) + 32.0;

    printf("Essa temperatura convertida em graus Fahrenheit é: %f\n", f);

    return (0);
}
