#include <stdio.h>

int main()
{
    FILE *arq;
    char nome[10], *resultado;

    arq = fopen("arquivo.txt", "r");

    if (arq)
    {
        while (!feof(arq))//feof - File End Of File
        {
            resultado = fgets(nome, 10, arq);
            printf("Resultado: %p\n", resultado);
            if (resultado)
                printf("%s\n", nome);
        }
    }
    else
        printf("Não achei o arqiuvo.\n");

    fclose(arq);

    return (0);
}
