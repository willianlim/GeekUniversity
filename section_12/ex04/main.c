#include <stdio.h>
#include <stdlib.h>

struct aluno
{
    int n_matricula;
    char nome[100];
    int n1;
    int n2;
    int n3;
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

    for(int i = 0; i < 5; i++)
    {
        printf("%d - aluno.\n", i+1);
        printf("Matrícula do aluno: ");
        setbuf(stdin, NULL);
        scanf("%d", &v[i].n_matricula);
        setbuf(stdin, NULL);
        printf("Nome do aluno: ");
        fgets(v[i].nome, 100, stdin);
        printf("Nota da primeira prova: ");
        scanf("%d", &v[i].n1);
        printf("Nota da segunda prova: ");
        scanf("%d", &v[i].n2);
        printf("Nota da terceira prova: ");
        scanf("%d", &v[i].n3);
        printf("\n");

        fprintf(fp, "%d - aluno\nMatricula do aluno: %d\nNome do aluno: %sNota a primeira prova: %d\nNota da segunda prova: %d\nNota da terceira prova: %d\n", i+1, v[i].n_matricula, v[i].nome, v[i].n1, v[i].n2, v[i].n3);
    }

    fclose(fp);

    int i = 0;
    int maior;
    int menor;
    int menor_media;
    int maior_media;
    int position;

    while(i < 5)
    {
        if(i == 0)
            maior = v[i].n1;
        else if(v[i].n1 > maior)
        {
            maior = v[i].n1;
            position = i;
        }
        i++;
    }

    int j = 0;
    int k = 0;
    int soma[5];
    int media[5];

    while(j < 5)
    {
        soma[j] = v[j].n1 + v[j].n2 + v[j].n3;
        media[j] = soma[j] / 3;
        j++;
    }

    while(k < 5)
    {
        if(k == 0)
        {
            maior_media = media[k];
            menor_media = media[k];
        }
        else if(media[k] > maior_media)
            maior_media = media[k];
        else if(media[k] < menor_media)
            menor_media = media[k];
        
        k++;
    }

    printf("Maior nota na primeira prova: %d\nAluno com maior media: %d\nAluno com menor media: %d\n", maior, maior_media, menor_media);

    return(0);
}
