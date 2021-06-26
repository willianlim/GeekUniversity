#include <stdio.h>
#include <math.h>

int main()
{
    float altura;
    float peso;
    float imc;

    printf("Informe os dados do paciente.\n");
    printf("Peso em kg: ");
    scanf("%f", &peso);
    printf("Altura em metros: ");
    scanf("%f", &altura);

    imc = (peso / pow(altura, 2));

    if (imc < 18.5)
        printf("Abaixo do Peso.\n");
    else if (imc >= 18.6 && imc <= 24.9)
        printf("Saudável.\n");
    else if (imc >= 25.0 && imc <= 29.9)
        printf("Peso em excesso.\n");
    else if (imc >= 30.0 && imc <= 34.9)
        printf("Obesidade Grau 1.\n");
    else if (imc >= 35.0 && imc <= 39.9)
        printf("Obesidade Grau 2 (severa).\n");
    else if (imc >= 40.0)
        printf("Obesidade Grau 3 (mórbida).\n");

    return (0);
}
