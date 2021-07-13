#include <stdio.h>

int main()
{
    /*
        Vimos como é possível escrever e
    ler em arquivos caracteres e
    sequência de caracteres (strings).

        As funções de escrita de blocos de bytes
    permitem escrever dados mais complexos, 
    como os tipos int, float, double, array,
    ou memso um tipo definido pelo programador,
    como, por exemplo, a struct.

        Elas devem ser ultilizadas preferencialmente
    com arquivos binários.
    */

    /*
        Para se escrever um bloco de bytes
    em um arquivo usamos a função fwrite()
    */
    //Forma geral
    int fwrite(void *buffer, int bytes, int count, FILE *fp);

    /*
        Parâmetros:

        buffer: ponteiro genérico para os dados.
        bytes: tamanho, em bytes, de cada unidade
        de dado a ser gravada.
        count: total de unidades de dados que devem
        ser gravadas.
        fp: o ponteiro para o arquivo.
    */

    /*
        Retorno: total de unidades de dados
    gravados com sucesso.
    */

    return(0);
}
