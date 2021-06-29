#include <stdio.h>
//matrizes - parte 1

/*
array uni - dimensional (vetores) int números[5];
[0][1][2][3][4]

array multi - dimensional (matrizes) int números[5][5];

[00][01][02][03][04]
[10][11][12][13][14]
[20][21][22][23][24]
[30][31][32][33][34]
[40][41][42][43][44]

*/

// array multi-dimensional
// char nome[3][50];
int main()
{
    //vetores e strings
    char nome[3][50];
    // "adfasl2345 $%¨!"
    for (int i = 0; i < 3; i++)
    {
        printf("Qual seu nome ?");
        fgets(nome[i], 50, stdin);
    }

    for (int i = 0; i < 3; i++)
    {
        printf("Olá %s", nome[i]);
    }

    return (0);
}
