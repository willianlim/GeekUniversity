#include <stdio.h>

int main()
{
    int a = 0, flag;
    int vetor[10], iguais[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Entre com o elemento %d°: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            flag = 0;
            if (vetor[i] == vetor[j] && i != j)
            {
                for (int w = 0; w < 10; w++)
                {
                    if (iguais[w] == vetor[j])
                        flag = 1;
                }
                if (flag == 0)
                {
                    iguais[a] = vetor[i];
                    a++;
                }
            }
        }
    }

    printf("\n\nSaída --> ");
    for (int i = 0; i < a; i++)
        printf("%d ", iguais[i]);

    printf("\n\n");
    
    return (0);
}
