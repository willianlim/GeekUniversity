#include <stdio.h>

int main()
{
    float valor_final;
    float dias;

    printf("Me informe a quantidade de dias trabalhados: ");
    scanf("%f", &dias);

    valor_final = dias * 30.0 * (1.0 - (8.0 / 100.0));

    printf("O valor líquido recebido: %.2f\n", valor_final);

    return (0);
}
