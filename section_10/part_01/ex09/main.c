#include <stdio.h>

int main()
{
    float vet[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
            printf("%p\t", &vet[i][j]);
        printf("\n");
    }

    return (0);
}
