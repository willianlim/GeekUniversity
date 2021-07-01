/*
#include <stdio.h>

int main()
{
    int n;
    int fator;
    int mult;

    printf("Decomponho um número dado em fatores primos.\n");
    printf("Entre com o número (> 1) a ser decomposto: ");
    scanf("%d", &n);
    printf("Decomposição de %d em fatores primos.\n", n);

    fator = 2;
    while (n > 1)
    {
        mult = 0;
        while (n % fator == 0)
        {
            mult++;
            n = n / fator;
        }
        if (mult != 0)
            printf("Fator %d multiplicidade %d\n", fator, mult);
        fator++;
    }
    return (0);
}
*/
#include <stdio.h>
/* Recebe um número inteiro n > 0 e mostra sua decomposição em
fatores primos, calculando a multiplicidade de cada fator */
int main(void)
{
    int n, p, q, primo, div;

    printf("Informe n: ");
    scanf("%d", &n);
    
    p = 2;
    while (n > 1)
    {
        q = 0;
        while (n % p == 0)
        {
            q = q + 1;
            n = n / p;
        }
        if (q > 0)
            printf("fator %d com multiplicidade %d\n", p, q);
            primo = 0;
            while (! primo)
            {
                p = p + 1;
                div = 2;
                primo = 1;
                while (div <= p / 2 && primo)
                {
                    if (p % div == 0)
                        primo = 0;
                    else
                        div = div + 1;
                }
            }
    }
   return 0;
}
