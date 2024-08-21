#include <stdio.h>

// Função recursiva para calcular o número de Catalan
unsigned long long catalan(int n) {
    // Caso base: C(0) = 1
    if (n == 0) {
        return 1;
    }
    
    // Caso recursivo: C(n) = (2(2n - 1) / (n + 1)) * C(n - 1)
    unsigned long long c_n_minus_1 = catalan(n - 1);
    return (2 * (2 * n - 1) * c_n_minus_1) / (n + 1);
}

int main() {
    int n;
    
    printf("Digite o valor de n para calcular o numero de Catalan: ");
    scanf("%d", &n);
    
    if (n >= 0) {
        printf("C(%d) = %llu\n", n, catalan(n));
    } else {
        printf("O valor de n deve ser um numero inteiro nao negativo.\n");
    }

    return 0;
}
