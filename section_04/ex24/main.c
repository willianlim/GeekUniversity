#include <stdio.h>

int main()
{
    float valor;
    int estado;
    float result;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor);
    printf("-------Estado de destino------\n");
    printf("1- MG\n2- SP\n3- RJ\n4- MS\n");
    printf("------------------------------\n");
    printf("Digite o número corespondente ao estado: ");
    scanf("%d", &estado);

    switch (estado)
    {
        case 1:
        {
            result = valor * (1.0 + (7.0 / 100.0));
            printf("O preço final do produto: %f\n", result);break;
        }
        case 2:
        {
            result = valor * (1.0 + (12.0 / 100.0));
            printf("O preço final do produto: %f\n", result);break;
        }
        case 3:
        {
            result = valor * (1.0 + (15.0 / 100.0));
            printf("O preço final do produto: %f\n", result);break;
        }
        case 4:
        {
            result = valor * (1.0 + (8.0 / 100.0));
            printf("O preço final do produto: %f\n", result);break;
        }
        default : printf("ERRO: O estado digitado é inválido.\n");
    }
    return (0);
}
