#include <stdio.h>

int main()
{
    /*Ponteiros podem ser comparados usando:
    ==, !=, >, <, >= e <= */
    int *p, *p1, x, y;
    p = &x;
    p1 = &y;
    if (p == p1)
        pritnf("Ponteiros iguais\n");
    else
        pritnf("Ponteiros diferentes\n");

    return (0);
}
