#include <stdio.h>

int main()
{
    float vet[10];
    float soma;
    float numero;
    int count;

    count = 0;
    soma = 0;

    printf("Digite 10 números reais.\n");

    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %d°: ", i + 1);
        scanf("%f", &numero);
        vet[i] = numero;
    }

    for (int j = 0; j < 10; j++)
    {
        if(vet[j] < 0)
            count++;
        else if (vet[j] > 0)
            soma = soma + vet[j];
    }

    printf("Dados do exercício.\n");
    printf("Quantidade de números negativos: %d\n", count);
    printf("A soma dos números positivos: %f\n", soma);

    return (0);
}
