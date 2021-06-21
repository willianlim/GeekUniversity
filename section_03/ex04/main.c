#include <stdio.h>
#include <math.h>

int main()
{
    float x;
    float r;

    printf("Digite um número do tipo real: ");
    scanf("%f", &x);

    r = pow(x, 2);

    printf("O resultado do quadrado desse número é: %.3f\n", r);

    return (0);
}

/*
Na hora de compilar precisa vincular a biblionteca matemática.
gcc main.c -lm.
*/