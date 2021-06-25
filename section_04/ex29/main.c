#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    int acertos;
    float a;
    float b;
    float soma;
    float resp;

    acertos = 0;

    for (i = 0; i < 5; i++)
    {
        a = (rand() % 100) + 1;
        b = (rand() % 100) + 1;
        soma = a + b;
        resp = soma;
        printf("Qual é soma de %f + %f\n\n", a, b);
        scanf("%f", &resp);
        if (resp != soma)
        {
            printf("Resposta errada.\nA reposta certa é: %f\n", soma);
        }
        else
        {
            acertos++;
        }
    }
    printf("Você acertou: %d\n", acertos);

    return (0);
}
