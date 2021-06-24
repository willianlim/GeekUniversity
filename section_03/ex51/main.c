#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    float y;
    float d;

    printf("Digte as coordenadas do plano cartesiano.\n");
    printf("x: ");
    scanf("%f", &x);
    printf("y: ");
    scanf("%f", &y);

    d = sqrt(pow(x, 2) + pow(y, 2));

    printf("A distância da origem: %f\n", d);

    return (0);
}
