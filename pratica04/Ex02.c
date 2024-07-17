#include <stdio.h>

int main() {
    int vetor[10];
    int count_impar = 0;

    for (int i = 0; i < 10; i++) {
        printf("Digite um numero inteiro: ");
        while (scanf("%d", &vetor[i]) != 1) {
            printf("Entrada invalida. Digite um numero inteiro: ");
            while (getchar() != '\n'); // Limpar buffer de entrada
        }
    }

    // números ímpares
    printf("Numeros impares no vetor: ");
    for (int i = 0; i < 10; i++) {
        if (vetor[i] % 2 != 0) {
            printf("%d ", vetor[i]);
            count_impar++;
        }
    }
    printf("\n");

    // quantidade de números ímpares
    printf("Quantidade de numeros impares: %d\n", count_impar);

    return 0;
}
