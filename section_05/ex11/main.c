#include <stdio.h>

int main()
{
    int i;
    int n;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
    {
        printf("%d.\n", i);
    }

    return (0);
}
