#include <stdio.h>

int main()
{
    float vet[15];
    float soma;
    float nota;
    float media;

    soma = 0;

    printf("Digite as notas 15 alunos.\n");

    for (int i = 0; i < 15; i++)
    {
        printf("Digite a nota do %d°: ", i+1);
        scanf("%f", &nota);
        vet[i] = nota;
    }

    for (int j = 0; j < 15; j++)
        soma = soma + vet[j];

    media = soma / 15;

    printf("A média das notas dos alunos: %f\n", media);

    return (0);
}
