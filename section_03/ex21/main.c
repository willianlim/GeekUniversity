#include <stdio.h>

int main()
{
    float l;
    float k;

    printf("Digite um valor de massa em libras: ");
    scanf("%f", &l);

    k = l * 0.45;

    printf("Esse mesmo valor em quilôgramas: %.3f\n", k);

    return (0);
}
