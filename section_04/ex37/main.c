#include <stdio.h>

int main()
{
    float hora_chega;
    float hora_partida;
    float min_chegada;
    float min_partida;
    float hora_total;
    float min_total;
    float hora_final;
    float min_final;
    float preco;

    printf("Digite a hora e o minuto de chegada.\n");
    printf("Hora: ");
    scanf("%f", &hora_chega);
    printf("Minuto: ");
    scanf("%f", &min_chegada);
    printf("Digite a hora e o minuto de partida.\n");
    printf("Hora: ");
    scanf("%f", &hora_partida);
    printf("Minuto: ");
    scanf("%f", &min_partida);

    if (hora_chega > hora_partida)
        hora_partida = hora_chega + 23;
    if (min_chegada > min_partida)
    {
        min_partida = min_partida + 60;
        hora_partida -= 1;
    }

    min_final = min_partida - min_chegada;
    hora_final = hora_partida - hora_chega;

    if (hora_final >= 1)
    {
        if (min_final > 1)
            printf("O carro ficou estacionado durante %f horas e %f minutos.\n", hora_final, min_final);
        else
            printf("O carro ficou estacionado durante %f hora(s).\n", hora_final);
    }
    else
        printf("O carro ficou estacionado durante %f minutos.\n", min_final);


    min_total = (hora_final * 60) + min_final;

    if (min_total <= 120)
    {
        if (min_total <= 60)
        {
            preco = 1.0;
            printf("Preço total: R$%.2f.\n", preco);
        }
        else
        {
            preco = 2.0;
            printf("Preço total: R$%.2f.\n", preco);
        }
    }
    else if (min_total <= 240.0)
    {
        if (min_total <= 180.0)
        {
            preco = 2 + 1.40;
            printf("Preço total: R$%.2f.\n", preco);
        }
        else
        {
            preco = 2 + (1.40 * 2);
            printf("Preço total: R$%.2f.\n", preco);
        }
    }
    else
    {
        hora_total = min_total / 60;
        preco = 4.40 + ((hora_total - 4) * 2);
        printf("Preço total: R$%.2f.\n", preco);
    }

    return (0);
}
