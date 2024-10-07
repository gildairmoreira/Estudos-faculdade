#include <stdio.h>

unsigned int catalan(int n) {
    if (n == 0) {
        return 1;
    }
    return (2 * (2 * n - 1) * catalan(n - 1)) / (n + 1);
}

int main() {
    int n;

    printf("Digite um numero inteiro não-negativo: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Número inválido.\n");
        return 1;
    }

    printf("O numero de Catalan de %d é: %u\n", n, catalan(n));

    return 0;
}
