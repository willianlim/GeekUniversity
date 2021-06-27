#include <stdio.h>

int main()
{
    int i;
    int n;

    i = 0;

    printf("Digite um número impar: ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        for (i = 0; i <= n; i++)
        {
            if (i % 2 != 0)
                printf("%d.\n", i);
        }
    }
    else
        printf("Número inválido.\n");

    return (0);
}
