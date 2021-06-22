#include <stdio.h>

int main()
{
    float altura_degrau;
    float altura_desejada;
    float qtde_degrau;

    printf("Digite a algura do degrau: ");
    scanf("%f", &altura_degrau);
    printf("Altura que deseja alcançar: ");
    scanf("%f", &altura_desejada);

    qtde_degrau = altura_desejada / altura_degrau;

    printf("A qtde de degraus necessária: %f\n", qtde_degrau);

    return (0);
}
