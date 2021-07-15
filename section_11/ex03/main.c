#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;

    char caracter, inicio;
    int count = 0;

    arq = fopen("arq.txt", "w");

    if(arq == NULL)
    {
        printf("Erro na abertuar do aruiqvo.\n");
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
        if(inicio == 'a' || inicio == 'e' || inicio == 'i' || inicio == 'o' || inicio == 'u' || inicio == 'A' || inicio == 'E' || inicio == 'I' ||inicio == 'O' || inicio == 'U')
            count++;
        else
            
        printf("%c", inicio);
        inicio = getc(arq);
    }

    printf("A quantidade de vogais é %d\n", count);

    fclose(arq);

    return(0);
}
