#include <stdio.h>

void volume_sphere(int w)
{
    float v;

    v = (4 / 3) * 3.14159265 * w * w * w;
    printf("O volume da esfera: %f\n", v);
}

int main()
{
    int r;

    printf("Digite o raio de uma esfera: ");
    scanf("%d", &r);

    volume_sphere(r);

    return (0);
}
