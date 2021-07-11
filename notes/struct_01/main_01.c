#include <stdio.h>

int main()
{
    //tipos de variáveis que podemos declarar
    //"tipos básicos": char, int, float, double;
    int x;
    float f;

    //"tipos compostos homogêneos": array
    int v[5];
    char nome[50];

    /*
        A linguagem C nos permite também criar
    nossos prórprios tipos de variáveis.
        Um deles é a struct também chamada
    de ESTRUTURA*/
    //Forma geral
    struct nome_struct
    {
        tipo1 nome1;
        tipo2 nome2;
        ...
        tipoN nomeN;
    };

    return(0);
}
