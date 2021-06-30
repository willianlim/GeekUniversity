#include <stdio.h>

int main()
{
    float vet[5][5];
    float x;
    int a = 0;
    int flag = 0;

    printf("Digite 25 valores númericos.\n");

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("Digite o %d° valor: ", a + 1);
            scanf("%f", &vet[i][j]);
            a++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
            printf("%.2f ", vet[i][j]);
            printf("\n");
    }

    printf("Digite um número x que deseja pesquisar: ");
    scanf("%f", &x);

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (vet[i][j] == x)
            {
                printf("Valor foi encontrado na posição...\n");
                printf("Linha: %d\nColuna: %d\n\n", i, j);
                flag = 1;
            }
        }
    }
    
    if (flag == 0)
        printf("Não encontrado.\n");

    return (0);
}
