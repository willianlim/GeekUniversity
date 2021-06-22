#include <stdio.h>

int main()
{
    float ganhador_01;
    float ganhador_02;
    float ganhador_03;

    ganhador_01 = 780000 * (46.0 / 100.0);
    ganhador_02 = 780000 * (32.0 / 100.0);
    ganhador_03 = 780000 * (22.0 / 100.0);

    printf("O primeiro ganhador: %.2f\n", ganhador_01);
    printf("O segundo ganhador: %.2f\n", ganhador_02);
    printf("O terceiro ganhador: %.2f\n", ganhador_03);

    return (0);
}
