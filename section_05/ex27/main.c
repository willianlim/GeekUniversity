#include <stdio.h>

int main()
{
    int i;
    int n;
    float soma;

    soma = 0.0;

    printf("Digite número inteiro: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
        soma = soma + 1.0 / i;

    printf("A soma da série harmônica de %d números é: %f.\n", n, soma);

    return (0);
}
