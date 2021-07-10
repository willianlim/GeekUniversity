#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Se a função fopen() não conseguir
    abrir o arquivo, ela irá retornar NULL
    Exemplo: */
    FILE *f;

    f = fopen("H:\arquivo.txt", "r");

    if(f == NULL)
    {
        printf("Erro na abertura!\n");
        exit(1);//aborta o programa
    }

    return(0);
}
