#include <stdio.h>
#include <math.h>

int main()
{
    float n1;
    float n2;
    float n3;
    float x1;
    float x2;
    float delta;

    printf("Digite o valor das variáveis da equação do segundo grau.\n");
    printf("ax² + bx + c = 0\n");
    printf("a = ");
    scanf("%f", &n1);
    printf("b = ");
    scanf("%f", &n2);
    printf("c = ");
    scanf("%f", &n3);

    if (n1 != 0)
    {
        delta = pow(n2, 2) - 4 * n1 * n3;
        x1 = (-n2 + sqrt(delta)) / 2 * n1;
        x2 = (-n2 - sqrt(delta)) / 2 * n1;
        
        if (delta < 0)
            printf("Não existe raiz.\n");
        else if (delta == 0)
            printf("Raiz única: %f\n", x1);
        else if (delta > 0)
            printf("Existem duas raízes: %f e %f\n", x1, x2);
    }
    else
        printf("Não é equação de segundo grau.\n");

    return (0);
}
