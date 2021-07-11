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
        if(inicio == '\n')
            count++;
        printf("%c", inicio);
        inicio = getc(arq);
    }

    printf("A quantidade de linhas é %d\n", count);

    fclose(arq);
}