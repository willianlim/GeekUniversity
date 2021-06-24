#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float n3;
    float result;

    result = 0;
    printf("Digite as notas.\n");
    printf("Trabalho de laboratório: ");
    scanf("%f", &n1);
    printf("Avaliação semestral: ");
    scanf("%f", &n2);
    printf("Exame final: ");
    scanf("%f", &n3);

    result = (n1 * 2 + n2 *3 + n3 * 5) / 10;
    printf("Nota: %f\n", result);

    if (result >= 0.0 && result <= 2.9)
        printf("REPROVADO.\n");
    else if (result >= 3.0 && result <= 4.9)
        printf("RECUPERAÇÃO.\n");
    else
        printf("APROVADO.\n");

    return (0);
}
