#include <stdio.h>

int main()
{
    float venda_mensal;
    float result;

    printf("Digite o valor das vendas mensais: ");
    scanf("%f", &venda_mensal);

    if (venda_mensal >= 100000)
    {
        result = 700 * (1.0 + (16.0 /100.0));
        printf("Comissão: %f\n", result);
    }
    else if (venda_mensal >= 80000 && venda_mensal < 100000)
    {
        result = 650 * (1.0 + (14.0 / 100.0));
        printf("Comissão: %f\n", result);
    }
    else if (venda_mensal >= 60000 && venda_mensal < 80000)
    {
        result = 600.0 * (1.0 + (14.0 / 100.0));
        printf("Comissão: %f\n", result);
    }
    else if (venda_mensal >= 40000 && venda_mensal < 60000)
    {
        result = 550.0 * (1.0 + (14.0 / 100.0));
        printf("Comissão: %f\n", result);
    }
    else if (venda_mensal >= 20000 && venda_mensal < 40000)
    {
        result = 500.0 * (1.0 + (14.0 / 100.0));
        printf("Comissão: %f\n", result);
    }
    else if (venda_mensal < 20000)
    {
        result = 400.0 * (1.0 + (14.0 / 100.0));
        printf("Comissão: %f\n", result);
    }

    return (0);
}
