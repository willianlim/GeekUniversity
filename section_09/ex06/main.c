#include <stdio.h>

void    conversion(int x, int y, int z)
{
    int result;

    result = x * 3600 + y * 60 + z;
    printf("O valor das desse horário em segundos: %d\n", result);
}

int main()
{
    int hour, minut, seconds;

    printf("Digite a hora atual.\n");
    printf("Horas: ");
    scanf("%d", &hour);
    printf("Minutos: ");
    scanf("%d", &minut);
    printf("Segundos: ");
    scanf("%d", &seconds);

    conversion(hour, minut, seconds);

    return (0);
}
