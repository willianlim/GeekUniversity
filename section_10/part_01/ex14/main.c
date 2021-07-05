#include <stdio.h>

void    popular(char *str, char letra)
{
    *(str + 1) = letra;

    printf("O caractere digitado é: %c\n", *(str + 1));
}

int main()
{
    char vet[2];
    char x;

    printf("Digite um caractere: ");
    scanf("%c",&x);

    popular(vet, x);

    return (0);
}