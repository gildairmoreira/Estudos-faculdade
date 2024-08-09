#include <stdio.h>
#include <math.h>

// Função para calcular a hipotenusa
float calcularHipotenusa(float a, float b) {
    return sqrt(a * a + b * b);
}

int main() {
    float a, b;

    // Entrada dos valores dos catetos
    printf("Digite o valor do cateto a: ");
    scanf("%lf", &a);

    printf("Digite o valor do cateto b: ");
    scanf("%lf", &b);

    // Chamada da função e exibição do resultado
    float hipotenusa = calcularHipotenusa(a, b);
    printf("O valor da hipotenusa é: %.2f\n", hipotenusa);

    return 0;
}
