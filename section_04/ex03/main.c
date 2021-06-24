#include <stdio.h>
#include <math.h>

int main()
{
    float x;

    printf("Digite um número real: ");
    scanf("%f", &x);

    if (x > 0)
    {
        printf("A raíz quadrada: %f\n", sqrt(x));
    }
    else
    {
        printf("Esse número ao quadrado: %f\n", pow(x, 2));
    }

    return (0);
}
