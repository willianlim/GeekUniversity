#include <stdio.h>

int main()
{
    int w;

    printf("Digite um número qualquer: ");
    scanf("%d", &w);

    if (w % 2 == 0)
        printf("Esse número é par.\n");
    else if (w % 3 == 0)
        printf("Esse número é impar.\n");

    return (0);
}
