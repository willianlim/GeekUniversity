#include <stdio.h>

int main()
{
    /*As operações de adição e subtração
    no endereço dependem do tipo de dado
    que o ponteiro aponta.*/
    int *p = 0x5dc;//1500
    char *c = 0x5dc;//1500
    
    pritnf("p = %d\nc = %d\n", p, c);
    p++;//1504
    c++;//1501
    pritf("p = %d\nc = %d\n", p, c);

    return (0);
}
