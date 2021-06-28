#include <stdio.h>
#include <math.h>

int main()
{
    float vet1[10];
    float vet2[10];
    float numero;

    for (int i = 0; i < 10; i++)
    {
        printf("Digite um número: ");
        scanf("%f", &numero);
        vet1[i] = numero;
    }

    for (int j = 0; j < 10; j++)
        vet2[j] = pow(vet1[j], 2);

    printf("Os valores digitados: ");

    for (int k = 0; k < 10; k++)
        printf("%f\n", vet1[k]);
    
    printf("\n");
    
    printf("Os valores digitados ao quadrado: ");

    for (int l = 0; l < 10; l++)
        printf("%f\n", vet2[l]);
    
    printf("\n");

    return (0);
}
