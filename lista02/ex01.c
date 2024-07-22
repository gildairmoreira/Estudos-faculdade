#include <stdio.h>

int main() {
    int A[10], B[10], C[10];

    // Leitura dos valores do vetor A
    printf("Entre com os valores do vetor A:\n");
    for (int i = 0; i < 10; i++) {
        printf("A[%d]: ", i);
        scanf("%d", &A[i]);
    }

    // Leitura dos valores do vetor B
    printf("\nEntre com os valores do vetor B:\n");
    for (int i = 0; i < 10; i++) {
        printf("B[%d]: ", i);
        scanf("%d", &B[i]);
    }

    // Cálculo do vetor C = A - B
    for (int i = 0; i < 10; i++) {
        C[i] = A[i] - B[i];
    }

    // Impressão dos elementos do vetor C
    printf("\nOs elementos do vetor C são:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d ", C[i]);
    }
    printf("\n");

    return 0;
}
