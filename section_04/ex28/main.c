#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    float y;
    float z;
    char m;
    float restult;

    printf("Digite três números inteiros positivos.\n");
    printf("Primeiro: ");
    scanf("%f", &x);
    printf("Segundo: ");
    scanf("%f", &y);
    printf("Terceiro: ");
    scanf("%f", &z);
    printf("----------------MÉDIAS---------------\n");
    printf("(a) Geométrica.\n(b) Ponderada.\n(c) Harmônica.\n(d) Aritmética.\n");
    printf("-------------------------------------\n");
    printf("Opção: ");
    scanf("%s", &m);

    switch (m)
    {
        case 'a':
        {
            restult = cbrt(x * y * z);
            printf("Média Geomética: %f\n", restult);break;
        }
        case 'b':
        {
            restult = (x + 2 * y + 3 * z) / 6;
            printf("Média Ponderada: %f\n", restult);break;
        }
        case 'c':
        {
            restult = 1 / ((1 / x) + (1 / y) + (1 / z));
            printf("Média Harmônica: %f\n", restult);break;
        }
        case 'd':
        {
            restult = (x + y + z) / 3;
            printf("Média Aritmética: %f\n", restult);break;
        }
        default : printf("ERRO: média inválida.\n");
    }

    return (0);
}
