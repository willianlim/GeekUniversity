#include <stdio.h>

float   maior_numero(float a, float b)
{
    if (a > b)
        return (a);
    else if (b > a)
        return (b);
}

int main()
{
    float n1;
    float n2;

    printf("Digite dois números.\n");
    printf("Primeiro: ");
    scanf("%f", &n1);
    printf("Segundo: ");
    scanf("%f", &n2);

    printf("O maior número digitado: %f\n", maior_numero(n1, n2));

    return (0);
}
