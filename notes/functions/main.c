#include <stdio.h>

//aula 02 escrevendo funções
// main -> principal

// Estrutura das funções
/*
- Tipo de retorno
- Nome
- Parâmetro de entrada (Opcional)
- Implementação
- Retorno (Opcional)
*/
// void, tipo de retorno. mensagem, nome. (), parâmetros de entrada(Opcional)
// Entre as {} está a implementação.
void mensagem()  //void significa vazio, ou seja que não tem retorno.
{
    printf("Bem-Vindo!");
}

int soma(int num1, int num2)
{
    /*
    int res = num1 + num2;
    return (res);
    */
    return (num1 + num2);
}

// 'a'
// '97'
void proximo_char(char caractere)
{
    printf("%c", caractere + 1);
}

int main()
{
    printf("Olá...\n");
    mensagem();
    //int retorno = soma(4, 6);
    printf("%d\n", soma(4, 6));

    char cara = 97;
    proximo_char(cara);

    return (0); // Retorna 0 para o sistema operacional o que significa que teve sucesso.
}
