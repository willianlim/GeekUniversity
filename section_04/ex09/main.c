#include <stdio.h>

int main()
{
    float salary;
    float installment;
    float installment_limit;

    printf("Digite o valor do salário: ");
    scanf("%f", &salary);
    printf("O valor da prestação: ");
    scanf("%f", &installment);

    installment_limit = salary * (20.0 / 100.0);

    if (installment > installment_limit)
        printf("Empréstimo não concedido.\n");
    else
        printf("Empréstimo concedido.\n");

    return (0);
}
