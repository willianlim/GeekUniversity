#include <stdio.h>
#define PI 3.141592

int main()
{
    float r;
    float a;

    printf("Me informe o valor do raio de um círculo: ");
    scanf("%f", &r);

    a = PI * r;

    printf("A área do círculo: %.3f\n", a);

    return (0);
}
