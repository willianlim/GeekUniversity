#include <stdio.h>

int main()
{
    int vet[5];

    printf("Preecha um array do tipo inteiro com 5 elementos.\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Posição %d: ", i);
        scanf("%d", &vet[i]);
    }

    for (int i = 0; i < 5; i++)
        printf("%p\t", &vet[i]);
    
    printf("\n");

    return (0);
}
