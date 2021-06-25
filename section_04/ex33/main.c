#include <stdio.h>

int main()
{
    float new_price;

    printf("Digite o preço antigo de um produto: ");
    scanf("%f", &new_price);

    if (new_price <= 80)
        printf("Barato.\n");
    else if (new_price > 80 && new_price <= 120)
        printf("Normal.\n");
    else if (new_price > 120 && new_price <= 200)
        printf("Caro.\n");
    else if (new_price > 200)
        printf("Muito Caro.\n");
    
    return (0);
}
