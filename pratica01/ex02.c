#include <stdio.h>

int main()
{
    float grausCelsius;
    float grausFahrenheit;

    printf("===== Digite a temperatura em Graus Celsius Para Converter em Fahrenheit =====\n");
    scanf("%f", &grausCelsius);

    grausFahrenheit = grausCelsius * (9.0 / 5.0) + 32.0;

    printf("A temperatura %.1f em Graus Celsius e igual a %.1f em Fahrenheit", grausCelsius, grausFahrenheit);
    return 0;
}
