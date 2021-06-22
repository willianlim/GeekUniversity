#include <stdio.h>

int main()
{
    float salario_inicial;
    float salario_final;

    printf("Digite o valor do salario atual: ");
    scanf("%f", &salario_inicial);

    salario_final = salario_inicial * (1.0 + (25.0 / 100.0));

    printf("O sálario final: %f\n", salario_final);

    return (0);
}
