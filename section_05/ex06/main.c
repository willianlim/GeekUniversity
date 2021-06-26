#include <stdio.h>

int main()
{
    int i;
    int soma;
    float media;
    int numero;

    soma = 0;
    media = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite o %d° número inteiro: ", i+1);
        scanf("%d", &numero);
        soma = soma + numero;
    }
    media = soma / 10;
    printf("A média é: %f.\n", media);

    return (0);
}
