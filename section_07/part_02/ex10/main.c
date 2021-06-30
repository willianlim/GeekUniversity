#include <stdio.h>

int main()
{
    float vet[3][3];
    int a = 1;
    float soma = 0;

    printf("Preecha com 9 números a matriz vet[3][3].\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o %d° valor: ", a);
            scanf("%f", &vet[i][j]);
            a++;
        }
    }

    printf("\n");
    printf("A matriz vet[3][3].\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%.2f\t", vet[i][j]);
            printf("\n");
    }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == j)
                soma = soma + vet[i][j];
        }
    }

    printf("\n");
    printf("A soma dos elementos da diagonal principal: %.2f.\n", soma);

    return (0);
}
