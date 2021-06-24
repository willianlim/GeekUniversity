#include <stdio.h>
#include <math.h>

int main()
{
    float x;

    printf("Digite um número qualquer: ");
    scanf("%f", &x);

    if (x > 0)
    {
        printf("A raíz quadrada desse número: %f\n", sqrt(x));
    }
    else
    {
        printf("Esse número é invalido.\n");
    }
}
