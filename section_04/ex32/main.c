#include <stdio.h>

int main()
{
    int Codigo;
    int Quantidade;
    float result;

    printf("--------------CARDÁPIO----------------\n");
    printf("ESPECIFICAÇÃO        CÓDIGO      PREÇO\n");
    printf("Cachorro quente       100         1.20\n");
    printf("Bauru Simples         101         1.30\n");
    printf("Bauru com Ovo         102         1.50\n");
    printf("Hamburguer            103         1.20\n");
    printf("Cheeseburguer         104         1.70\n");
    printf("Suco                  105         2.20\n");
    printf("Refrigerante          106         1.00\n");
    printf("--------------------------------------\n");
    printf("Digite as informações do pedido.\n");
    printf("Código de barras: ");
    scanf("%d", &Codigo);
    printf("Quantidade: ");
    scanf("%d", &Quantidade);

    switch (Codigo)
    {
        case 100:
        {
            result = 1.20 * Quantidade;
            printf("Valor a ser pago: %f\n", result);break;
        }
        case 101:
        {
            result = 1.30 * Quantidade;
            printf("Valor a ser pago: %f\n", result);break;
        }
        case 102:
        {
            result = 1.50 * Quantidade;
            printf("Valor a ser pago: %f\n", result);break;
        }
        case 103:
        {
            result = 1.20 * Quantidade;
            printf("Valor a ser pago: %f\n", result);break;
        }
        case 104:
        {
            result = 1.70 * Quantidade;
            printf("Valor a ser pago: %f\n", result);break;
        }
        case 105:
        {
            result = 2.20 * Quantidade;
            printf("Valor a ser pago: %f\n", result);break;
        }
        case 106:
        {
            result = 1.00 * Quantidade;
            printf("Valor a ser pago: %f\n", result);break;
        }
        default : printf("ERROR: Código inválido.\n");
    }

    return (0);
}
