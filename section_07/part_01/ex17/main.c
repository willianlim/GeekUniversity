#include <stdio.h>

int main()
{
    float vet[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d° valor: ", i + 1);
        scanf("%f", &vet[i]);
    }

    for (int j = 0; j < 10; j++)
    {
        if (vet[j] < 0)
            vet[j] = 0;
    }

    for (int k = 0; k < 10; k++)
        printf("%f ", vet[k]);

    printf("\n");

    return (0);
}
