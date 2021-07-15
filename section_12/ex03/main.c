#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    char nome[100];
    int n_matricula;
    char curso[100];
}v[5];

int main()
{
    FILE *fp;
    fp = fopen("arquivo.txt", "w");

    if(fp == NULL)
    {
        printf("Erro na leitura do arquivo.\n");
        exit(1);
    }

    printf("Digite as informações referentes a cinco alunos.\n");
    
    for(int i = 0; i < 5; i++)
    {
        printf("%d - aluno.\n", i+1);
        printf("Nome: ");
        fgets(v[i].nome, 100, stdin);
        printf("Número de matrícula: ");
        scanf("%d", &v[i].n_matricula);
        setbuf(stdin, NULL);
        printf("Nome do curso: ");
        fgets(v[i].curso, 100, stdin);
        printf("\n");

        fprintf(fp, "Nome: %sNúmero de matrícula: %d\nNome d curso: %s", v[i].nome, v[i].n_matricula, v[i].curso);
    }

    fclose(fp);

    return(0);
}
