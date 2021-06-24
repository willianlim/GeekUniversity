#include <stdio.h>

int main()
{
    int x;

    printf("Digite um número do tipo inteiro: ");
    scanf("%d", &x);

    if (x % 3 == 0)
    {
        printf("Esse número é divísivel por 3.\n");
        return (0);
    }
    else if (x % 5 == 0)
    {
        printf("Esse número é divísivel por 5.\n");
    }

    return (0);
}
