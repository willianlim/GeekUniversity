#include <stdio.h>

int main()
{
    float s;
    float h;
    float m;
    float s2;    

    printf("Digite um valor em segundos: ");
    scanf("%f", &s);

    h = (s / 60) / 60;
    m = s / 60;
    s2 = s;

    printf("Horas: %.2f\nMinutos: %.2f\nSegundos: %.2f\n", h, m, s2);

    return (0);
}
