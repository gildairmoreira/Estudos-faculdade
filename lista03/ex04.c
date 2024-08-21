#include <stdio.h>

// Função recursiva para calcular k^n
int potencia(int k, int n) {
    // Caso base: qualquer número elevado a 0 é 1
    if (n == 0) {
        return 1;
    }
    // Caso recursivo: k^n = k * k^(n-1)
    else {
        return k * potencia(k, n - 1);
    }
}

int main() {
    int k, n;
    
    printf("Digite o valor de k (base): ");
    scanf("%d", &k);
    
    printf("Digite o valor de n (expoente): ");
    scanf("%d", &n);
    
    if (k > 0 && n >= 0) {
        int resultado = potencia(k, n);
        printf("%d^%d = %d\n", k, n, resultado);
    } else {
        printf("Os valores devem ser positivos e o expoente deve ser nao-negativo.\n");
    }

    return 0;
}
