#include <stdio.h>

int verifica(char *string1, char *string2)
{
    int i, j;

    for (i = 0, j = 0; *(string1 + i) != '\0'; i++)
    {
        j = 0;
        while (*(string1 + i) == *(string2 + j))
        {
            i++;
            j++;
            if (*(string2 + j) == '\n' || *(string2 + j) == '\0')
                return (1);
        }
    }

    return (0);
}

int main()
{
    char string1[100], string2[50];
    fgets(string1, 100, stdin);
    fgets(string2, 50, stdin);

    int retorno = verifica(string1, string2);

    if (retorno == 1)
        printf("A segunda string está contida na primeira string.\n");
    else if (retorno == 0)
        printf("A segunda string nã está contida na primeira string.\n");
    
    return (0);
}
