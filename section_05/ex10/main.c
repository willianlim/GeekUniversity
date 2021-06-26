#include <stdio.h>

int main()
{
    int cont;
    int soma;
    int i;

    i = 0;
    cont = 0;
    soma = 0;

    while (cont < 50)
    {
        i++;
        if (i % 2 == 0)
        {
            printf("%d.\n", i);
            soma = soma + i;
            cont++;
        }
    }

    printf("A soma dos 50 primeiro números pares: %d.\n", soma);

    return (0);
}
