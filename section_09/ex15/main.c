#include <stdio.h>

void    triagulo(float x, float y, float z)
{
    if (x < y + z && y < x + z && z < x + y)
    {
        if (x == y == z)
            printf("Esses valores forma um triângulo equilátero.\n");
        else if (x == y || x == z || y == z)
            printf("Esses valores forma um triângulo isósceles.\n");
        else if (x != y && x != z && y != z)
            printf("Esses valores forma um triângulo escaleno.\n");
    }
    else 
        printf("Esses valores não formam um triângulo.\n");
}

int main()
{
    float n1;
    float n2;
    float n3;

    printf("Digite as medidas dos lados de um triângulo.\n");
    printf("Primeiro: ");
    scanf("%f", &n1);
    printf("Segundo: ");
    scanf("%f", &n2);
    printf("Terceiro: ");
    scanf("%f", &n3);

    if (n1 != 0 && n2 != 0 && n3 != 0)
        triagulo(n1, n2, n3);
    else
        printf("Medida inválida.\n");

    return (0);
}
