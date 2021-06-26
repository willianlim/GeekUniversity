#include <stdio.h>

int main()
{
    int i;
    int numero;
    float media;
    int soma;

    i = 0;
    soma = 0;
    media = 0;
    while (i < 10)
    {
        printf("Digite o %d° número inteiro positivo: ", i+1);
        scanf("%d", &numero);
        
        if (numero > 0)
        {
            i++;
            soma = soma + numero;
        }
    }
    media = soma / 10;

    printf("A média: %f.\n", media);

    return (0);
}
