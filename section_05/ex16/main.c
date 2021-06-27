#include <stdio.h>

int main()
{
    int i;
    int n;

    i = 0;

    printf("Digite um número inteiro positivo impar: ");
    scanf("%d", &n);

    if (n % 2 != 0)
    {
        for (i = n; i > 0; i--)
        {
            if (i % 2 != 0)
                printf("%d.\n", i);
        }
    }
    else
        printf("Número inválido.\n");
    
    return (0);
}
