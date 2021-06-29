#include <stdio.h>

int main()
{
    float vet[5];
    float maior;
    float menor;
    float soma;
    float media;
    float valor;

    soma = 0;

    printf("Digite 5 valores númericos.\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d°: ", i + 1);
        scanf("%f", &valor);
        vet[i] = valor;
    }

    for (int j = 0; j < 5; j++)
    {
        if (j == 0)
            maior = menor = vet[j];
        else if (vet[j] > maior)
            maior = vet[j];
        else if (vet[j] < menor)
            menor = vet[j];
    }

    for (int k = 0; k < 5; k++)
        soma = soma + vet[k];
    
    media = soma / 5.0;

    printf("Todos os valores lidos.\n");
    for (int l = 0; l < 5; l++)
        printf("%f.\n", vet[l]);

    printf("O maior: %f.\n", maior);
    printf("O menor: %f.\n", menor);
    printf("A média dos valores: %f.\n", media);

    return (0);
}
