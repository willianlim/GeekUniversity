#include <stdio.h>

int main()
{
    int hour, minute, second, duration;

    printf("Entre com horas\n");
    scanf("%d", &hour);

    if (hour <= 24 && hour >= 0)
    {
        hour *= 3600;
        printf("Entre com minutos\n");
        scanf("%d", &minute);
        if (minute <= 60 || minute >= 0)
        {
            hour = hour + (minute * 60);
            printf("Entre com segundos\n");
            scanf("%d", &second);
            if (second <= 60 || second >= 0)
            {
                hour = hour + second;
            }
            else
                printf("Errado\n");
        }
        else
            printf("Errado\n");
    }
    else
        printf("Errado\n");
    
    printf("Entre com o tempo de duração da experiencia em SEGUNDOS: ");
    scanf("%d", &duration);

    duration += hour;

    hour = duration / 3600;
    minute = (duration % 3600) / 60;
    second = (duration % 3600) % 60;

    printf("HORÁRIO DO FIM: %dh%dm%ds", hour, minute, second);

    return (0);
}
