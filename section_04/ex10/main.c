#include <stdio.h>

int main()
{
    float h;
    char sexo;
    float peso_ideal;

    printf("Digite os seus dados.\n");
    printf("Altura: ");
    scanf("%f", &h);
    printf("sexo: [m/f]");
    scanf("%s", &sexo);

    if (sexo == 'm')
        peso_ideal = (72.7 * h) - 58;
    else
        peso_ideal = (62.1 * h) - 44.7;

    printf("O seu peso ideal: %f\n", peso_ideal);

    return (0);
}
