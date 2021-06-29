#include <stdio.h>

int main()
{
    int vet[10];
    int maior;
    int menor;
    int numero;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);
        vet[i] = numero;
    }

    for (int j = 0; j < 10; j++)
    {
        if (j == 0)
            maior = menor = vet[j];
        else if (vet[j] > maior)
            maior = vet[j];
        else if (vet[j] < menor)
            menor = vet[j];
    }

    printf("Dentre os valores digitados temos.\n");
    printf("Maior: %d.\n", maior);
    printf("Menor: %d.\n", menor);

    return (0);
}
