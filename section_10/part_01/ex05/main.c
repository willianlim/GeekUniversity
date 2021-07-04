#include <stdio.h>

int troca(int x, int y)
{
    if (x > y)
        return (x);
    else if (y > x)
        return (y);
}

int main()
{
    int n1;
    int n2;
    int result;

    printf("Digite dois valores do tipo inteiro.\n");
    printf("Primeiro: ");
    scanf("%d", &n1);
    printf("Segundo: ");
    scanf("%d", &n2);

    result = troca(n1, n2);

    printf("O maior valor é: %d\n", result);

    return (0);
}
