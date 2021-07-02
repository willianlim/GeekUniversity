#include <stdio.h>

int main()
{
    /*Sobre o valor de endereço
    armazenado por um ponteiro
    podemos apenas somar e subtrair
    valores INTEIROS.*/
    int *p = 0x5dc;//1500
    printf("p = %p\n", p);
    p++;
    printf("p = %p\n", p);//1504
    p = p + 15;
    printf("p = %p\n", p);//1564
    p = p - 2;
    printf("p = %p\n", p);//1556

    return (0);
}
