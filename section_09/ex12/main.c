#include <stdio.h>

int soma_algarismos(int x)
{
    int soma = 0;

    while (x > 0)
    {
        soma = soma + x % 10;
        x = x / 10;
    }

    return (soma);
}

int main()
{
    int num;

    printf("Digite um número: ");
    scanf("%d", &num);

    if (num > 0)
        printf("A soma dos algarismos: %d\n", soma_algarismos(num));
    else
        printf("O número é inválido.\n");
    
    return (0);
}
