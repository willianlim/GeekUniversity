#include <stdio.h>

int main()
{
    int vetor[8];
    int i;
    int x,y;

    for (i = 0; i < 8; i++)
    {
        printf("Digite o número da posição %d: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("Posição x: ");
    scanf("%d", &x);
    printf("Posição y: ");
    scanf("%d", &y);

    printf("O número contido na posição %d = %d eh %d = %d.\n", x, vetor[x], y, vetor[y]);
    printf("%d + %d = %d\n", vetor[x], vetor[y], vetor[x] + vetor[y]);

    return (0);
}
