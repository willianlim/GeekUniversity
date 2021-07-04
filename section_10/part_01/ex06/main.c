#include <stdio.h>

int soma_dobro(int A, int B)
{
    int s;

    s = A * 2 + B * 2;

    return (s);
}

int main()
{
    int n1;
    int n2;
    int result;

    printf("Digite dois valores.\n");
    printf("Primeiro: ");
    scanf("%d", &n1);
    printf("Segundo: ");
    scanf("%d", &n2);
    
    result = soma_dobro(n1, n2);

    printf("A soma do dobro dos valores lidos: %d\n", result);

    return (0);
}
