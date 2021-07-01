#include <stdio.h>

int main()
{
    int num;
    int fat;

    printf("Digite um número inteiro positivo: ");
    scanf("%d", &num);

    fat = num;

    for (int i = 1; i < num; i++)
        fat = fat * i;
    printf("O fatorial é %d\n", fat);

    return (0);
}
