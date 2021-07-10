#include <stdio.h>

int main()
{
    /*
        O modo de abertura determina que tipo
    de uso será feito do arquivo
    */
    FILE *f;
    //Leitura de Arquivo Texto
    f = fopen("arquivo.txt", "r");
    //Escrita de Arquivo Texto
    f = fopen("arquivo.txt", "w");
    //Leitura de Arquivo Binário
    f = fopen("arquivo.txt", "rb");
    //Escrita de Arquivo Binário
    f = fopen("arquivo.txt", "wb");

    return(0);
}