#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Exemplo:
    FILE *f;
    f = fopen("C:\\arquivo.txt", "w");

    if(f == NULL)
    {
        printf("Erro na abertura!\n");
        exit(1);//aborta o programa
    }
    fprintf(f,"pao 2.");
    /*
        Sempre que terminamos de usar um
    arquivo, devemos fechá-lo. Para realizar
    essa tarefa, usa-se a função fclose()
    */
    //Forma geral:
    fclose(f);

    /*
        fclose() retorna ZERRO  no caso de
    sucesso no fechamento do arquivo
    */

    return(0);
}
