#include <stdio.h>

int main()
{
    FILE *arq;
    char c;

    arq = fopen("arquivo.txt", "r");//leitura

    if (arq)
    {
        while ((c = getc(arq)) != EOF)
            printf("%c", c);
    }
    else
        printf("Não achei o arquivo\n");

    fclose(arq);

    return (0);
}
