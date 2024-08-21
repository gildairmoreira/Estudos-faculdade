#include <stdio.h>
#include <math.h>

// Função recursiva para calcular o fatorial exponencial
unsigned long long fatorialExponencial(int n) {
    // Caso base: fatorial exponencial de 1 é 1
    if (n == 1) {
        return 1;
    }

    // Calcula o fatorial exponencial de n - 1
    unsigned long long menorFatorial = fatorialExponencial(n - 1);

    // Calcula n elevado à potência do fatorial exponencial de n - 1
    unsigned long long resultado = pow(n, menorFatorial);

    return resultado;
}

int main() {
    int n;
    
    printf("Digite o valor de N: ");
    scanf("%d", &n);
    
    if (n > 0) {
        printf("O fatorial exponencial de %d e: %llu\n", n, fatorialExponencial(n));
    } else {
        printf("O valor de N deve ser um numero inteiro positivo.\n");
    }

    return 0;
}
