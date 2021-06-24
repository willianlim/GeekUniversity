#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float n3;
    float result;

    printf("Digite a nota das três provas.\n");
    printf("Primeira: ");
    scanf("%f", &n1);
    printf("Segunda: ");
    scanf("%f", &n2);
    printf("Terceiro: ");
    scanf("%f", &n3);

    result = (n1 * 1 + n2 * 1 + n3 * 2) / 4;

    if (result >= 60)
    {
        printf("Nota: %f\n", result);
        printf("APROVADO.\n");
    }
    else
    {
        printf("Nota: %f\n", result);
        printf("REPROVADO.\n");
    }

    return (0);
}
