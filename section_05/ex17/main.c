#include <stdio.h>

int main()
{
    int i;
    int n;
    int soma;

    soma = 0;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &n);

    for (i = 0; i <= n; i++)
        soma = soma + i;

    printf("A soma dos %d primeiro números naturais: %d.\n", n, soma);

    return (0);
}
