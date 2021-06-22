#include <stdio.h>

int main()
{
    float valor_inicial;
    float valor_final;

    printf("Digite o valor de um produto: ");
    scanf("%f", &valor_inicial);

    valor_final = valor_inicial * (1.0 - (12.0 / 100.0));

    printf("O valor final com desconto: %f\n", valor_final);

    return (0);
}
