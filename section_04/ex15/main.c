#include <stdio.h>

int main()
{
    char num;

    printf("Digite um número de 1 a 7: ");
    scanf("%s", &num);

    switch (num)
    {
        case '1': printf("Segunda-feira.\n");break;
        case '2': printf("Terça-feiar.\n");break;
        case '3': printf("Quarta-feira.\n");break;
        case '4': printf("Quinta-feira.\n");break;
        case '5': printf("Sexta-feira.\n");break;
        case '6': printf("Sábado.\n");break;
        case '7': printf("Domingo.\n");break;
        default: printf("Número inválido.\n");break;
    }

    return (0);
}
