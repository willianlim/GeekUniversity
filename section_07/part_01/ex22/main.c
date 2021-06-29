#include <stdio.h>

int main()
{
    int vet1[10];
    int vet2[10];
    int vet3[20];
    int a;
    int b;
    
    b = 0;
    a = 0;

    printf("Preencha os valores do vet1[10].\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d° valor: ", i + 1);
        scanf("%d", &vet1[i]);
    }

    printf("\n");

    printf("Preencha os valores do vet2[10].\n");

    for (int j = 0; j < 10; j++)
    {
        printf("Digite o %d° valor: ", j + 1);
        scanf("%d", &vet2[j]);
    }

    printf("O vetor formado apartir dos vetores anteriores.\n");

    for (int k = 0; k < 20; k++)
    {
        if (k % 2 == 0)
        {
            vet3[k] = vet1[a];
            a++;
        }
        else if (k % 2 != 0)
        {
            vet3[k] = vet2[b];
            b++;
        }
    }

    for (int l = 0; l < 20; l++)
        printf("%d\n", vet3[l]);

    return (0);
}
