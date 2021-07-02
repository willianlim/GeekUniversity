#include <stdio.h>

int main()
{
    /*O operador asterisco (*) permite
    modificar o conteúdo da posição
    de memória apontada.*/
    int x = 10;//variável
    int *p;//ponteiro
    //ponteiro p aponta para a variável x
    p = &x;
    printf("x = %d\n", x);
    *p = 12;
    printf("*p = %d\n", *p);
    printf("x = %d\n", x);

    return (0);
}
