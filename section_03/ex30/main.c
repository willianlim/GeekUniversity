#include <stdio.h>

int main()
{
    float r;
    float c;
    float d;

    printf("Digite o total em real: ");
    scanf("%f", &r);
    printf("Digite a cotação do dolar: ");
    scanf("%f", &c);

    d = r / c;

    printf("Esse valor em dolares: %.3f\n", d);

    return (0);
}
