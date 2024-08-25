#include <stdio.h>

int potencia(int k, int n) {
    if (n == 0) {
        return 1;
    }
    return k * potencia(k, n - 1);
}

int main() {
    int k, n;

    printf("Digite um numero inteiro positivo k: ");
    scanf("%d", &k);
    printf("Digite um numero inteiro positivo n: ");
    scanf("%d", &n);

    if (k < 0 || n < 0) {
        printf("Os numeros devem ser inteiros positivos.\n");
        return 1;
    }

    int resultado = potencia(k, n);
    printf("%d elevado a %d e: %d\n", k, n, resultado);

    return 0;
}
