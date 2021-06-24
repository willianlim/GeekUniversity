#include <stdio.h>

int main()
{
    int operation;
    float result;
    int n1;
    int n2;

    printf("-----------OPERAÇÕES---------\n");
    printf("Escolha a opção:\n");
    printf("1- Soma de 2 números.\n");
    printf("2- Diferença entre 2 números. (Maior pelo menor)\n");
    printf("3- Produto entre 2 números.\n");
    printf("4- Divisão entre 2 números. (O denominador não pode ser zero)\n");
    printf("-----------------------------\n");
    printf("Opção: ");
    scanf("%d", &operation);

    printf("Digite dois números inteiros.\n");
    printf("Primeiro: ");
    scanf("%d", &n1);
    printf("Segundo: ");
    scanf("%d", &n2);

    switch (operation)
    {
        case 1:
        {
            result = n1 + n2;
            printf("Resultado: %f\n", result);break;
        }
        case 2:
        {
            if (n1 > n2)
                result = n1 - n2;
            else
                result = n2 - n1;
            printf("Resultado: %f\n", result);break;
        }
        case 3:
        {
            result = n1 * n2;
            printf("Resultado: %f\n", result);break;
        }
        case 4:
        {
            if (n2 != 0)
            {
                result = n1 / n2;
                printf("Resultado: %f\n", result);break;
            }
        }
        default : printf("ERRO: Valor lido inválido.\n");break;
    }

    return (0);
}
