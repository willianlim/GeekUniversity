#include <stdio.h>

int square(int w)
{
    for (int i = 0; i < w; i++)
    {
        if(i * i == w)
            return (1);
    }

    return (0);
}

int main()
{
    int x;
    int res;

    printf("Digite um elemento que pertença ao conjunto dos números naturais: ");
    scanf("%d", &x);

    res = square(x);

    if (res == 1)
        printf("Esse número é um quadrado perfeito.\n");
    else if (res == 0)
        printf("Esse número não é um quadrado perfeito.\n");

    return (0);
}
