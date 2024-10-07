#include <stdio.h>

int main()
{
    float metrosCubicos, litros;

    printf("Digite o volume em metros cubicos: ");
    scanf("%f", &metrosCubicos);

    litros = metrosCubicos * 1000;

    printf("O volume em litros eh: %.2f\n", litros);

    return 0;
}
