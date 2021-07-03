#include <stdio.h>

int main()
{
    /*O nome do array é apenas um
    ponteiro que aponta para o
    primeiro elemento do array.*/
    int vet[5] = {1,2,3,4,5};
    int *p = vet;
    
    for (int i = 0; i < 5; i++)
        printf("%d\n", *(p+1));
    
    /*Array: conjunto de dados
    armazenados de forma sequencial.*/
    for (int i = 0; i < 5; i++)
        printf("%d\n", p[i]);

    return (0);
}
