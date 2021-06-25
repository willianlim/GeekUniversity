#include <stdio.h>

int main()
{
    int ano;

    printf("Digite um ano: ");
    scanf("%d", &ano);

    if (ano % 4 == 0 && ano % 100 != 0)
        printf("Esse ano é bissexto.\n");
    else if (ano % 400 == 0)
        printf("Esse ano é bissexto.\n");
    else
        printf("Esse ano não é bissexto.\n");

    return (0);
}
