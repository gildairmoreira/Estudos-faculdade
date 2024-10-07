#include <stdio.h>

int maiorValor(int vetor[], int tamanho) {
    if (tamanho == 1) {
        return vetor[0];
    }
    
    int valorRecursivo = maiorValor(vetor, tamanho - 1);
    
    if (vetor[tamanho - 1] > valorRecursivo) {
        return vetor[tamanho - 1];
    } else {
        return valorRecursivo;
    }
}

int main() {
    int vetor[3];

    printf("Digite 3 numeros inteiros:\n");
    for (int i = 0; i < 3; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    int maior = maiorValor(vetor, 3);
    
    printf("O maior valor no vetor e: %d\n", maior);

    return 0;
}
