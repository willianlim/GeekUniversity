#include <stdio.h>

int main()
{
    float l1;
    float l2;
    float l3;

    printf("Digite o comprimento dos lados de um triângulo.\n");
    printf("Primeiro: ");
    scanf("%f", &l1);
    printf("Segundo: ");
    scanf("%f", &l2);
    printf("Terceiro: ");
    scanf("%f", &l3);

    if (l3 > (l1 + l2))
    {
        printf("Não forma um triângulo.\n");
        return (0);
    }
    else if (l2 > (l1 + l3))
    {
        printf("Não forma um triângulo.\n");
        return (0);
    }
    else if (l1 > (l2 + l3))
    {
        printf("Não forma um triângulo.\n");
        return (0);
    }

    if (l1 == l2 && l2 == l3)
        printf("Triâgulo equilátero.\n");
    else if (l1 == l2 || l1 == l3 || l2 == l3)
        printf("Triângulo isósceles.\n");
    else if (l1 != l2 && l1 != l3 && l2 != l3)
        printf("Triângulo escaleno.\n");

    return (0);
}
