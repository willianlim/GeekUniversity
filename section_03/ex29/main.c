#include <stdio.h>

int main()
{
    float w;
    float x;
    float y;
    float z;
    float m;

    printf("Digite as suas quatro notas.\n");
    printf("Primeira: ");
    scanf("%f", &w);
    printf("Segunda: ");
    scanf("%f", &x);
    printf("Terceira: ");
    scanf("%f", &y);
    printf("Quarta: ");
    scanf("%f", &z);

    m = (w + x + y + z) / 4;

    printf("A média aritmetica dessas notas: %.3f\n", m);

    return (0);
}
