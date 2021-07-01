#include <stdio.h>

int signal(int x)
{
    if (x > 0)
        return (1);
    else if (x < 0)
        return(-1);
    else if (x == 0)
        return (0);
}

int main()
{
    float value;
    int res;

    printf("Digite um número: ");
    scanf("%f", &value);

    res = signal(value);

    if (res == 1)
        printf("Esse número é positivo.\n");
    else if (res == -1)
        printf("Esse número é negativo.\n");
    else if (res == 0)
        printf("Esse número é nulo.\n");

    return (0);
}
