#include <stdio.h>

void    consumo(float x, float y)
{
    float result;

    result = x / y;

    if (result <= 8.0)
        printf("Venda o carro!\n");
    else if (result > 8 && result <= 14)
        printf("Econômico!\n");
    else if (result > 14)
        printf("Super econômico!\n");

}

int main()
{
    float km;
    float l;

    printf("Digite as informações sobre o percurso.\n");
    printf("Distância: ");
    scanf("%f", &km);
    printf("Litros: ");
    scanf("%f",&l);

    consumo(km, l);

    return (0);
}