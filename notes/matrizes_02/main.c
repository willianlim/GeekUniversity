#include <stdio.h>
//matrizes parte 2

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
int main()
{
    //matrizes de inteiros
    /*
    [00][01]
    [10][11]
    */
    int numeros[2][2];
    numeros[0][0] = 1;
    numeros[0][1] = 2;
    numeros[1][0] = 3;
    numeros[1][1] = 4;

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", numeros[i][j]);
        }
        printf("\n");
    }

    //vetores e reais
    float valores[5][5];
    int k = 0;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            valores[i][j] = k;
            k++;
        }
    }

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%.2f ", valores[i][j]);
        }
        printf("\n");
    }

    return (0);
}
