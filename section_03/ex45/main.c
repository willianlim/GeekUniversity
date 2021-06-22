#include <stdio.h>

int main()
{
    char letra_01;
    char letra_02;

    printf("Digite uma letra maiúscula: ");
    scanf("%c", &letra_01);

    letra_02 = letra_01 + 32;

    printf("Essa letra em minúscula: %c\n", letra_02);

    return (0);
}
