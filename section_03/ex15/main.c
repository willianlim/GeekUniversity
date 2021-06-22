#include <stdio.h>
#define PI 3.14159265

int main()
{
    float r;
    float g;

    printf("Digite um ângulo em radianos: ");
    scanf("%f", &r);

    g = r *180 / PI;

    printf("Esse mesmo valor em graus: %.3f\n", g);

    return (0);
}
