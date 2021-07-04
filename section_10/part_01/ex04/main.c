#include <stdio.h>

int troca(int a, int b)
{
    int aux;

    aux = a;
    a = b;
    b = aux;

    printf("-------------DEPOIS-------------\n");
    printf("x = %d\ny = %d\n", a, b);
    printf("--------------------------------\n");
}

int main()
{
    int x;
    int y;

    printf("Digite dois valores.\n");
    printf("Primeiro: ");
    scanf("%d", &x);
    printf("Segundo: ");
    scanf("%d", &y);

    printf("--------------ANTES-------------\n");
    printf("x = %d\ny = %d\n", x, y);
    printf("--------------------------------\n\n");

    troca(x, y);

    return (0);
}
