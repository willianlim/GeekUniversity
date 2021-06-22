#include <stdio.h>

int main()
{
    float k;
    float l;

    printf("Digite um valor de massa em quilôgramas: ");
    scanf("%f", &k);

    l = k / 0.45;

    printf("Esse mesmo valor em libras: %.3f\n", l);

    return (0);
}
