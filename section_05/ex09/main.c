#include <stdio.h>

int main()
{
    int n;
    int aux;
    int cont;
    int i;

    i = 0;
    cont = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    aux = n;

    while (cont < aux)
    {
        i++;
        if (i % 2 != 0)
        {
            printf("%d\t", i);
            cont++;
        }
    }

    printf("\n");

    return (0);
}
