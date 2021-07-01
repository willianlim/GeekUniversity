#include <stdio.h>

int soma(int x, int y)
{
    int soma = 0;

    if (x > y)
    {
        for (int i = (y + 1); i < x; i++)
            soma = soma + i;
    }
    else if (y > x)
    {
        for (int i = (x + 1); i < y; i++)
            soma = soma + i;
    }
    printf("A soma dos números entre eles: %d\n", soma);
}

int main()
{
    int n1;
    int n2;

    printf("Digite dois números inteiros positivos.\n");
    printf("Primeiro: ");
    scanf("%d", &n1);
    printf("Segundo: ");
    scanf("%d", &n2);

    if (n1 > 0 && n2 > 0)
        soma(n1, n2);
    else
        printf("número digitado inválido.\n");

    return (0);
}
