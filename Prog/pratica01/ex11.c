#include <stdio.h>

int main()
{
    int hora, minuto, totalMinutos;

    printf("Digite a hora (HH:MM): ");
    scanf("%d:%d", &hora, &minuto);

    totalMinutos = (hora * 60) + minuto;

    printf("A hora digitada em minutos eh: %d\n", totalMinutos);

    return 0;
}
