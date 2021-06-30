#include <stdio.h>

int main()
{
    float vet[4][4];
    float maior;
    int a = 0;

    printf("Digite 14 númeror.\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o %d° valor: ", a + 1);
            scanf("%f", &vet[i][j]);
            a++;
        }
    }

    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%.2f ", vet[i][j]);
            printf("\n");
    }

    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (i == 0 && j == 0)
                maior = vet[i][j];
            else if (vet[i][j] > maior)
                maior = vet[i][j];
        }
    }

    printf("\n");

    printf("O mair elemento: %.2f.\n", maior);

    return (0);
}
