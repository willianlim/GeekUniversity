#include <stdio.h>

int ordem_crescente(int *a)
{
    int aux;

    if (a[0] > a[1])
    {
        aux = a[0];
        a[0] = a[1];
        a[1] = aux;
    }
    if (a[0] > a[2])
    {
        aux = a[0];
        a[0] = a[2];
        a[2] = aux;
    }
    if (a[1] > a[2])
    {
        aux = a[1];
        a[1] = a[2];
        a[2] = aux;
    }

    return (*a);
}

int main()
{
    int vet[3];

    printf("Digite três valores do tipo inteiro.\n");
    
    for (int i = 0; i < 3; i++)
    {
        printf("%d°: ", i+1);
        scanf("%d", &vet[i]);
    }

    ordem_crescente(vet);

    printf("Ordem crescente.\n");

    for (int i = 0; i < 3; i++)
        printf("%d\t", vet[i]);

    printf("\n");

    return (0);
}
