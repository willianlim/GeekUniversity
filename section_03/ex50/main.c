#include <stdio.h>

int main()
{
    int age;
    int current_year;
    int year_birth;

    printf("Digite o ano atual: ");
    scanf("%d", &current_year);
    printf("Quantos anos você completa esse ano: ");
    scanf("%d", &age);

    year_birth = current_year - age;

    printf("O ano de nascimento: %d\n", year_birth);

    return (0);
}
