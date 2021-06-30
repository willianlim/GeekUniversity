#include <stdio.h>

int main()
{
    float vet1[4][4];
    float vet2[4][4];
    float vet3[4][4];
    int a = 1;
    int b = 1;

    printf("Preencha os elementos da matriz vet1[4][4].\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o %d° valor: ", a);
            scanf("%f", &vet1[i][j]);
            a++;
        }
    }

    printf("\n");
    printf("Preencha os elementos da matriz vet2[4][4].\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("Digite o %d° valor: ", b);
            scanf("%f", &vet2[i][j]);
            b++;
        }
    }

    printf("\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            if (vet1[i][j] >= vet2[i][j])
                vet3[i][j] = vet1[i][j];
            else 
                vet3[i][j] = vet2[i][j];
        }
    }

    printf("Os elementos da matriz vet1[4][4].\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%f ", vet1[i][j]);
            printf("\n");
    }

    printf("\n");
    printf("Os elementos da matriz vet2[4][4].\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%f ", vet2[i][j]);
            printf("\n");
    }

    printf("\n");

    printf("Os elementos da matriz vet3[4][4].\n");

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 4; j++)
            printf("%f ", vet3[i][j]);
            printf("\n");
    }

    return (0);
}
