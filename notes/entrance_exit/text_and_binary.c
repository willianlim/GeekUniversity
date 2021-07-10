#include <stdio.h>

int main()
{
    /*
        A linguagem C trabalha com apenas
    dois tipos de arquivos:

    - arquivos texto: podem ser editados
    no bloco de notas
    - arquivos binários: NÃO podem ser
    editados no bloco de notas

        Arquivo de texto:
    
    - Os dados são gravados exatamente
    como seriam impressos na tela.
    - Os dados são gravados como caracteres
    de 8 bits ultilizando a tabela ASCII.
    - Para isso, existe uma etapa de 
    "conversão" dos dados
    */

    /*
        Problemas com a conversão:
    
    - Arquivos maiores
    - Leitura e escrita lentas

        Considere um número inteiro com 8
    dígitos:
    */
    int n = 12345678;//32 bits na memória.

    /*
        Num arquivo texto, cada dígito será convertido para
    seu caractere ASCII, ou seja, 8 bits por dígito.
    */
    "12345678" // 64 bits no arquivo

    /*
        Arquivo binário:
    
    - Os dados são gravados exatamente como
    estão organizados na memória do computador
    - Não existe etapa de "conversão" dos dados.

        Consequentemente:
    
    - Arquivos em geral menores
    - Leitura e escrita mais rápidas
    */
    //Voltemos ao número inteiro com 8 dígitos:

    int n = 12345678;//32 bits na memória.

    /*
        Num arquivo binário, o conteúdo da memória
        será copiado diretamente para o arquivo,
        sem conversão
    */
    12345678 //32 bits no arquivo (codificação)

    return(0);
}
