#include <stdio.h>

int main()
{
    int i;
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
            printf("%d.\n", i);
    }

    return (0);
}
