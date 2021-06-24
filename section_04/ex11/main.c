#include <stdio.h>

int main()
{
    int num;
    int soma;

    soma = 0;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num > 0)
    {
        while (num > 0)
        {
            soma = soma + num % 10;
            num = num / 10;
        }
        printf("A soma dos algarismos: %d\n", soma);
    }
    else
        printf("O número é invalido.\n");

    return (0);
}
