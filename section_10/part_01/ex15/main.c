#include <stdio.h>

void    puthcar(char *str)
{
    int i = 0;
    /*for (int i = 0; i < 5; i++)
        printf("%d\t", *(str + i));
    printf("\n");*/
    while (*(str + i) != '\0')
    {
        printf("%c", *(str + i));
        i++;
    }

    printf("\n");
}

int main()
{
    //int vet[5] = {1,2,3,4,5};
    char vet[] = "willian lindo";

    puthcar(vet);

    return (0);
}
