#include <stdio.h>

int main()
{
    int vet[5];

    printf("Preencha o array com 5 números do inteiro.\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Posição %d: ", i);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 5; i++)
        printf("%d\t", vet[i]*2);
    printf("\n");

    return (0);
}
