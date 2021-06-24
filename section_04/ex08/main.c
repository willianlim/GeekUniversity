#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float m;

    printf("Digite as suas notas.\n");
    printf("Primeira: ");
    scanf("%f", &n1);
    printf("Segunda: ");
    scanf("%f", &n2);

    if (n1 >= 0.0 && n1 <= 10.0)
        printf("Nota %.2f valida.\n", n1);
    else
    {
        printf("Nota %.2f invalida.\n", n1);
        return (0);
    }
    if (n2 >= 0.0 && n2 <= 10.0)
        printf("Nota %.2f valida.\n", n2);
    else
    {
        printf("Nota %.2f invalida.\n", n2);
        return (0);
    }

    m = (n1 + n2) / 2;

    printf("A média das notas: %.2f\n", m);

    return (0);
}
