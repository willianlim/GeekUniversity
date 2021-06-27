#include <stdio.h>

int main()
{
    int i;
    float nota;
    float soma;
    float media;

    soma = 0;
    i = 0;

    printf("Digite a sua nota: ");
    scanf("%f", &nota);

    while (nota >= 10 && nota <= 20)
    {
        soma = soma + nota;
        i++;
        printf("Digite a sua nota: ");
        scanf("%f", &nota);
    }

    media = soma / i;

    printf("A média aritmética desse aluno: %f.\n", media);

    return (0);
}
