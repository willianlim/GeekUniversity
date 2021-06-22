#include <stdio.h>

int main()
{
    int m;
    int c;
    int d;
    int u;
    int n_lido;

    printf("digite um número com 4 dígitos: ");
    scanf("%d", &n_lido);

    m = n_lido / 1000;
    c = (n_lido / 100) % 10;
    d = (n_lido % 100) / 10;
    u = n_lido % 10;

    printf("%d\n%d\n%d\n%d\n", m, c, d, u);

    return (0);
}
