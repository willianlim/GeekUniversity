#include <stdio.h>

int main()
{
    int x;
    int y;
    int z;
    int s;

    printf("Digite três valores do tipo inteiro.\n");
    printf("Primeiro: ");
    scanf("%d", &x);
    printf("Segundo: ");
    scanf("%d", &y);
    printf("Terceiro: ");
    scanf("%d", &z);

    s = x + y + z;

    printf("A soma desses valores é: %d\n", s);

    return (0);
}