#include <stdio.h>

int main()
{
    int x;
    int y;

    printf("Digite dois valores.\n");
    printf("Primeiro: ");
    scanf("%d", &x);
    printf("Segundo: ");
    scanf("%d", &y);

    printf("Endereço das variáveis.\n");
    printf("x = %p\ny = %p\n", &x, &y);

    if (&x > &y)
        printf("O endereço de x é maior do que de y.\n");
    else
        printf("O endereço de y é maior do que de x.\n");

    return (0);
}
