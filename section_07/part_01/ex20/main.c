#include <stdio.h>

int main()
{
    int i;
    int numero;
    int l;
    int m;
    int vet[10];
    int vet2[10];
    int a;

    a = 0;
    i = 0;
    l = 0;
    m = 0;

    printf("Digite 10 número do tipo inteiro entre 0 e 50.\n");

    while (i < 10)
    {
        printf("Digite o %d° número: ", i + 1);
        scanf("%d", &numero);
        if (numero >= 0 && numero < 51)
        {
            vet[i] = numero;
            i++;
        }
    }

    for (int k = 0; k < 10; k++)
    {
        if (vet[k] % 2 != 0)
        {
            vet2[a] = vet[k];
            a++;
        }
    }

    while (l < 10)
    {
        printf("%d %d\n", vet[l], vet[l + 1]);
        l = l + 2;
    }

    while (m <= a)
    {
        printf("%d %d\n", vet2[m], vet2[m + 1]);
        m = m + 2;
    }

    return (0);
}
