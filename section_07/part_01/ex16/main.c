#include <stdio.h>

int main()
{
    float vet[5];
    int valor;

    printf("Digite 5 números do tipo real.\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %d°: ", i + 1);
        scanf("%f", &vet[i]);
    }

    printf("--------------DIGITE O CÓDIGO------------\n");
    printf("0 - Finaliza o programa.\n");
    printf("1 - Mostra os números na ordem crescente.\n");
    printf("2 - Mostra os números na ordem inversa.\n");
    printf("-----------------------------------------\n");
    printf("Opção: ");
    scanf("%d", &valor);

    switch (valor)
    {
        case 0: printf("Programa finalizado.\n");break;
        case 1:
        {
            for (int j = 0; j < 5; j++)
                printf("%f ", vet[j]);
                printf("\n");
                break;
        }
        case 2:
        {
            for (int k = 4; k >= 0; k--)
                printf("%f ", vet[k]);
                printf("\n");
                break;
        }
        default: printf("ERROR: Código inválido.\n");
    }

    return (0);
}
