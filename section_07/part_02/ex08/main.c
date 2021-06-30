#include <stdio.h>

int main()
{
    float vet[3][3];
    int a = 1;
    float soma = 0;

    printf("Preencha com 9 elemento númericos a matriz vet[3][3].\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("Digite o %d° elemento: ", a);
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

    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i < j)
                soma = soma + vet[i][j];
        }
    }

    printf("A soma dos elementos acima da diagonal principal: %.2f.\n", soma);

    return (0);
}
