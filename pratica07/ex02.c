#include <stdio.h>
#include <math.h>

float calcularHipotenusa(float a, float b) {
    return sqrt(a * a + b * b);
}

int main() {
    float a, b;

    printf("Digite o valor do cateto a: ");
    scanf("%lf", &a);

    printf("Digite o valor do cateto b: ");
    scanf("%lf", &b);

    float hipotenusa = calcularHipotenusa(a, b);
    printf("O valor da hipotenusa e: %.2f\n", hipotenusa);

    return 0;
}
