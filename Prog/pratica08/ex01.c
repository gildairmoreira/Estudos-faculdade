#include <stdio.h>

int main() {
    float numeros[10];
    
    for (int i = 0; i < 10; i++) {
        numeros[i] = i * 1.5;
    }

    for (int i = 0; i < 10; i++) {
        printf("Valor na posicao %d: %.2f\tEndereco: %p\n", i, numeros[i], &numeros[i]);
    }

    return 0;
}