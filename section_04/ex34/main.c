#include <stdio.h>

int main()
{
    float nota;
    int faltas;

    printf("Digite os dados de um aluno.\n");
    printf("Nota: ");
    scanf("%f", &nota);
    printf("Faltas: ");
    scanf("%d", &faltas);

    if (nota >= 9.0 && nota <= 10.0)
    {
        if (faltas <= 20)
            printf("A.\n");
        else if (faltas > 20)
            printf("B.\n");
    }
    else if (nota >= 7.5 && nota <= 8.9)
    {
        if (faltas <= 20)
            printf("B.\n");
        else if (faltas > 20)
            printf("C.\n");
    }
    else if (nota >= 5.0 && nota <= 7.4)
    {
        if (faltas <= 20)
            printf("C.\n");
        else if (faltas > 20)
            printf("D.\n");
    }
    else if (nota >= 4.0 && nota <= 4.9)
    {
        if (faltas <= 20)
            printf("D.\n");
        else if (faltas > 20)
            printf("E.\n");
    }
    else if (nota >= 0.0 && nota <= 3.9)
    {
        if (faltas <= 20)
            printf("E.\n");
        else if (faltas > 20)
            printf("E.\n");
    }

    return (0);
}
