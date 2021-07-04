#include <stdio.h>

int main()
{
    int x;
    int y;
    int *p1;
    int *p2;

    p1 = &x;
    p2 = &y;

    printf("Endereço das variáveis.\n");
    printf("x = %p\n", p1);
    printf("y = %p\n", p2);

    if(&x > &y)
        printf("O endereço de x é maior do que y.\n");
    else
        printf("O endereço de y é maior do que de x.\n");

    return (0);
}
