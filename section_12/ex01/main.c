#include <stdio.h>
#include <stdlib.h>

struct horario
{
    int h;
    int m;
    int s;
};

struct data
{
    int d;
    int m;
    int a;
};

struct compromisso
{
    struct data x;
    struct horario y;
    char texto[200];
}c;

int main()
{
    FILE *arq;

    arq = fopen("arquivo.txt", "w");

    if(arq == NULL)
    {
        printf("Erro na leitura do arquivo.\n");
        exit(1);
    }

    printf("\n=======================================\n");
    printf("\tlista de compromisso.\n");
    printf("=======================================\n\n");
    printf("Digite as iformações do compromissos.\n");
    printf("1 - HORA.\n");
    printf("Hora: ");
    scanf("%d", &c.y.h);
    printf("Minuto: ");
    scanf("%d", &c.y.m);
    printf("Segundo: ");
    scanf("%d", &c.y.s);
    printf("2 - DATA.\n");
    printf("Dia: ");
    scanf("%d", &c.x.d);
    printf("Mês: ");
    scanf("%d", &c.x.m);
    printf("Ano: ");
    scanf("%d", &c.x.a);
    setbuf(stdin, NULL);
    printf("Texto informativo: ");
    fgets(c.texto, 200, stdin);

    fprintf(arq, "Hora: %d:%d:%d\nData: %d/%d/%d\nTexto: %s", c.y.h, c.y.m, c.y.s, c.x.d, c.x.m, c.x.a, c.texto);

    fclose(arq);

    return(0);
}
