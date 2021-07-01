#include <stdio.h>

void    desenha_linha(int l)
{
    for (int i = 0; i < l; i++)
        printf("=");
    printf("\n");
}

int main()
{
    int quantidade;

    printf("Digite quantos sinais de iguais serão recebidos: ");
    scanf("%d", &quantidade);

    desenha_linha(quantidade);

    return (0);
}
