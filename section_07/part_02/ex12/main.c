#include <stdio.h>

int main()
{
    float vet[3][3];
    int a = 1;

    printf("Preecha com 9 números a matriz vet[3][3].\n");

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
    printf("A matriz vet[3][3] transposta.\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%.2f\t", vet[j][i]);
            printf("\n");
    }

    return (0);
}
