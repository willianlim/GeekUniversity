#include <stdio.h>

int main()
{
    int x;
    int s3;
    int a2;
    int soma;

    printf("Digite um número inteiro: ");
    scanf("%d", &x);

    s3 = (x * 3) + 1;
    a2 = (x * 2) - 1;
    soma = s3 + a2;

    printf("A soma do sucessor de seu triplo com o antecessor de dobro: %d\n", soma);

    return (0);
}
