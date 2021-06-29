#include <stdio.h>

int main()
{
    int vet[6];
    int valor;

    printf("Digite 6 valores do tipo inteiro.\n");

    for (int i = 0; i < 6; i++)
    {
        printf("Digite o %d°: ", i+1);
        scanf("%d", &valor);
        vet[i] = valor;
    }

    for (int j = 5; j >= 0; j--)
        printf("%d\t", vet[j]);

    printf("\n");
    return (0);
}