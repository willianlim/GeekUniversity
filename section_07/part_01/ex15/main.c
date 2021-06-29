#include <stdio.h>

int main()
{
    int vet[20];
    int flag;

    for (int i = 0; i < 20; i++)
    {
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 20; i++)
    {
        flag = 0;
        for (int j = 0; j < i; j++)
        {
            if (vet[i] == vet[j])
                flag = 1;
        }
        if (!flag)
            printf("%d ", vet[i]);
    }
    printf("\n");

    return (0);
}
