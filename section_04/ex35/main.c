#include <stdio.h>

int main()
{
    int dia;
    int mes;
    int ano;

    printf("Digite as informações.\n");
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mês: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        if (mes >= 1 && mes < 13)
        {
            if (mes == 2)
            {
                if (dia <= 29)
                    printf("Data válida.\n");
                else
                    printf("Data inválida.\n");
            }
            else if (dia <= 30)
                printf("Data válida.\n");
            else
                printf("Data inválida.\n");
        }
        else
            printf("Data inválida.\n");
    }
    else if (mes >= 1 && mes < 13)
    {
        if (mes == 2)
        {
            if (dia < 29)
                printf("Data válida.\n");
            else
                printf("Data inválida.\n");
        }
        else if (dia <= 30)
            printf("Data válida.\n");
        else
            printf("Data inválida.\n");
    }
    else
        printf("Data inválida.\n");

    return (0);
}
