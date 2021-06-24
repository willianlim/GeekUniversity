#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Digite dois números.\n");
    printf("Primeiro: ");
    scanf("%d", &x);
    printf("Segundo: ");
    scanf("%d", &y);

    if (x == y)
        printf("Números iguais.\n");
    else if (x > y)
        printf("%d é o maior número.\n", x);
    else
        printf("%d é o maior número.\n", y);

    return (0);
}
