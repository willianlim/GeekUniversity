#include <stdio.h>

float   volume(float a, float r)
{
    float v;

    v = 3.141592 * r * r * a;

    return (v);
}

int main()
{
    float altura;
    float raio;

    printf("Digite os dados de um cilindro.\n");
    printf("Altura: ");
    scanf("%f", &altura);
    printf("Raio: ");
    scanf("%f", &raio);

    printf("O volume desse cilindro: %f\n", volume(altura, raio));

    return (0);
}
