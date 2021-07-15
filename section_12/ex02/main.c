#include <stdio.h>
#include <stdlib.h>

struct formart
{
    char nome[100];
    int idade;
    char endereco[200];
}c;

int main()
{
    FILE *fp;

    fp = fopen("arquivo.txt", "w");

    if(fp == NULL)
    {
        printf("Erro ao abrir o arquivo.\n");
        exit(1);
    }

    printf("Digite os dados de uma pessoa.\n");
    printf("1 - Nome: ");
    fgets(c.nome, 100, stdin);
    printf("2 - Idade: ");
    scanf("%d", &c.idade);
    setbuf(stdin, NULL);
    printf("3 - Endereço: ");
    fgets(c.endereco, 200, stdin);

    fprintf(fp, "Nome: %sIdade: %d\nEndereço: %s", c.nome, c.idade, c.endereco);

    fclose(fp);

    return(0);
}
