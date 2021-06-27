#include <stdio.h>

int main()
{
    int n;
    int u;
    int d;
    int c;

    printf("Digite um número ineteiro entre 100 e 999: ");
    scanf("%d", &n);

    if (n >= 100 &&  n < 1000)
    {
        u = n % 10;
        d = (n / 10) % 10;
        c = n / 100;

        printf("%d\t%d\t%d\t\n", c, d, u);
    }
    else
        printf("Número inválido.\n");

    return (0);
}
