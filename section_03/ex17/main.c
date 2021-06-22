#include <stdio.h>

int main()
{
    float c;
    float p;

    printf("Digite um valor de comprimento em centímetros: ");
    scanf("%f", &c);

    p = c / 2.54;

    printf("Esse mesmo comprimento em polegadas: %.3f\n", p);

    return (0);
}
