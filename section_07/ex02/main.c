#include <stdio.h>

int main()
{
    int str[6];
    int numero;

    for (int i = 0; i < 6; i++)
    {
        printf("Digite um número: ");
        scanf("%d", &numero);
        str[i] = numero;
    }

    for (int j = 0; j < 6; j++)
        printf("%d\t", str[j]);
    
    printf("\n");

    return (0);
}
