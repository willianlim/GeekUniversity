#include <stdio.h>

void current_date(int day, int month, int year);

int main()
{
    int dia;
    int ano;
    int mes;

    printf("Digite a data atual.\n");
    printf("Dia: ");
    scanf("%d", &dia);
    printf("Mês: ");
    scanf("%d", &mes);
    printf("Ano: ");
    scanf("%d", &ano);

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

    current_date(dia, mes, ano);

    return (0);
}


void current_date(int day, int month, int year)
{
    switch (month)
    {
        case 1: printf("%d de Janeiro de %d.\n", day, year); break;
        case 2: printf("%d de Fevereiro de %d.\n", day, year); break;
        case 3: printf("%d de Março de %d.\n", day, year); break;
        case 4: printf("%d de Abril de %d.\n", day, year); break;
        case 5: printf("%d de Maio de %d.\n", day, year); break;
        case 6: printf("%d de Junho de %d.\n", day, year); break;
        case 7: printf("%d de Julho de %d.\n", day, year); break;
        case 8: printf("%d de Agosto de %d.\n", day, year); break;
        case 9: printf("%d de Setembro de %d.\n", day, year); break;
        case 10: printf("%d de Outubro de %d.\n", day, year); break;
        case 11: printf("%d de Novembro de %d.\n", day, year); break;
        case 12: printf("%d de Dezembro de %d.\n", day, year); break;
    }
}
