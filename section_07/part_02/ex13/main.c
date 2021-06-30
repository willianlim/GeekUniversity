#include <stdio.h>

int main()
{
    float vet[4][4];
    int a = 1;
    int i = 0, j = 0, k = 0;

    printf("Preecha com 16 número de 1 a 20 a matriz vet[4][4].\n");

    while (i < 4)
    {
        j = 0;
        while (j < 4)
        {
            printf("Digite o %d° valor: ", a);
            scanf("%f", &vet[i][j]);
            if (vet[i][j] >= 1 && vet[i][j] <= 20)
            {
                j++;
                a++;
            }
        }
        i++;
    }

    printf("\n");
    printf("A matriz vet[4][4].\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%.2f\t", vet[i][j]);
            printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i < j)
                vet[i][j] = 0;
        }
    }

    printf("\n");
    printf("A matriz vet[4][4], com os elementos acima da diagonal principal igual a 0.\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%.2f\t", vet[i][j]);
            printf("\n");
    }

    return (0);
}
