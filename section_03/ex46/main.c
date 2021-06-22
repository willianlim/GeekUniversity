#include <stdio.h>

int main()
{
    int c;
    int d;
    int u;
    int n_lido;

    printf("Digite um número com três digitos: ");
    scanf("%d", &n_lido);

    c = n_lido / 100;
    d = (n_lido / 10) % 10;
    u = n_lido % 10;

    printf("%d%d%d\n", u, d, c);
    
    return (0);
}
