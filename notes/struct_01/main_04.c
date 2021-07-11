#include <stdio.h>
//definindo uma estrutura
struct pessoa
{
    char nome[50], rua[50];
    int idade, numero;
};

int main()
{
    //SEM STRUCT
    char nome1[50], nome2[50], nome3[50], nome4[50];
    int idade1, idade2, idade3, idade;
    char rua1[50], rua2[50], rua3[50], rua[4];
    int numero1[50], numero2[50], numero3[50], numero4[50];
    //COM STRUCT
    struct pessoa p1, p2, p3, p4;

    return(0);
}
