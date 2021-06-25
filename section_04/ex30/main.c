#include <stdio.h>

int main()
{
    float n1;
    float n2;
    float n3;
    float aux;

    printf("Digite três números.\n");
    printf("Primeiro: ");
    scanf("%f", &n1);
    printf("Segundo: ");
    scanf("%f", &n2);
    printf("Terceiro: ");
    scanf("%f", &n3);

    if (n1 > n2)
    {
        aux = n1;
        n1 = n2;
        n2 = aux;
    }
    if (n1 > n3)
    {
        aux = n1;
        n1 = n3;
        n3 = aux;
    }
    if (n2 > n3)
    {
        aux = n2;
        n2 = n3;
        n3 = aux;
    }
    
    printf("Ordem crescente: %f, %f, %f .\n", n1, n2, n3);

    return (0);
}
