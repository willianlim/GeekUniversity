#include <stdio.h>

int main()
{
    int dia;
    int ano;
    int mes;
    int ano_atual;

    ano_atual = 2008;

    printf("Digite a sua data de nascimento.\n");
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mês: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

    if (ano > 2008)
    {
        printf("Data inválida.\n");
        return (0);
    }

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        if (mes > 0 && mes < 13)
        {
            if (mes == 2)
            {
                if (dia < 30)
                    printf("Data válida.\n");
                else
                    printf("Data inválida.\n");
            }
            else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
            {
                if (dia <= 31)
                    printf("Data válida.\n");
                else
                    printf("Data inválida.\n");
            }
            else if (dia < 31)
                printf("Data válida.\n");
            else
                printf("Data inválida.\n");
        }
        else
            printf("Data inválida.\n");
    }
    else if (mes > 0 && mes < 13)
    {
        if (mes == 2)
        {
            if (dia < 29)
                printf("Data válida.\n");
            else
                printf("Data inválida.\n");
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            if (dia <= 31)
                printf("Data válida.\n");
            else
                printf("Data inválida.\n");
        }
        else if (dia < 31)
            printf("Data válida.\n");
        else
            printf("Data inválida.\n");
    }
    else
        printf("Data inválida.\n");

    return (0);
}
