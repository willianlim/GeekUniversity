#include <stdio.h>
#include <math.h>

int main()
{
    float x;

    printf("Digite um número qualque: ");
    scanf("%f", &x);

    if (x > 0)
    {
        printf("O número digitado ao quadrado: %f\n", pow(x, 2));
        printf("A raíz quadrada do número digitado: %f\n", sqrt(x));
    }
    
    return (0);
}
