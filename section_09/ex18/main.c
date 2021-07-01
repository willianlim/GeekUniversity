#include <stdio.h>

float   potencia(int b, int e)
{
    int res = 1;
    float res2 = 1;

    if (e == 0)
        return (1);
    else if (e == 1)
        return (b);
    else if (e == -1)
    {
        res2 = 1.0 / b;
        return (res2);
    }
    else if (e > 1)
    {
        for (int i = 1; i <= e; i++)
            res = res * b;
        return (res);
    }
    else if (e < -1)
    {
        for (int i = -1; i >= e; i--)
            res2 = 1.0 / (res = res * b);
        return (res2);
    }
}

int main()
{
    int x;
    int z;

    printf("Digite os valores de uma potência.\n");
    printf("Base: ");
    scanf("%d", &x);
    printf("Expoente: ");
    scanf("%d", &z);

    printf("O resultado dessa potência: %f\n", potencia(x, z));

    return (0);
}
