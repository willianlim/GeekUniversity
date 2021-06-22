#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    float y;
    float z;
    float s;

    printf("Digite três valores númericos.\n");
    printf("Primeiro: ");
    scanf("%f", &x);
    printf("Segundo: ");
    scanf("%f", &y);
    printf("Terceiro: ");
    scanf("%f", &z);

    s = pow(x, 2) + pow(y, 2) + pow(z, 2);

    printf("A soma dos quadrados dos três valores lidos: %.3f\n", s);
}
