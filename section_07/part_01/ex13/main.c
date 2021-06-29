#include <stdio.h>

int main()
{
    float vet[5];
    float maior;
    float menor;
    float valor;
    int position_maior;
    int position_menor;

    printf("Digite 5 valores númericos.\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d°: ", i + 1);
        scanf("%f", &valor);
        vet[i] = valor;
    }

    for (int j = 0; j < 5; j++)
    {
        if (j == 0)
            maior = menor = vet[j];
        else if (vet[j] > maior)
        {
            maior = vet[j];
            position_maior = j;
        }
        else if (vet[j] < menor)
        {
            menor = vet[j];
            position_menor = j;
        }
    }

    printf("\n");

    printf("As posições.\n");
    printf("Do maior: %d.\n", position_maior);
    printf("Do menor: %d.\n", position_menor);

    return (0);
}
