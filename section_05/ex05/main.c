#include <stdio.h>

int main()
{
    int i;
    float numero;
    float soma;

    soma = 0;
    for (i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%f", &numero);
        soma = soma + numero;
    }
    printf("O resultado da operação é: %f.\n", soma);

    return (0);
}
