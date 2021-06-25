#include <stdio.h>

int main()
{
    float peso;
    float altura;

    printf("Digite os dados de uma pessoa.\n");
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Peso: ");
    scanf("%f", &peso);

    if (altura < 1.20)
    {
        if (peso <= 60)
            printf("A.\n");
        else if (peso > 60 && peso <= 90)
            printf("D.\n");
        else if (peso > 90)
            printf("G.\n");
    }
    else if (altura >= 1.20 && altura <= 1.70)
    {
        if (peso <= 60)
            printf("B.\n");
        else if (peso > 60 && peso <= 90)
            printf("E.\n");
        else if (peso > 90);
    }
    else if (altura > 1.70)
    {
        if (peso <= 60)
            printf("C.\n");
        else if (peso > 60 && peso <= 90)
            printf("F.\n");
        else if (peso > 90)
            printf("I.\n");
    }

    return (0);
}
