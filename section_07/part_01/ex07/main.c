#include <stdio.h>

int main()
{
    int vet[10];
    int position;
    int numero;
    int maior;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d° número inteiro: ", i+1);
        scanf("%d", &numero);
        vet[i] = numero;
    }

    for (int j = 0; j < 10; j++)
        printf("%d\n", vet[j]);
    
    for (int k = 0; k < 10; k++)
    {
        if (k == 0)
            maior = vet[k];
        else if (vet[k] > maior)
        {
            maior = vet[k];
            position = k;
        }
    }

    printf("O maior elemento é %d na posição %d.\n", maior, position);

    return (0);
}
