#include <stdio.h>

int main()
{
    float valor_lido;
    float valor_desconto;
    float valor_parcela;
    float comissao_vista;
    float comissao_parcela;

    printf("Digite o valor do produto: ");
    scanf("%f", &valor_lido);
    
    valor_desconto = valor_lido * (1.0 - (10.0 / 100.0));
    valor_parcela = valor_lido / 3.0;
    comissao_vista = valor_desconto * (5.0 / 100.0);
    comissao_parcela = valor_lido * (5.0 / 100.0);

    printf("O total a pagar com deconto: %f\n", valor_desconto);
    printf("O valor de cada parcela, no parcelamento de 3x sem juros: %f\n", valor_parcela);
    printf("A comissão do vendedor, no caso da venda ser a vista: %f\n", comissao_vista);
    printf("A comissão do vendedor, no caso da venda ser parcelada: %f\n", comissao_parcela);

    return (0);
}
