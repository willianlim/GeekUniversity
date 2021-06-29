#include <stdio.h>

int main()
{
    int vet[50];

    for (int i = 0; i < 50; i++)
    {
        vet[i] = (i + 5 * i) % (i + 1);
        printf("%d \n", vet[i]);
    }

    return (0);
}
