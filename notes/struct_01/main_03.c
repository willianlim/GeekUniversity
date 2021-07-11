#include <stio.h>
//definindo uma estrutura
struct pessoa
{
    char nome[50], rua[50];
    int idade, numero;
};


int main()
{
    /*
        Cada campo (variável) da struct pode
    ser acessada usando o operador "." (ponto)*/
    struct pessoa p;

    p.idade = 31;//comando de atribuição
    scanf("%d", &p.numero);//comando de leitura
    gets(p.nome);//comando de leitura
    p.numero = p.numero + p.idade - 100;//expressão

    return(0);
}
