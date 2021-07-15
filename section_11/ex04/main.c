#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;

    char caracter, inicio;
    int count1 = 0, count2 = 0;

    arq = fopen("arq.txt", "w");

    if(arq == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    while(caracter != '0')
    {
        printf("Entre com os dados: ");
        scanf(" %c", &caracter);
        fprintf(arq, "%c\n", caracter);
    }

    fclose(arq);

    arq = fopen("arq.txt", "r");

    if(arq == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);
    }

    rewind(arq);

    inicio = getc(arq);

    while(inicio != EOF)
    {
        if(inicio >= 'a' && inicio <= 'z' || inicio >= 'A' && inicio <= 'Z')
        {
            if(inicio == 'a' || inicio == 'e' || inicio == 'i' || inicio == 'o' || inicio == 'u' || inicio == 'A' || inicio == 'E' || inicio == 'I' || inicio == 'O' || inicio == 'U')
            {
                count1++;
                inicio = getc(arq);
                inicio = getc(arq);
            }
            else
            {
                count2++;
                inicio = getc(arq);
                inicio = getc(arq);
            }
        }
        else
        {
            inicio = getc(arq);
            inicio = getc(arq);
        }
    }

    printf("A quantidade de vogais é %d e de consoantes %d\n", count1, count2);

    fclose(arq);

    return(0);
}
