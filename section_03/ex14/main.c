#include <stdio.h>
# define PI 3.14159265

int main()
{
    float g;
    float r;

    printf("Digite um ângulo em graus: ");
    scanf("%f", &g);

    r = g * PI / 180;

    printf("Esse mesmo valor em radianos: %f\n", r);

    return (0);
}
