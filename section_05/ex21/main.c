#include <stdio.h>

int main()
{
    int soma;
    int n1;
    int n2;
    int mult;
    int i;

    soma = 0;
    mult = 1;
 
    printf("Digite dois números.\n");
    printf("Primeiro: ");
    scanf("%d", &n1);
    printf("Segundo: ");
    scanf("%d", &n2);

    if (n2 > n1)
    {
        for (i = n1; i <= n2; i++)
        {
            if (i % 2 == 0)
                soma = soma + i;
            else if (i % 2 != 0)
                mult = mult * i;
        }
    }
    else if (n1 > n2)
    {
        for (i = n2; i <= n1; i++)
        {
            if (i % 2 == 0)
                soma = soma + i;
            else if (i % 2 != 0)
                mult = mult * i;
        }
    }

    printf("A soma do números pares: %d.\n", soma);
    printf("A multiplicação dos números impares: %d.\n", mult);

    return (0);
}
