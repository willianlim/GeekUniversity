#include <stdio.h>

int main()
{
    int i;
    int soma;
    int numero;

    soma = 0;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    for (i = 1; i < numero; i++)
    {
        if (numero % i == 0)
            soma = soma + i;
    }

    printf("A soma dos divisores de %d é %d.\n", numero, soma);

    return (0);
}
