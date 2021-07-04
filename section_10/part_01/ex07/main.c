#include <stdio.h>

void    soma_dobro(int A, int B)
{
    A = A + B;

    printf("----------DEOPIS---------\n");
    printf("A = %d\nB = %d\n", A, B);
    printf("-------------------------\n");
}

int main()
{
    int n1;
    int n2;

    printf("Digite dois números do tipo inteiro.\n");
    printf("Primeiro: ");
    scanf("%d", &n1);
    printf("Segundo: ");
    scanf("%d", &n2);

    printf("-----------ANTES---------\n");
    printf("A = %d\nB = %d\n", n1, n2);
    printf("-------------------------\n");

    soma_dobro(n1, n2);

    return (0);
}
