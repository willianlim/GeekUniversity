#include <stdio.h>

int main()
{
    float fabrica;
    float result;
    
    printf("Informe o custo de fábrica do carro: ");
    scanf("%f", &fabrica);

    if (fabrica <= 12000)
    {
        result = fabrica * (1.0 + (5.0 / 100.0));
        printf("Custo ao consumidor: %f.\n", result); 
    }
    else if (fabrica > 12000 && fabrica <= 25000)
    {
        result = fabrica * (1.0 + (10.0 / 100.0) * (1.0 + (15.0 / 100.0)));
        printf("Custo ao consumidor: %f.\n", result);
    }
    else if (fabrica > 25000)
    {
        result = fabrica * (1.0 + (15.0 / 100.0) * (1.0 + (20.0 / 100.0)));
        printf("Custo ao consumidor: %f.\n", result);
    }

    return (0);
}
