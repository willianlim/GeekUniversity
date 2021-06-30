#include <stdio.h>

int main()
{
    int vet[5][5];

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i == j)
                vet[i][j] = 1;
            else
                vet[i][j] = 0;
                printf("%d ", vet[i][j]);
        }
        printf("\n");
    }

    return (0);
}
