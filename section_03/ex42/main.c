#include <stdio.h>

int main()
{
    float salario_base;
    float salario_final;

    printf("Digite o valor do seu salário-base: ");
    scanf("%f", &salario_base);

    salario_final = salario_base * (1.0 + (5.0 / 100.0) * (1.0 - (7.0 / 100.0)));

    printf("O salário final: %f\n", salario_final);

    return (0);
}
