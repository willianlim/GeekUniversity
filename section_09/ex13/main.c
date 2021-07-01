#include <stdio.h>

void    operation(float x, float y, char z)
{
    float result;

    switch (z)
    {
        case '+':
        {
            result = x + y;
            printf("A soma dos números: %f\n", result);break;
        }
        case '-':
        {
            result = x - y;
            printf("A subtração dos números: %f\n", result);break;
        }
        case '*':
        {
            result = x * y;
            printf("A multiplicação dos números: %f\n", result);break;
        }
        case '/':
        {
            result = x / y;
            printf("A divisão dos números: %f\n", result);break;
        }
        default: printf("ERROR: Opção inválida.\n");break;
    }
}

int main()
{
    float n1;
    float n2;
    char opcao;

    printf("Digite dois números.\n");
    printf("Primeiro: ");
    scanf("%f", &n1);
    printf("Segundo: ");
    scanf("%f", &n2);

    printf("----------OPERAÇÃO---------\n");
    printf("+ : Soma.\n");
    printf("- : Subtração.\n");
    printf("* : Multiplicação.\n");
    printf("/ : Divisão.\n");
    printf("---------------------------\n");
    printf("Opção: ");
    scanf("%s", &opcao);

    operation(n1, n2, opcao);

    return (0);
}
