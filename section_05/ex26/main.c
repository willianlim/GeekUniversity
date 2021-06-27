#include <stdio.h>

int main()
{
    int numero;
    int i;

    printf("Digite um número: ");
    scanf("%d", &numero);

    for (i = numero;; i++)
    {
        if (i % 11 == 0 || i % 13 == 0 || i % 17 == 0)
        {
            printf("%d\n", i);
            return (0);
        }
    }

    return (0);
}
