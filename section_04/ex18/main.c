#include <stdio.h>

int main()
{
    char ope;
    float x;
    float y;
    float result;

    printf("------------OPERAÇÕES-----------\n");
    printf("Soma: +\nSubtração: -\nMultiplicação: *\nDivisão: /\n");
    printf("--------------------------------\n");
    printf("Escolha uma operação matemática: ");
    scanf("%s", &ope);
    printf("Digite dois números.\n");
    printf("Primeiro: ");
    scanf("%f", &x);
    printf("Segundo: ");
    scanf("%f", &y);

    switch (ope)
    {
        case '+':
        {
            result = x + y;
            printf("Resltado: %f\n", result);break;
        }
        case '-':
        {
            result = x - y;
            printf("Resltado: %f\n", result);break;
        }
        case '*':
        {
            result = x * y;
            printf("Resltado: %f\n", result);break;
        }
        case '/':
        {
            result = x / y;
            printf("Resltado: %f\n", result);break;
        }
        default: printf("Operação inválida.\n");
    }

    return (0);
}
