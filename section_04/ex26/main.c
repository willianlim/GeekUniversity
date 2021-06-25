#include <stdio.h>

int main()
{
    float distancia;
    float litos;
    float result;

    printf("Digite os dados da viajem.\n");
    printf("Distância: ");
    scanf("%f", &distancia);
    printf("Listros: ");
    scanf("%f", &litos);

    result = distancia / litos;

    if (result < 8.0)
        printf("Venda o carro!\n");
    else if (result >= 8.0 && result < 13.0)
        printf("Econômico!\n");
    else if (result > 12)
        printf("Super econômico!\n");

    return (0);
}
