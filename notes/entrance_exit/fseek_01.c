#include <stdio.h>

int main()
{
    /*
        Em geral, o acesso a um arquivo é
    quase sempre feito de modo sequencial.
    Porém, a linguagem c permite realizar
    operações de leitura e escrita randomica
    usndo a função fseek()
    */
    //Forma geram:
    int fseek(FILE *fp, long numbytes, int origem)
    /*
        Parâmetros:

        fp: o ponteiro para o arquivo.
        numbytes: é o total de bytes a ser pulado
    a partir de "origem".
        origem: a partir de onde os "numbytes"
    serão contados.

        Retorno: ZERO  em caso de sucesso*/
    
    /*
        Os valores possíveis para o parâmetro
    "origem" são definidos por constante
    na biblioteca stdio.h e são:

    CONSTANTE          VALOR             SIGNIFICADO

    SEEK_SET            0                Início do arquivo
    SEEK_CUR            1                Ponto atual no arquivo
    SEEK_END            2                Fim do arquivo
    */

    return(0);
}
