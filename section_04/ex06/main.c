#include <stdio.h>

int main()
{
    int x;
    int y;
    int s;

    printf("Digite dois número inteiros.\n");
    printf("Primeiro: ");
    scanf("%d", &x);
    printf("Segundo: ");
    scanf("%d", &y);

    if (x > y)
    {
        printf("%d é o maior número.\n", x);
        s = x - y;
        printf("A diferença entre esses números: %d\n", s);
    }
    else
    {
        printf("%d é o maior número.\n", y);
        s = y - x;
        printf("A diferença entre esses números: %d\n", s);
    }

    return (0);
}
