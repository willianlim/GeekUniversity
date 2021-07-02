#include <stdio.h>

int main()
{
    /*Atribuição: um ponteiro só pode
    receber o endereço de uma variável
    do mesmo tipo do ponteiro.*/
    int *p, *p1, x = 10;
    float y = 20.0;

    p = &x;

    printf("*p: %d\n", *p);
    p1 = p;
    printf("*p1: %d\n", *p1);
    p = &y;//ERRADO

    return (0);
}
