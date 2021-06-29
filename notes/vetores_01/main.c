#include <stdio.h>
//vetore - parte 1

//array uni-dimensional
//char nome[50]
int main()
{
    //vetores e strings
    char nome[50];
    // "adklfjasl s2 43"
    printf("Qual o seu nome? ");
    fgets(nome, 30, stdin);
    printf("Olá %s", nome);

    //vetores e caracteres
    char letras[26];
    // 'a'
    int count = 0;
    for (int i = 97; i <= 122; i++)
    {
        letras[count] = i;
        count++;
    }
    //Imprimindo as letras e seus valores em decimal
    for (int i = 0; i < 26; i++)
    {
        printf("%d == %c\n", letras[i], letras[i]);
    }

    //char l = 'l';
    //char a = 97;

    return (0);
}
