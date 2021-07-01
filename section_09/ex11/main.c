#include <stdio.h>

void    calcular_media(float x, float y, float z, char w)
{
    float result;

    if (w == 'A')
        result = (x + y + z) / 3;
    else if (w == 'P')
        result = (x * 5 + y * 3 + z * 2) / 10;

    printf("A média desse aluno: %f\n", result);
}

int main()
{
    float n1;
    float n2;
    float n3;
    char letra;

    printf("Digite as notas desse aluno.\n");
    printf("Primeira: ");
    scanf("%f", &n1);
    printf("Segunda: ");
    scanf("%f", &n2);
    printf("Terceira: ");
    scanf("%f", &n3);
    printf("---------------LETRA------------\n");
    printf("A - Média aritmética.\n");
    printf("P - Média ponderada.\n");
    printf("--------------------------------\n");
    printf("Opção: ");
    scanf("%s", &letra);

    calcular_media(n1, n2, n3, letra);

    return (0);
}
