#include <stdio.h>

int main()
{
    int a = 0;
    int count = 0;
    float vet[4][4];

    printf("Digite 16 valores númericos.\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o %d° valor: ", a + 1);
            scanf("%f", &vet[i][j]);
            a++;
        }
    }
    
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%f ", vet[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (vet[i][j] > 10)
                count++;
        }
    }

    printf("Existem %d valores maiores que 10.\n", count);
    
    return (0);
}
