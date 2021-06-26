#include <stdio.h>

int main()
{
    int i;

    i = 0;
    while (i <= 100000)
    {
        printf("%d.\n", i);
        i = i + 1000;
    }

    return (0);
}
