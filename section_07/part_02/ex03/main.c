#include <stdio.h>

int main()
{
    int vet[4][4];

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            vet[i][j] = i * j;
            printf("%d ", vet[i][j]);
        }
        printf("\n");
    }

    return (0);
}
