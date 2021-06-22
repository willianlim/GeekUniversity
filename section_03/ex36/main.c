#include <stdio.h>
#include <math.h>
#define PI 3.141592

int main()
{
    float Altura;
    float Raio;
    float Volume;

    printf("Digite os dados de um cilindro.\n");
    printf("Altura: ");
    scanf("%f", &Altura);
    printf("Raio: ");
    scanf("%f", &Raio);

    Volume = PI * pow(Raio, 2) * Altura;

    printf("O volume desse cilindro: %f\n", Volume);

    return (0);
}
