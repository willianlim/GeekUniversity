#include <stdio.h>

int main()
{
    float p;
    float c;

    printf("Digite um comprimento em polegadas: ");
    scanf("%f", &p);

    c = p * 2.54;

    printf("Esse mesmo comprimento em centímetros: %.3f\n", c);

    return (0);
}
