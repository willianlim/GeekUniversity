#include <stdio.h>
#include <math.h>

int main()
{
    float l;
    float a;

    a = 0;
    printf("Me informe o tamanho do lado de um quadrado: ");
    scanf("%f", &l);

    a = pow(l, 2);
    printf("A área desse quadrado: %f\n", a);
}