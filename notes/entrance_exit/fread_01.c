#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
        Para ler um bloco de bytes de 
    um arquivo usamos a função fread()
    */
    //Forma geral:
    int fread(void *buffer, int bytes, int count, FILE *fp);

    /*
        Parâmetros:

        buffer: ponteiro genérico para os dados
        bytes: tamanho, em bytes, de cada unidade
        de dado ser lida.
        count: total de unidades de dados que devem
        ser lidas.
        fp: o ponteiro para o aquivo
    */

    /*
        Retorno: total de unidades de dados lidas
    com sucesso
    */

    return(0);
}