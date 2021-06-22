#include <stdio.h>

int main()
{
    float l;
    float m;

    printf("Digite um volume em litros: ");
    scanf("%f", &l);

    m = l / 1000;

    printf("Esse mesmo volume em metros cúbicos: %.3f\n", m);

    return (0);
}
