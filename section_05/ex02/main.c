#include <stdio.h>

int main()
{
    int i;
    int j;
    int k;

    j = 1;
    k = 1;
    for (i = 1; i <= 100; i++)
    {
        printf("%d.\n", i);
    }

    while (j <= 100)
    {
        printf("%d.\n", j);
        j++;
    }

    do
    {
        printf("%d.\n", k);
        k++;
    }while (k <= 100);

    return (0);
}
