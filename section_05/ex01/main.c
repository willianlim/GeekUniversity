#include <stdio.h>

int main()
{
    int i;
    int mul;

    i = 1;

    for (i = 1; i < 6; i++)
    {
        mul = 3 * i;
        printf("%d.\n", mul);
    }

    return (0);
}
