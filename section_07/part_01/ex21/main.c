#include <stdio.h>

int main()
{
    int A[10];
    int B[10];
    int C[10];

    printf("Preecha o vetor A[10].\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &A[i]);
    }

    printf("Preencha o vetor B[10].\n");

    for (int j = 0; j < 10; j++)
    {
        printf("Digite o %d° valor: ", j + 1);
        scanf("%d", &B[j]);
    }

    printf("Um vetor c[10] foi criado a partir da diferença dos elementos de A e B.\n");

    for (int k = 0; k < 10; k++)
    {
        C[k] = A[k] - B[k];
        printf("%d\t", C[k]);
    }

    printf("\n");

    return (0);
}
