#include <stdio.h>

int main()
{
    float y;
    float r;

    printf("Digite um número do tipo real: ");
    scanf("%f", &y);

    r = y / 5;

    printf("A quinta parte desse número é aproximadamente: %.2f\n", r);

    return (0);
}
