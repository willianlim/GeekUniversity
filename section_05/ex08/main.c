#include <stdio.h>

int main()
{
    float maior;
    float menor;
    float numero;
    int i;

    maior = 0;
    menor = 0;

    printf("Escreva 10 números.\n");

    for (i = 0; i < 10; i++)
    {
        printf("%d°: ", i+1);
        scanf("%f", &numero);

        if (i == 0)
        {
            maior = menor = numero;
        }
        else if (numero > maior)
            maior = numero;
        else if (numero < menor)
            menor = numero;
    }
    
    printf("Valores lidos.\n");
    printf("Maior: %f.\nMenor: %f.\n", maior, menor);

    return (0);
}
