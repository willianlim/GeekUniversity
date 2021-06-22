#include <stdio.h>

int main()
{
    float valor_final;
    float valor_hora;
    float total_horas;

    printf("Informe o valor da hora trabalhada: ");
    scanf("%f", &valor_hora);
    printf("Total de horas tralhadas em um mês: ");
    scanf("%f", &total_horas);

    valor_final = valor_hora * total_horas * (1.0 + (10.0 / 100.0));

    printf("O valor a ser pago ao funcionário: %f\n", valor_final);

    return (0);
}
