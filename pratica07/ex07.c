#include <stdio.h>

float calcularSerie(int N) {
    float S = 0.0;

    for (int i = 1; i <= N; i++) {
        float numerador = (i * i) + 1;
        float denominador = i + 3;
        S += numerador / denominador;
    }

    return S;
}

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    float resultado = calcularSerie(N);

    printf("Resultado da serie: %.2f\n", resultado);

    return 0;
}
