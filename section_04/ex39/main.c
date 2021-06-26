#include <stdio.h>

int main()
{
    float salario_atual;
    float reajuste;
    float tempo_serv;

    printf("Digite algumas informações do funcionário.\n");
    printf("Salário: ");
    scanf("%f", &salario_atual);
    printf("Tempo de serviço: ");
    scanf("%f", &tempo_serv);

    if (salario_atual <= 500)
    {
        if (tempo_serv < 1)
        {
            reajuste = salario_atual * (1.0 + (25.0 / 100.0));
            printf("Salário reajustado: %f.\n", reajuste);
        }
    }
    else if (salario_atual > 500 && salario_atual <= 1000)
    {
        if (tempo_serv >= 1 && tempo_serv <= 3)
        {
            reajuste = 100 + salario_atual * (1.0 + (20.0 / 100.0));
            printf("Salário reajustado: %f.\n", reajuste);
        }
    }
    else if (salario_atual > 1000 && salario_atual <= 1500)
    {
        if (tempo_serv >= 4 && tempo_serv <= 6)
        {
            reajuste = 200 + salario_atual * (1.0 + (15.0 / 100.0));
            printf("Salário reajustado: %f.\n", reajuste);
        }
    }
    else if (salario_atual > 1500 && salario_atual <= 2000)
    {
        if (tempo_serv >= 7 && tempo_serv <= 10)
        {
            reajuste = 300 + salario_atual * (1.0 + (10.0 / 100.0));
            printf("Salário reajustado: %f.\n", reajuste);
        }
    }
    else if (salario_atual > 2000)
    {
        if (tempo_serv > 10)
        {
            reajuste = salario_atual + 500;
            printf("Salário reajustado: %f.\n", reajuste);
        }
    }

    return (0);
}
