#include <stdio.h>

int main()
{
    int x = 10;
    float y = 42.5;
    char z = 'a';
    int *p1;
    float *p2;
    char *p3;

    p1 = &x;
    p2 = &y;
    p3 = &z;

    printf("--------------Antes-------------\n");
    printf("x = %d\ny = %f\nz = %c\n", x, y, z);
    printf("--------------------------------\n\n");

    *p1 = -45;
    *p2 = 3.14159;
    *p3 = 'w';

    printf("-------------DEPOIS-------------\n");
    printf("x = %d\ny = %f\nz = %c\n", x, y, z);
    printf("--------------------------------\n");

    return (0);
}
