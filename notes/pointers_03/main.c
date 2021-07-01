#include <stdio.h>

int main()
{
    /*Para acessar o valor da variável
    apontada por um ponteiro, basta
    usar o operador asterisco (*).*/
    int x = 10;//variável
    int *p;//ponteiro
    //ponteiro p aponta para a variável x
    p = &x;
    printf("x = %d\n", x);
    printf("p = %p\n", p);
    printf("*p = %d\n", *p);

    return (0);
}
