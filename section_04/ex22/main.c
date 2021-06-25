#include <stdio.h>

int main()
{
    int age;
    int time_work;
    
    printf("Digite os dados de um trabalhador.\n");
    printf("Idade: ");
    scanf("%d", &age);
    printf("Tempor de serviço: ");
    scanf("%d", &time_work);

    if (age >= 60 && time_work >= 25)
        printf("Pode se aposentar.\n");
    else if (age >= 65 || time_work >= 30)
        printf("Pode se aposentar.\n");
    else
        printf("Não pode se aposentar.\n");

    return (0);
}
