#include <stdio.h>

int main()
{
    int vet[10];
    int count;
    int numero;

    count = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número inteiro: ");
        scanf("%d", &numero);
        vet[i] = numero;
    }

    for (int j = 0; j < 10; j++)
    {
        if (vet[j] % 2 == 0)
            count++;
    }

    printf("Foram digitados %d valores pares.\n", count);

    return (0);
}
