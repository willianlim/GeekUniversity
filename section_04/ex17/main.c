#include <stdio.h>

int main()
{
    float base_maior;
    float base_menor;
    float altura;
    float A;

    printf("Digite os dados de um trapézio.\n");
    printf("Base maior: ");
    scanf("%f", &base_maior);
    printf("Base menor: ");
    scanf("%f", &base_menor);
    printf("Altura: ");
    scanf("%f", &altura);

    if (base_maior > 0)
    {
        if (base_menor > 0)
        {
            A = ((base_menor + base_maior) * altura) / 2;
        }
    }

    printf("A área desse trapézio: %f\n", A);

    return (0);
}
