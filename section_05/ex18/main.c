#include <stdio.h>

int main()
{
    int i;
    int n;
    int numero;
    int count;
    int maior;

    printf("Digite a quantidade de a serem lidos: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("%d°: ", i+1);
        scanf("%d", &numero);

        if (i == 0)
        {
            maior = numero;
        }
        else if (numero > maior)
        {
            maior = numero;
            count = 1;
        }
        else if (numero == maior)
            count++;
    }

    printf("A quantidade de vezes que o maior número '%d' foi lido: %d.\n", maior,count);

    return (0);
}
