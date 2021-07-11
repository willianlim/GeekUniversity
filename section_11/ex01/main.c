#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *arq;

    char caracter, inicio;

    arq = fopen("arq.txt", "w");

    if(arq == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);//aborta o programa
    }
    
    while(caracter != '0')
    {
        printf("Entre com os dados: ");
        //fflush(stdin);
        scanf(" %c", &caracter);
        fprintf(arq, "%c\n", caracter);
    }

    fclose(arq);

    arq = fopen("arq.txt", "r");

    if(arq == NULL)
    {
        printf("Erro na abertura do arquivo.\n");
        exit(1);//aborta o programa
    }

    rewind(arq);//Reposiciona o ponteiro para o início do arquivo
    
    inicio = getc(arq);

    while(inicio != EOF)
    {
        printf("%c", inicio);
        inicio = getc(arq);
    }

    fclose(arq);
}