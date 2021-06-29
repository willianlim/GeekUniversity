#include <stdio.h>
#include <math.h>

int main()
{
    float vet[10];
    float aux[10];
    float x;
    int a;

    a = 0;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d° valor: ", i + 1);
        scanf("%f", &vet[i]);
    }

    printf("Digite um número qualquer: ");
    scanf("%f", &x);

    for (int j = 0; j < 10; j++)
    {
        if (fmod(vet[j], x) == 0)
        {
            aux[a] = vet[j];
            a++;
        }
    }

    printf("A quantidade de múltiplos desse número: %d\n", a);

    for (int k = 0; k < a; k++)
        printf("%f ", aux[k]);

    printf("\n");

    return (0);
}
