#include <stdio.h>

int main()
{
    /*
        Para o "nome" do arquivo, podemos usar 
    caminho.

    - Absoluto (endereço completo)
    - Relativo (relativo a pasta do programa)
    Exemplo:
    */
    FILE *f;
    //caminho absoluto
    f = fopen("C:\\Projetos\\arq.txt", "w");
    //caminho relativo
    f = fopen("arquivo.txt", "w");
    f = fopen("..\\Novo\\arq2.txt", "w");

    return(0);
}
