#include <stdio.h>

int main()
{
    int A;
    int *B;
    int **C;
    int ***D;

    B = &A;
    C = &B;
    D = &C;

    printf("Digite um número inteiro: ");
    scanf("%d", &A);

    printf("\nDobro: %d\n", (*B * 2));
    printf("Triplo: %d\n", (**C * 3));
    printf("Quadruplo: %d\n", (***D * 4));

    return (0);
}
