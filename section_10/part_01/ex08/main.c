#include <stdio.h>

int main()
{
    float vet[10];

    for (int i = 0; i < 10; i++)
        printf("Posição %d = %p\n", i, &vet[i]);

    return (0);
}
