#include <stdio.h>
#include <stdlib.h>

struct cadastro
{
    char nome[20], rua[20];
    int idade;
};

int main()
{
    FILE *f = fopen("arquivo.txt", "wb");

    if(f == NULL)
    {
        printf("Erro na abertura\n");
        exit(1);
    }

    struct cadastro cad[4] = {"Ricardo", "Rua 1", 31,"Carlos", "Rua 2", 28,"Ana", "Rua 3", 45,"Bianca", "Rua 4", 32};

    fwrite(cad, sizeof(struct cadastro), 4, f);
    fclose(f);

    return(0);
}