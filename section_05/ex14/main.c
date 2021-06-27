#include <stdio.h>

int main()
{
    int i;
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    if (n % 2 == 0)
    {
        for (i = n; i > 0; i--)
        {
            if (i % 2 == 0)
                printf("%d.\n", i);
        }
    }
    else
        printf("Número inválido.\n");

    return (0);
}
