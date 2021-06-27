#include <stdio.h>

int main()
{
    int i;
    int numero;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &numero);

    if (numero > 0)
    {
        printf("Os divisores de %d:\n", numero);

        for (i = 1; i <= numero; i++)
        {   
            if (numero % i == 0)
                printf("%d.\n", i);
        }
    }
    else
        printf("Número inválido.\n");

    return (0);
}
