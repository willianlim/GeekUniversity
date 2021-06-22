#include <stdio.h>

int main()
{
    int x;
    int a;
    int s;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    a = x - 1;
    s = x + 1;

    printf("Antecessor: %d\nSucessor: %d\n", a, s);

    return (0);
}
