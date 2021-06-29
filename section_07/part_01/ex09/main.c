#include <stdio.h>

int main()
{
    int i;
    int vet[6];
    int valor;

    i = 0;

    printf("Digite 6 valores do tipo inteiro e par.\n");

    while (i < 6)
    {
        printf("Digite o %d° valor: ", i+1);
        scanf("%d", &valor);

        if (valor % 2 == 0)
        {
            vet[i] = valor;
            i++;
        }
    }

    for (int j = 5; j >= 0; j--)
        printf("%d\t", vet[j]);

    printf("\n");

    return (0);
}
