#include <stdio.h>

int main()
{
    /*Podemos apontar o ponteiro para uma
    variável que já exista no nosso 
    programa.*/
    int x = 10;//variável
    int *p;//ponteiro
    //ponteiro p aponta para a variável x
    p = &x;
    printf("x = %d\n", x);
    printf("&x = %p\n", &x);
    printf("p = %p\n", p);

    return (0);
}
