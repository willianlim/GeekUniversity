#include <stdio.h>

int main()
{
    int i;
    int count;
    int soma;
    int n;

    i = 0;
    count = 0;
    soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);

    if (n != 1000)
    {
        while (n != 1000)
        {
            printf("Digite um número inteiro: ");
            scanf("%d", &n);
            if (n % 2 == 0)
                i++;
            else
                count++;
        }
    }
    else
        return (0);

    soma = i + count;

    printf("A quantida de números lidos é %d e de números pares %d.\n", soma, i);

    return (0);
}
