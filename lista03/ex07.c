#include <stdio.h>
#include <math.h>

float fatorialExponencial(int n) {
    if (n == 0) {
        return 1;
    }
    float potenciaSuperior = fatorialExponencial(n - 1);
    return pow(n, potenciaSuperior);
}

int main() {
    int n;

    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Numero invalido.\n");
        return 1;
    }

    float resultado = fatorialExponencial(n);
    printf("O fatorial exponencial de %d e: %e\n", n, resultado);

    return 0;
}
