#include <stdio.h>

int quadrado(int n1)
{
    return (n1 * n1);
}

int main()
{
    int num1;

    printf("Digite um númeor do tipo inteiro: ");
    scanf("%d", &num1);

    printf("O número digitado ao quadrado: %d.\n", quadrado(num1));

    return (0);
}
